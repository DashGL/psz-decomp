"""Simplify-lattice driver for the readable layer (R21).

Owner directive: the spelling hunt must PUSH TO EXHAUSTION, not stop after a
few ad-hoc checks. This driver makes the loop objective:

  1. ENUMERATE candidate spellings per class (condition noise, point-of-use
     decls, declaration-space qualifiers/types, bool selects, constant names,
     call-name defines) -- mechanical generators, not ideas.
  2. MEASURE every candidate against the twin (byte gate: code + relocs).
  3. ADOPT every byte-identical winner, then RE-RUN the full enumeration on
     the evolved base (lattice: adoptions shift the schedule and free more).
  4. TERMINATE only on a full round with ZERO adoptions (exhaustion) or
     --max-rounds. The residue is every shape that never matched, each one a
     measured keep for the twin's note (not an untested leftover).

Usage:
  python tools/simplify_lattice.py src/arm9/FUN_X.c src-readable/arm9/FUN_X.c
      [--max-rounds 8] [--apply] [--log scratch/.../log.txt]

Classes S1-S6 (R21): condition noise, point-of-use decls, declaration-
space qualifiers/types, bool selects, constant names, call-name defines.
Classes S7-S9 (R34, the lint-artifact mirror): no-op statement tails,
constant-foldable literal casts, empty-TRUE-arm/else inversions --
every lint artifact class must exist as a spelled class here or the
sweep cannot repair what the linter flags (R34 lesson).

Acceptance standard is the same as match.py/rdp2_iter.py: code words AND
reloc entries must be identical to the twin's object. NEVER guessed.
"""
import argparse
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "scratch"))  # rdp2_iter.py lives in scratch
import rdp2_iter as R  # noqa: E402


# --------------------------------------------------------------------------
# class S1: condition noise  (x != 0 -> x ; x == 0 -> !x)  with count-guard
# --------------------------------------------------------------------------

COUNT_WORDS = ("count", "num", "cnt", "total", "len", "length", "size")


def s1_cond_noise(text):
    """Bool-context condition noise. Covers BOTH identifier and parenthesized-
    expression forms; the byte gate decides (some materialized-bool compares
    are machine-real and reject the fold). One candidate per site."""
    out = []
    # identifier != 0 (with count-word guard)
    for m in re.finditer(r"(\w+)\s*!=\s*0\b", text):
        name = m.group(1)
        if any(w in name.lower() for w in COUNT_WORDS):
            continue
        out.append(text[:m.start()] + name + text[m.end():])
    # (expr) != 0 -> the parenthesized condition alone
    for m in re.finditer(r"\(([^()]+(?:\([^()]*\)[^()]*)*)\)\s*!=\s*0\b", text):
        out.append(text[:m.start()] + "(" + m.group(1) + ")" + text[m.end():])
    # scalar == 0 -> !x (identifier only; mask tests excluded)
    for m in re.finditer(r"if\s*\(\s*(\w+)\s*==\s*0\s*\)", text):
        out.append(text.replace(m.group(0), f"if (!{m.group(1)})", 1))
    return [t for t in dict.fromkeys(out) if t != text]


# --------------------------------------------------------------------------
# class S2: point-of-use declaration (hoisted "T v;" + "v = e;" -> merge)
# --------------------------------------------------------------------------

def s2_point_of_use(text):
    """Merge a split decl+init back into one initialized declaration
    ('T v;' + 'v = e;' adjacent -> 'T v = e;') -- the point-of-use form."""
    out = []
    lines = text.splitlines(keepends=True)
    for i, l in enumerate(lines):
        m = re.match(r"^(\s*)([A-Za-z_][\w\s\*]*?)\s+(\w+);\s*(//.*)?\s*$", l)
        if not m:
            continue
        for j in range(i + 1, min(i + 4, len(lines))):
            m2 = re.match(rf"^\s*{re.escape(m.group(3))}\s*=\s*(.+;)$", lines[j])
            if m2:
                merged = (f"{m.group(1)}{m.group(2)} {m.group(3)} = {m2.group(1)}"
                          + (f" {m.group(4)}" if m.group(4) else "") + "\n")
                v = lines[:i] + [merged] + lines[i + 1:j] + lines[j + 1:]
                out.append("".join(v))
            elif lines[j].strip() and not lines[j].strip().startswith("//"):
                break
    return out


# --------------------------------------------------------------------------
# class S3: declaration space (extern qualifiers/types)
# --------------------------------------------------------------------------

OBJ_EXTERN = re.compile(
    r"^extern\s+(?!(?:volatile|const|void)\b)[us](?:8|16|32|64)\s+(\w+)(\[\])?;$", re.M)


def s3_declaration(text):
    """Object externs only (qualifier + array/scalar/pointer type variants);
    function prototypes are NOT declarations -- a `volatile` prototype is
    MWCC-noise that compiles and means nothing (R21 calibration bug)."""
    out = []
    for m in OBJ_EXTERN.finditer(text):
        name, is_arr = m.group(1), m.group(2) or ""
        line = m.group(0)
        if "volatile" not in line:
            out.append(text.replace(line, line.replace("extern", "extern volatile", 1), 1))
        if "const" not in line:
            out.append(text.replace(line, line.replace("extern", "extern const", 1), 1))
        if is_arr:
            scalar = re.sub(r"\[\];$", ";", line)
            scalar = re.sub(rf"\b{re.escape(name)}\b(?=[^;]*;)", f"*{name}", scalar, count=1)
            out.append(text.replace(line, scalar, 1))
    return out


# --------------------------------------------------------------------------
# class S4: bool selects (c ? 1 : 0 forms -> natural spellings)
# --------------------------------------------------------------------------

def s4_bool_select(text):
    """Materialized selects: (?1:0) -> explicit boolean spellings, in the
    human-preference order: parent-free bool-expr, single-paren != 0.
    Never emits the triple-paren noise form."""
    out = []
    for m in re.finditer(r"(\w+)\s*=\s*(\(.+?\)|[^;]+?)\s*\?\s*1\s*:\s*0\s*;", text):
        dst, cond = m.group(1), m.group(2).strip()
        if cond.startswith("(") and cond.endswith(")") and "(" in cond[1:-1]:
            # cond already parenthesized -- strip the redundant outer level for
            # the parent-free form
            inner = cond[1:-1]
            spellings = [f"{dst} = {inner};",
                         f"{dst} = ({inner}) != 0;",
                         f"{dst} = ({cond}) != 0;"]
        else:
            spellings = [f"{dst} = ({cond}) != 0;",
                         f"{dst} = ({cond}) ? 1 : 0;"]
        for sp in spellings:
            cand = text.replace(m.group(0), sp, 1)
            if cand != text:
                out.append(cand)
    return out


# --------------------------------------------------------------------------
# class S5: constant-name vocabulary (degree table, pow2, strides)
# --------------------------------------------------------------------------

DEG = {8192: "DEG_45", 16384: "DEG_90", 24576: "DEG_135", 32768: "DEG_180",
       40960: "DEG_225", 49152: "DEG_270", 57344: "DEG_315"}

DEG_DEFINES = """#define DEG_45    0x2000
#define DEG_90    0x4000
#define DEG_135   0x6000
#define DEG_180   0x8000
#define DEG_225   0xa000
#define DEG_270   0xc000
#define DEG_315   0xe000"""


def s5_constant_names(text):
    """Fixed-point degree vocabulary: NNNNN angles in a 0x10000-per-revolution
    domain are named, one candidate per LITERAL-VALUE (first site per round --
    the lattice's later rounds catch the rest)."""
    out = []
    sig = re.search(r"^(?:s32|u32|void|int)\s+(\w+)\s*\(", text, re.M)
    if not sig:
        return out
    for val, name in DEG.items():
        pat = re.compile(rf"(?<![\w.-]){val}(?![\w])")
        m = pat.search(text, sig.start())
        if not m:
            continue
        t = text[:m.start()] + name + text[m.end():]
        if "#define DEG_45" not in t:
            t = t[:sig.start()] + DEG_DEFINES + "\n\n" + t[sig.start():]
        out.append(t)
    return out


# --------------------------------------------------------------------------
# class S6: verbose call spellings (single-use result temps)
# --------------------------------------------------------------------------

def s6_call_forms(text):
    out = []
    # `T v = f(...); if (v)` -> `if (f(...))` single-use candidate
    for m in re.finditer(r"^\s*[A-Za-z_]\w*\s+(\w+)\s*=\s*(FUN_\w+\(.+?\));\n\s*if\s*\(\s*\1\s*\)\s*\{", text, re.M):
        t = re.sub(rf"{m.group(1)}\b", m.group(2).replace("\\", "\\\\"), text, count=0)
        out.append(t)
    return out


# --------------------------------------------------------------------------
# class S7: no-op statements (lint W12) -- delete `if (x);` empty tails
# --------------------------------------------------------------------------

def s7_noop_statements(text):
    """`stmt (cond);` with a bare-`;` tail -> `stmt (cond` + `) { } ->`
    `stmt (cond)`: the construct collapses (the branch-to-nothing is the
    decompiler's scaffold). Count-guards `for` headers; a CALL in the
    condition = spin-wait idiom, exempt (semantics, not scaffolding)."""
    out = []
    for m in re.finditer(
            r"(^\s*)(else\s+)?(if|for|while)\s*\(([^;{}()]*)\)\s*;\s*$",
            text, re.M):
        head = f"{m.group(2) or ''}{m.group(3)} ({m.group(4)})"
        if m.group(3) == "for" and m.group(4).count(";") < 2:
            continue  # can't prove a for-header is empty without both `;`
        if re.search(r"\w+\s*\(", m.group(4)):
            continue  # spin-wait idiom
        out.append(text[:m.start()] + m.group(1) + head + text[m.end():])
    return out


# --------------------------------------------------------------------------
# class S8: constant-foldable literal casts (lint W14 folded into E1;
# the GENERATOR lives here) -- (u32)0 -> 0 when byte-identical
# --------------------------------------------------------------------------

def s8_literal_cast_folds(text):
    out = []
    for m in re.finditer(r"\(\s*(?:u|s)(?:8|16|32|64)\s*\)\s*"
                         r"(0[xX][0-9a-fA-F]+[uUlL]{0,3}|\d+[uUlL]{0,3}"
                         r"|'(?:[^'\\]|\\.)')", text):
        lit = m.group(1)
        if lit.lower().startswith("0x") and len(lit) > 10:
            continue  # 64-bit-wide literals keep their type suffixes
        cand = text[:m.start()] + lit + text[m.end():]
        if cand != text:
            out.append(cand)
    return out


# --------------------------------------------------------------------------
# class S9: empty statement arms (lint W15) -- `{ }` arm / `if (x) {}` /
# `while (FUN_poll()) {}` spin-wait EXEMPT; dead-arm inversion is the human
# form when it byte-matches
# --------------------------------------------------------------------------

def s9_empty_block_forms(text):
    """Dead TRUE-arm with a live else: `if (c) { } else {B}` reads as
    nothing-then-work; the human positive test is `if (!c) {B}` (the
    else keyword dissolves into the inverted if). Call in the condition
    = spin-wait idiom, exempt. (A bare `if (c) { }` with NO else arm is
    the lint's W15 find; its deletion is a hand pass -- deleting changes
    the branch structure, measure by hand.)"""
    out = []
    for m in re.finditer(
            r"\bif\s*\(([^;{}()]+)\)\s*\{\s*\}\s*else\s*\{", text):
        if re.search(r"\w+\s*\(", m.group(1)):
            continue  # spin-wait idiom
        inv = re.sub(r"^\s*!\s*", "", m.group(1))
        out.append(text[:m.start()] + "if (!(" + inv + ")) {"
                   + text[m.end():])
    return out


# --------------------------------------------------------------------------
# class S10: self-increment vocabulary (R36b; lint W16's mirror) --
# `x = x + 1;` -> `x++;`, `x = x + K;` -> `x += K;`, INCLUDING through
# macro-accessor LHS (`slot_count(p) = slot_count(p) + 1;` ->
# `slot_count(p)++;`) -- that cell is the R36b catch and the W16 regex
# deliberately does NOT fire on accessor LHS (different codegen shape);
# the byte gate decides.
# --------------------------------------------------------------------------

def s10_self_increment(text):
    out = []
    for m in re.finditer(
            r"([A-Za-z_][\w.>()* ]*?)\s*=\s*([A-Za-z_][\w.>()* ]*?)\s*\+\s*"
            r"(\d+|0[xX][0-9a-fA-F]+|[A-Za-z_]\w*)\s*;", text):
        if m.group(1) != m.group(2):
            continue
        k = m.group(3)
        try:
            is_one = int(k, 0) == 1
        except ValueError:
            is_one = False  # variable RHS: always the `+=` form
        if is_one:
            out.append(text[:m.start()] + f"{m.group(1)}++;" + text[m.end():])
        else:
            out.append(text[:m.start()] + f"{m.group(1)} += {k};" + text[m.end():])
    return out


# --------------------------------------------------------------------------
# class S11: condition respells (R53; lint W11's mirror) -- two classes a
# human writes freely and the byte gate owns: (a) single-statement brace
# block -> braceless statement (what W11 flags, the S11 generator repairs);
# (b) operand-order flip for simple two-atom comparisons inside if/while
# heads (`A < B` -> `B > A`) -- no artifact triggers that class, so it has
# no lint mirror (P6's one-way artifact rule); the exhaustive sweep owns it.
# Operands must be bare atoms (identifier / index / macro-name / hex) so
# the flip stays inside spelled-condition space -- no operator-precedence
# invention. Each candidate = ONE respell at ONE site.
# --------------------------------------------------------------------------

def s11_condition_respells(text):
    out = []
    # (a) brace-drop: head line ends in `{`, exactly one statement line, close
    #     braces on the next line (the W11 spanning shape, comments preserved)
    block_re = re.compile(
        r"(?m)^(?P<head>[ \t]*(?:\}\s*)?(?:if|while|for|else(?:\s+if)?)\b[^\n{]*\{)"
        r"(?P<tail>[^\n]*)\n(?P<ind>[ \t]*)(?P<stmt>[^\n{};]{1,120};)[^\n]*\n[ \t]*\}(\n)")
    for m in block_re.finditer(text):
        head, tail, ind, stmt, tail_ln = m.group("head"), m.group("tail"), m.group("ind"), m.group("stmt"), m.group(5)
        bare_head = head[:head.rindex("{")].rstrip()
        repl = f"{bare_head}{tail.rstrip()}\n{ind}{stmt}{tail_ln}"
        out.append(text[:m.start()] + repl + text[m.end():])
    # (b) operand reorder, HUMAN-PREFERENCE ordered (R55): only constant-first
    # comparisons (`0 > x`, `TIME_MAX_SECONDS < elapsed`) get a candidate, and
    # it is the variable-first idiom form (`x < 0`, `elapsed > ...`); sites
    # already in the human order offer NOTHING, so the round cannot adopt the
    # unnatural direction (R53's sweep flipped ebd8's `x < 0` to `0 > x`
    # exactly this way - both spellings match, one candidate, wrong pick).
    flip_re = re.compile(
        r"(\b(?:if|while)\s*\(\s*)([A-Za-z_][\w\[\].]*|0[xX][0-9a-fA-F]+|\d+)"
        r"(\s*(?:<|>)\s*)([A-Za-z_][\w\[\].]*|0[xX][0-9a-fA-F]+|\d+)(\s*\))")
    for m in flip_re.finditer(text):
        a, op, b = m.group(2), m.group(3).strip(), m.group(4)
        if not a[0].isdigit():
            continue  # variable-first: already the human order
        if b[0].isdigit():
            continue  # const-const: not a spelling reorder
        new_op = ">" if op.startswith("<") else "<"
        out.append(text[:m.start()] + f"{m.group(1)}{b} {new_op} {a}{m.group(5)}"
                   + text[m.end():])
    return [t for t in dict.fromkeys(out) if t != text]


CLASSES = [s1_cond_noise, s2_point_of_use, s3_declaration, s4_bool_select,
           s5_constant_names, s6_call_forms,
           s7_noop_statements, s8_literal_cast_folds, s9_empty_block_forms,
           s10_self_increment, s11_condition_respells]


def lattice_round(twin, draft_path, log):
    adopted, tried = [], 0
    offered = {}  # class -> candidates offered (P8's "zero offered =
    text = draft_path.read_text(encoding="utf-8")  #   matcher bug" needs a tally)
    for gen in CLASSES:
        cands = list(gen(text))
        offered[gen.__name__] = len(cands)
        for cand in cands:
            tried += 1
            import tempfile
            with tempfile.TemporaryDirectory() as td:
                tmp = pathlib.Path(td) / "cand.c"
                tmp.write_text(cand, encoding="utf-8")
                v = R.verdict(twin, tmp).splitlines()[0]
            if "MATCH" in v:
                adopted.append(cand)
                log(f"  ADOPT: {gen.__name__}")
                break
    log("offered: " + " ".join(
        f"{k.split('_', 1)[0]}={v}" for k, v in offered.items()
        # classes whose matcher is structural show 0 on most files; the
        # floor claim (P8) is per-shape: S6 prints -- for the file carries
        # the class's shape (checked in main) to avoid noise
    ) if True else "")
    return adopted, tried, offered


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("twin")
    ap.add_argument("draft")
    ap.add_argument("--max-rounds", type=int, default=8)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--log", default=None)
    ap.add_argument("--stage-dir",
                    default=str(REPO / "scratch" / "lattice_stage"))
    args = ap.parse_args()

    twin = pathlib.Path(args.twin)
    draft = pathlib.Path(args.draft)
    logs = []

    def log(s):
        print(s)
        logs.append(s)

    base_v = R.verdict(twin, draft).splitlines()[0]
    log(f"baseline: {base_v}")
    total = 0
    stage_dir = pathlib.Path(args.stage_dir)
    stage_dir.mkdir(parents=True, exist_ok=True)
    stage = stage_dir / (draft.stem + "_evolved.c")
    for rnd in range(1, args.max_rounds + 1):
        log(f"round {rnd}: enumerating over {draft.name}")
        adopted, tried, offered = lattice_round(twin, draft, log)
        total += tried
        if not adopted:
            log(f"EXHAUSTED after {rnd} round(s): {total} candidates, 0 adoptions")
            break
        stage.write_text(adopted[-1], encoding="utf-8")
        if args.apply:
            draft.write_text(adopted[-1], encoding="utf-8")
            log(f"round {rnd}: ADOPTED {len(adopted)} into {draft.name}")
        else:
            draft = stage
            stage = stage_dir / (draft.stem + "_evolved.c")
        log(f"round {rnd}: {len(adopted)} adoption(s); {tried} measured")
    final = R.verdict(twin, draft).splitlines()[0]
    log(f"final: {final}")
    if args.log:
        pathlib.Path(args.log).write_text("\n".join(logs), encoding="utf-8")
    if "MATCH" not in final:
        sys.exit(1)


if __name__ == "__main__":
    main()