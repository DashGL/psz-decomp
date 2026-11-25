"""Function inventory for Phantasy Star Zero (USA, C24E), from the Ghidra
exports in config/.

Inventory lives in config/arm9/symbols.txt (8,118 main-module functions) +
config/arm9/overlay_symbols.txt (6,030 overlay functions across ov000..ov031).

Every consumer gets the same dict shape:
    {"name", "module", "addr", "size"}   # size is the Ghidra byte count
"""
import pathlib
import re

REPO = pathlib.Path(__file__).resolve().parent.parent

CONFIGS = [
    REPO / "config" / "arm9" / "symbols.txt",
    REPO / "config" / "arm9" / "overlay_symbols.txt",
]

_LINE_RE = re.compile(
    r"name=(?P<name>\S+)\s+module=(?P<module>\S+)\s+"
    r"addr=0x(?P<addr>[0-9a-fA-F]+)\s+size=0x(?P<size>[0-9a-fA-F]+)")

_MODULE_ALIASES = {"main": "arm9"}
for _oid in range(32):
    _MODULE_ALIASES[f"ov{_oid:03d}"] = f"arm9ov{_oid:03d}" if _oid == 0 else f"arm9ov{_oid}"

_REACH_FILES = {
    "call_reachable": "call_reachable.txt",
    "indirect_only": "indirect_only.txt",
    "dead": "dead_candidates.txt",
}

_cache = None
_module_data = {}


def load_funcs():
    """Every known function across ARM9 and overlays, sorted by (module, addr)."""
    global _cache
    if _cache is not None:
        return _cache
    out = []
    for cfg in CONFIGS:
        if not cfg.is_file():
            continue
        for line in cfg.read_text(encoding="utf-8").splitlines():
            m = _LINE_RE.search(line)
            if not m:
                continue
            out.append({
                "name": m.group("name"),
                "module": _MODULE_ALIASES.get(m.group("module"), m.group("module")),
                "addr": int(m.group("addr"), 16),
                "size": int(m.group("size"), 16),
            })
    out.sort(key=lambda f: (f["module"], f["addr"]))
    _cache = out
    return out


def load_reach():
    """addr(int) -> 'call_reachable' | 'indirect_only' | 'dead' | 'unclassified'."""
    base = REPO / "config" / "reachability"
    reach = {}
    for cls, fn in _REACH_FILES.items():
        p = base / fn
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8").splitlines():
            line = line.strip()
            if not line:
                continue
            reach[int(line.split()[0], 16)] = cls
    return reach


def by_addr(funcs=None):
    return {f["addr"]: f for f in (funcs if funcs is not None else load_funcs())}


def by_name(funcs=None):
    return {f["name"]: f for f in (funcs if funcs is not None else load_funcs())}


def true_size(f, funcs=None):
    """Function byte span including its trailing literal pool: the gap to the
    next function in the same module (Ghidra boundaries routinely stop short
    of the pool), capped at 0x400 of extension."""
    size = f["size"]
    fs = funcs if funcs is not None else load_funcs()
    nxt = min((g["addr"] for g in fs
               if g["module"] == f["module"] and g["addr"] > f["addr"]),
              default=f["addr"] + size)
    gap = nxt - f["addr"]
    if gap > size and gap - size <= 0x400:
        size = gap
    return size


def mode_of(f, funcs=None):
    """'thumb' | 'arm' | None (unknown)."""
    global _module_data
    try:
        from match import MODULES
    except Exception:
        return None
    if f["module"] not in MODULES:
        return None
    rel_path, base = MODULES[f["module"]]
    if _module_data.get(f["module"]) is None:
        p = REPO / "assets" / "extracted" / rel_path
        if not p.is_file():
            return None
        _module_data[f["module"]] = (p.read_bytes(), base)
    data, base = _module_data[f["module"]]
    off = f["addr"] - base
    if off < 0:
        return None
    code = data[off:off + 4]
    if len(code) < 4:
        return None
    word = int.from_bytes(code, "little")
    if (word >> 28) == 0xE:
        return "arm"
    hw = word & 0xFFFF
    if (hw & 0xFE00) == 0xB400 or (hw & 0xF800) == 0x4800 or (hw & 0xFF00) == 0xB500:
        return "thumb"
    return "thumb"
