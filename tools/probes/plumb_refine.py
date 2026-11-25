"""Plumbing refinement v2 for Phantasy Star Zero (USA, C24E).

Reads notes/reference/game-plumbing-census/classification.txt and writes
notes/reference/game-plumbing-census/refine/functions.csv (read by tools/status.py).
"""
import bisect
import csv
import re
import struct
import sys
import pathlib

REPO = pathlib.Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools"))
import funcs as F          # noqa: E402
import reachability as R   # noqa: E402
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB  # noqa: E402

CENSUS = REPO / "notes" / "reference" / "game-plumbing-census"
OUTDIR = CENSUS / "refine"

JUNK = set()
PREENTRY = set()
HW_LO, HW_HI = 0x04000000, 0x04200000
SEEDS = {0x02000800, 0x0200a380, 0x0200a3a0}

md_a = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md_t = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
LDR_RE = re.compile(r"\[pc, #(-?(?:0x[0-9a-fA-F]+|\d+))\]")


def imm_int(s):
    return int(s, 16) if s.lower().lstrip("-").startswith("0x") else int(s)


def main():
    live = set()
    for cls in ("call_reachable", "indirect_only"):
        for line in (REPO / "config" / "reachability" /
                     F._REACH_FILES[cls]).read_text().splitlines():
            if line.strip():
                live.add(int(line.split()[0], 16))
    dead = set()
    for line in (REPO / "config" / "reachability" /
                 "dead_candidates.txt").read_text().splitlines():
        if line.strip():
            dead.add(int(line.split()[0], 16))

    wide, leafjoin, game, boot, blocked_census = set(), set(), set(), set(), set()
    section = None
    for line in (CENSUS / "classification.txt").read_text().splitlines():
        if line.startswith("# SDK_STRICT"):
            section = None
        elif line.startswith("# SDK_WIDE"):
            section = "wide"
        elif line.startswith("# GAME_SIDE"):
            section = "game"
        elif line.startswith("# boot seeds"):
            section = "boot"
        elif line.startswith("# closure blocked"):
            section = "blocked"
        elif line.startswith("0x"):
            a = int(line.split()[0], 16)
            if section == "wide":
                wide.add(a)
                if "# leaf-join" in line:
                    leafjoin.add(a)
            elif section == "game":
                game.add(a)
            elif section == "boot":
                boot.add(a)
            elif section == "blocked":
                blocked_census.add(a)

    fl = [f for f in F.load_funcs() if f["module"] == "arm9"]
    byaddr = {f["addr"]: f for f in fl}
    addrs = sorted(byaddr)
    for a in addrs:
        if 0x020c5464 <= a <= 0x020c61ec:
            SEEDS.add(a)
    ends = {a: min(addrs[i + 1] if i + 1 < len(addrs) else R.ARM9_END,
                   R.ARM9_END)
            for i, a in enumerate(addrs)}
    names = {a: byaddr[a]["name"] for a in addrs}
    arm9 = (R.EXTRACT / "arm9" / "arm9.bin").read_bytes()

    def containing(x):
        if not (R.ARM9_BASE <= x < R.ARM9_END):
            return None
        i = bisect.bisect_right(addrs, x) - 1
        return addrs[i] if i >= 0 else None

    banked = {f.stem for f in (REPO / "src" / "arm9").glob("*.c")}
    name2addr = {names[a]: a for a in addrs}
    banked_addr = {name2addr[n] for n in banked if n in name2addr}

    universe = (live - JUNK) | PREENTRY

    def faithful(a):
        lo, hi = a - R.ARM9_BASE, ends[a] - R.ARM9_BASE
        res = {"calls": set(), "vals": [], "n_t": 0, "n_a": 0, "thumb": None}
        if hi <= lo:
            return res
        span = arm9[lo:hi]
        for tag, md, _step in (("n_t", md_t, 2), ("n_a", md_a, 4)):
            n = 0
            for ins in md.disasm(span, a):
                if ins.mnemonic in ("(bad)", "udf") or ins.bytes in (
                        b"\x00\x00", b"\x00\x00\x00\x00"):
                    break
                n += 1
            res[tag] = n
        al = 0
        for off in range(0, min(res["n_a"] * 4, hi - lo) - 3, 4):
            (w,) = struct.unpack_from("<I", span, off)
            if w >> 28 == 0xE:
                al += 1
        if res["n_a"] >= 3 and al >= res["n_a"] * 0.8:
            thumb = False
        else:
            thumb = res["n_t"] >= res["n_a"] and res["n_t"] > 0
        res["thumb"] = thumb
        step = 2 if thumb else 4
        n = res["n_t"] if thumb else res["n_a"]
        decode_len = min(n * step, hi - lo)
        md = md_t if thumb else md_a
        slots = []
        for ins in md.disasm(arm9[lo:lo + decode_len], a):
            o = ins.op_str
            m = ins.mnemonic
            if m in ("bl", "blx") and o.startswith("#0x"):
                t = int(o[1:], 16)
                if t != a:
                    res["calls"].add(t)
            elif m in ("ldr", "ldrb") and "[pc," in o:
                mm = LDR_RE.search(o)
                if mm:
                    base = ((ins.address + 4) & ~3) if thumb else ins.address + 8
                    slots.append(base + imm_int(mm.group(1)))
        pool_off = lo + decode_len
        for off in range(0, max(0, (hi - pool_off) - 3), 4):
            (w,) = struct.unpack_from("<I", arm9, pool_off + off)
            res["vals"].append((a + decode_len + off, w, "pool"))
        for slot in slots:
            so = slot - R.ARM9_BASE
            if lo <= so <= hi - 4:
                (v,) = struct.unpack_from("<I", arm9, so)
                res["vals"].append((slot, v, "ldr"))
        return res

    facts, callees_of = {}, {}
    for a in sorted(universe):
        facts[a] = faithful(a)
        callees_of[a] = {containing(c) for c in facts[a]["calls"]} - {None, a}

    def ev_lit(v):
        f = containing(v)
        if f is not None and f == v:
            return False
        if f is not None:
            return True
        if 0x02000000 <= v < 0x02400000:
            return True
        if 0x01FF8000 <= v < 0x02000000:
            return True
        if 0x027E0000 <= v < 0x02800000:
            return True
        return False

    def ev_hw(v):
        return HW_LO <= v < HW_HI

    def lit_region(v):
        if 0x027E0000 <= v < 0x02800000:
            return "dtcm"
        if 0x01FF8000 <= v < 0x02000000:
            return "itcm"
        f = containing(v)
        if f is not None:
            return "imgdata"
        if 0x02000000 <= v < 0x02400000:
            return "ram"
        return "hw" if ev_hw(v) else "other"

    verdict, ev_of = {}, {}
    for a in sorted(universe):
        litvals = [(s, v) for s, v, k in facts[a]["vals"] if ev_lit(v)]
        hwvals = [(s, v) for s, v, k in facts[a]["vals"] if ev_hw(v)]
        cal = callees_of[a]
        pure = cal <= (wide | SEEDS | boot | {a})
        if a in SEEDS or a in boot or a in PREENTRY:
            verdict[a] = "plumb_seed"
        elif a in wide:
            if pure and not litvals and not hwvals:
                verdict[a] = "plumb_leaf" if a in leafjoin else "plumb_pure"
            else:
                verdict[a] = "demoted"
                tags = []
                if litvals:
                    tags.append("lit:" + ",".join(sorted({lit_region(v) for _s, v in litvals})))
                if hwvals:
                    tags.append("hw")
                if not pure:
                    tags.append("mixed")
                ev_of[a] = " ".join(tags)
        elif a in blocked_census and cal == set() and not litvals and not hwvals:
            verdict[a] = "plumb_blocked"
        elif a in game:
            if cal == set() and not litvals and not hwvals:
                verdict[a] = "game_leaf"
            elif cal and cal <= (wide | boot | SEEDS):
                verdict[a] = "game_bridge"
            else:
                verdict[a] = "game"
        else:
            verdict[a] = "game"

    def agg(s):
        return len(s), sum(ends[a] - a for a in s if a in ends)

    groups = {}
    for a, v in verdict.items():
        groups.setdefault(v, set()).add(a)
    game_ref = (groups.get("game", set()) | groups.get("game_leaf", set()) |
                groups.get("game_bridge", set()) | groups.get("demoted", set()))
    hw_only = {a for a in groups.get("demoted", set())
               if ev_of.get(a, "").strip() == "hw"}
    game_ref = game_ref - hw_only

    lines = [
        "plumbing refinement v2 - Phantasy Star Zero (USA, C24E)",
        f"universe {len(universe)} | dead {len(dead)} | wide {len(wide)} (leaf-joined {len(leafjoin)})",
        "",
    ]
    for v in ("plumb_seed", "plumb_pure", "plumb_leaf", "plumb_blocked",
              "demoted", "game_bridge", "game_leaf", "game"):
        n, b = agg(groups.get(v, set()))
        lines.append(f"  {v:14s} {n:5d} funcs {b:7d} bytes ({b//1024:4d} KB)")
    n, b = agg(game_ref)
    lines.append(f"\ngame side REFINED: {n} funcs, {b} bytes ({b//1024} KB)")
    report = "\n".join(lines)
    print(report)

    OUTDIR.mkdir(parents=True, exist_ok=True)
    (OUTDIR / "summary.txt").write_text(report + "\n")
    with open(OUTDIR / "functions.csv", "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["addr", "name", "size", "thumb", "verdict", "evidence",
                    "faithful_callees", "lit_vals", "hw_vals", "banked",
                    "wide", "leafjoin", "boot"])
        for a in sorted(universe):
            litvals = [(s, v) for s, v, k in facts[a]["vals"] if ev_lit(v)]
            hwvals = [(s, v) for s, v, k in facts[a]["vals"] if ev_hw(v)]
            w.writerow([
                f"0x{a:08x}", names[a], f"0x{ends[a]-a:x}",
                facts[a]["thumb"], verdict[a], ev_of.get(a, ""),
                ";".join(f"0x{c:08x}" for c in sorted(callees_of[a])),
                ";".join(f"0x{v:08x}@0x{s:08x}" for s, v in litvals),
                ";".join(f"0x{v:08x}" for s, v in hwvals),
                a in banked_addr, a in wide, a in leafjoin, a in boot])
    print(f"-> {OUTDIR / 'functions.csv'}")


if __name__ == "__main__":
    main()
