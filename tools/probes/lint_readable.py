r"""Readable-layer linter (v2.5): the restrictive readability test.

audit_readable.py proves the rewrite changed NOTHING (bytes); this linter
proves the rewrite is actually HUMAN-shaped. Every rule is a decompiler
artifact class the owner flagged by eye (each traceable to a measured
promotion/rejection recorded in notes/readable-layer.md), so the rules
are grounded, not taste:

  E1  cast in the body (typed-pointer rule, R7/R12)      - `/* note: */` exempt
  E2  pointer arithmetic with hex byte offsets (R12 A5)  - note exempt
  E3  goto / label (R10/R17: measured per function)      - note / waiver
  E4  bool select materialization var = c ? 1 : 0 (R9/R11)- note exempt
  E5  single-use temp whose only use is `return t;` (rig shape)
  E8  decompiler-style f-number field spellings (R7)
  E9  decompile-vocabulary identifiers in the body (R18): arg0..arg9,
      p0..p9, paramN, local_N, loc_N, lab, ret_N, uVarN, iVarN,
      undefinedN -- machine-given names from Ghidra/decompiler output
      (owner example bar: role words, offset annotations, proven names)
  W6  C89-style hoarded uninitialized decl block >= 4 (v1 rule was dead
      code: the brace tracker counted the function body itself as struct
      context, so every body decl was excluded -- v1 shipped with zero
      live fires, caught in the R18 lint audit)
  W7  volatile in the body (scheduling shape)            - note exempt
  W9  bool-context noise: `!= 0` inside if/while conditions (owner R18
      example: `if (forced || bInv)`, never `if (forced != 0 || ...)`)
  W10 result-only temp: declared, only ever assigned, only ever returned
      (`r = 0; ... return r;`) -- a human returns the expression directly
      or names the role; the bare `r`/`ret`/`result` letter-noise class
      (R18: c894/c8d4's `r` renamed `passed`, measured free; c3e0/c3fc's
      `ret` renamed `status`, measured free)
  W11 single-statement braces around one line (owner example bar)
      (v2.4: re-implemented on the full stripped text with line
      mapping - the v2 per-line search could never match the
      three-line shape, W11 was DEAD since v2; caught by the rd53
      calibration probe both ways)
  W12 no-op statement: a lone `;` on its own line (empty body, dead
      target of an if/for/while) or an empty inline statement tail
      (`if (x);` with NO stmts); the decompiler's scaffold for
      "branch to here, do nothing" -- a human deletes the construct
      (a CALL in the condition = the deliberate spin-wait idiom;
      exempt)
  W13 unused-but-cast-to-void local: `(void)x;` as a linter-suppressor
      for a local the body never reads; a human deletes the local
      (NOT a cast-to-void CALL whose result is deliberately ignored -
      that is semantics, e.g. `(void)FUN_check(...)`; calls excluded)
  W15 empty `{}` statement arm, three shapes: the multi-line
      `{ NEWLINE }` (W11's blind spot -- that rule needs a statement
      line inside the braces), the one-line `if (x) {}` /
      `for (...) {}` / `else {}`, each checked for a call-in-head
      (spin-wait idiom = exempt); struct/enum member-list braces
      excluded. A human writes the positive test
  W16 self-increment spelled as assignment (R36b): `x = x + 1;`,
      `x = x + K;`-shaped self-arithmetic where a compound/increment
      form exists (`x++;`, `x += K;`). The readable default is the
      writer's vocabulary; carrying the twin's raw statement spelling
      needs a measured reject (P2), not inertia. Count-word operands
      exempt (S1's count semantics use full assignments).
  W17 doc-budget (R50 measured corpus; R54 tightens to the orientation
      law): the ONE human semantic doc block (the first block comment
      after line 1) stays within 3 non-blank prose lines for ordinary
      functions (P5's orientation rule: state the purpose, the body is
      the explanation); 9 is the absolute ceiling. The ??? / name-prov
      tagged entries are exempt (one line each by W20) and are the
      sanctioned home for what overflows the orientation; anything
      else banks back to the twin header. Fires today (R54) on the
      14/16 files at 4+ lines - the R53 trim wave runs the corpus to
      the new budget.
  W18 archive/ledger prose in editable comments (R50): wave-id
      references (R\d{2}), "see the ledger", "matched spelling",
      "measured DIFFER/REJECT"-style verdict-archive language - P5
      bans that class from the readable file entirely; the ??? and
      name-prov convention lines are exempt (P9's standing worklist,
      R49 census tracks those).
  E11 unnamed parameters in a function DEFINITION (R50, measured: only
      FUN_0204c318): a C99 definition names its parameters; parameter
      NAMES compile free, so naming is always available; role-name them
      (the twin's Gidra-style unusedN/param_1 names do not carry -
      E9's bar).
  W19 one-line comments (R52, owner: "less is more for human
      readability" - src/ is maximally documented for the machine,
      src-readable/ minimal for the human): OUTSIDE the semantic doc
      block every comment is ONE physical line - no wrapped essays on
      defines/externs/struct-fields/body lines. The multi-line callee/
      layout accounts are src/-twin material (banked); extended wall
      evidence = the twin header. The doc block itself + its ??? /
      name-prov entries stay the sanctioned home for the worklist,
      each entry ONE line (W20).
  W20 one-line convention entries (R53, the doc-economy class): each
      ??? / name-prov entry inside the doc block is ONE physical line
      (tag + question + boundary inline) - a wrapped entry is the
      research-essay shape P5's orientation rule bans; a genuinely
      long entry splits into separate one-line tagged entries. The
      ??? kind-tag taxonomy (R46) still governs what to state; W20
      governs only its SHAPE.

Calibration contract (v2.1, R18 + rd34): code shaped like the owner's
example (early returns, role-named locals, helper calls, plain bool
conditions, no casts/goto/selects, no arg-N vocabulary) must lint
CLEAN; the live files lint 0E/0W; the artifact templates (rd34
probe) flag with the correct rule ids. The byte audit stays the
real brake. (W14 lived one session: literal-constant casts are a
strict SUBSET of E1's scalar-cast class -- double-flagged the same
site. Folded away; the generator survives as the driver's S8.)

Usage: python tools/probes/lint_readable.py [files...]
       (no args = lint src-readable/arm9/FUN_*.c)
v2 changes (R18 audit): E9/W9/W10/W11 added, W6 un-deadened, W11 exempts
lines carrying an inline `note:`.
v2.1 changes (2026-10-07 rd34 audit): W12/W13/W14/W15 added (no-op
statements incl. empty inline tails, void-cast suppressors,
constant-foldable literal casts, empty statement arms -- all calibrated
in scratch/rd34/lint_probe.py); waiver ids extended. W14 folded away
same day (subset of E1; the S8 driver class carries the generator).
v2.2 changes (R51): W17/W18/E11 calibrated on live fires.
v2.3 changes (R52): W19 one-physical-line comments outside the doc
block (owner's less-is-more ruling); calibrated on live fires (57 -> 0).
v2.4 changes (R53, external-feedback 3/4/5 verification): W11
re-implemented full-text (dead since v2 -- spanning-shape/per-line-search
death class), W20 one-line convention entries added; both calibrated in
scratch/rd53/lint_calibration.py. W20 lives in the doc block W17
already owns; the ??? kind-tag taxonomy (R46) governs CONTENT, W20
governs SHAPE.
v2.5 changes (R54, owner ratifies the <=3 doc budget): W17 fires at >3
prose lines (9 still the absolute ceiling); the corpus trim wave runs
the docs to the orientation law.
"""
import argparse
import collections
import json
import pathlib
import re
import subprocess
import sys

# strip comments (line + block), preserving newlines for line numbers
def strip_comments(text):
    out = []
    i, n, line = 0, len(text), 1
    in_block, in_line = False, False
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ""
        if in_block:
            if c == "\n":
                out.append(c); line += 1
            elif c == "*" and nxt == "/":
                in_block = False; out.append("  "); i += 1
            else:
                out.append(" ")
            i += 1
            continue
        if in_line:
            if c == "\n":
                in_line = False; out.append(c); line += 1
            else:
                out.append(" ")
            i += 1
            continue
        if c == "/" and nxt == "*":
            in_block = True; out.append("  "); i += 2; continue
        if c == "/" and nxt == "/":
            in_line = True; out.append("  "); i += 2; continue
        if c == "\n":
            line += 1
        out.append(c); i += 1
    return "".join(out)

CAST_RE = re.compile(r"\(\s*(?:const\s+)?(?:un)?signed\s+(?:char|short|int|long(?:\s+long)?)\s*\*+\s*\)"
                     r"|\(\s*(?:un)?signed\s+\s*\*+\s*\)"
                     r"|\(\s*(?:u|s)(?:8|16|32|64)\s*\*+\s*\)"
                     r"|\(\s*(?:u|s)(?:8|16|32|64)\s*\)"
                     r"|\(\s*void\s*\*\s*\)")
OFFSET_RE = re.compile(r"\+\s*0x[0-9a-fA-F]+")
GOTO_RE = re.compile(r"\bgoto\b")
LABEL_RE = re.compile(r"^\s*[a-z_][a-z_0-9]*\s*:\s*$")
SELECT_RE = re.compile(r"=\s*(?:\(|[^;])*?\?\s*1\s*:\s*0\s*;")
FN_RE = re.compile(r"\bf\d+\b")
VOLATILE_RE = re.compile(r"\bvolatile\b")
DECL_RE = re.compile(r"^\s*(?:const\s+|volatile\s+|unsigned\s+|register\s+)*"
                     r"(?:u8|u16|u32|u64|s8|s16|s32|s64|int|short|char|long)\b\s*"
                     r"(?:\**\s*)(\w+)\s*(?:\[.*\]\s*)?(?:=[^=]|;)", re.M)
TYPE_START_RE = re.compile(r"^\s*(?:const\s+|volatile\s+|unsigned\s+|register\s+)*"
                           r"(?:u8|u16|u32|u64|s8|s16|s32|s64|int|short|char|long)\b")
RETURN_RE = re.compile(r"^\s*return\s+(\w+)\s*;", re.M)
# v2 additions
DECOMP_VOCAB_RE = re.compile(
    r"\b(arg[0-9]{1,2}|p[0-9]|param[0-9]*|local_[0-9]+|loc_[0-9]+|lab[0-9]*|"
    r"ret_[0-9]+|uVar[0-9]+|iVar[0-9]+|undefined[0-9]+)\b")
NEZ_COND_RE = re.compile(r"(?:\bif\s*|\bwhile\s*)\([^;{}]*!=\s*0\b")
BRACE_ONE_STMT_RE = re.compile(
    r"\{\s*\n\s*[A-Za-z_][^\n;]{0,120};\s*\n\s*\}")
GENERIC_DECL_RE = re.compile(
    r"^\s*(?:const\s+|volatile\s+|unsigned\s+|register\s+)*"
    r"[A-Za-z_]\w*\s*\**\s*([A-Za-z_]\w*)\s*"
    r"(?:\[[^\]]*\])?\s*;", re.M)
NON_DECL_STARTS = ("#", "return", "if", "for", "while", "switch", "else",
                   "case", "default", "goto", "do", "break", "continue")

# v2.1 additions (rd34)
NULL_STMT_RE = re.compile(r"^\s*;\s*$")
VOID_CAST_RE = re.compile(r"\(\s*void\s*\)\s*(!?\w+|[-(]?\w+)?\s*;", re.M)
# W16 (R36b): self-increment spelled as a full assignment. Note the
# deliberate shape: ONLY bare-identifier LHS (a macro accessor like
# slot_count(p) expands to a deref LHS whose `++` form is a DIFFERENT
# codegen cell -- left to the driver class S10, not to this regex);
# count-word RHS guards S1's `count/num/len/size` semantics, where a
# full assignment may BE the natural form.
SELF_INC_RE = re.compile(
    r"^\s*([A-Za-z_]\w*)\s*=\s*\1\s*\+\s*(\d+|0[xX][0-9a-fA-F]+)\s*;", re.M)
# (the rd34 LIT_CAST_RE folded away with W14: a strict subset of E1's
#  scalar-cast class; the generator survives as simplify_lattice's S8)
# a CALL in the statement HEAD = the spin-wait idiom (IRQ-drain loop);
# the statement's own keyword paren (`if (`, `while (`, `for (`, ...) is
# NOT a call
HEAD_CALL_RE = re.compile(
    r"\b(?!(?:if|while|for|switch|else|do)\s*\()[A-Za-z_]\w*\s*\(")
# one-line empty statement arm: `if (x) {}`, `for (...) {}` (the for
# header's `;`s are inside `[^{}]`), `else {}` -- the third empty-block shape
EMPTY_INLINE_RE = re.compile(r"\b(?:if|while|for|else)\b[^{}]*\{\s*\}")


def _noop_tail(ln):
    """True when an if/for/while statement's matched parens end the line
    and only a bare `;` remains (an empty body written inline, `if (x);`).
    A CALL inside the condition = the deliberate spin-wait idiom
    (`while (FUN_poll());`) -- semantic, exempt."""
    m = re.match(r"^\s*(?:else\s+)?(?:if|for|while)\s*\(", ln)
    if not m:
        return False
    depth = 0
    for j in range(m.end() - 1, len(ln)):
        if ln[j] == "(":
            depth += 1
        elif ln[j] == ")":
            depth -= 1
            if depth == 0:
                cond = ln[m.end() - 1:j + 1]
                if re.search(r"\w+\s*\(", cond):
                    return False  # spin-wait idiom: call in condition
                return ln[j + 1:].rstrip() == ";"
    return False


def _empty_blocks(lines):
    """Yield (lineno, head) for `{` blocks whose body is only whitespace:
    the multi-line `{\\n    }` form W11 cannot see (it needs a statement
    line inside the braces). Struct/union/enum member-list opens are
    excluded by the head check; a note exempts the site."""
    res = []
    i = 0
    while i < len(lines):
        bare = lines[i].rstrip()
        stripped_l = bare.strip()
        is_open_brace_line = (stripped_l.endswith("{")
                              and not stripped_l.startswith("{"))
        is_bare_brace_line = stripped_l == "{" and i > 0
        if is_open_brace_line or is_bare_brace_line:
            head = bare if is_open_brace_line else lines[i - 1].rstrip()
            if re.search(HEAD_CALL_RE, head):
                i += 1
                continue  # call in condition = spin-wait idiom (IRQ drain),
                          # semantic, not a dead branch; the extra i step
                          # also skips the block's closing `}` line
            if not re.search(r"\b(?:struct|union|enum)\b[^{]*$", head):
                j = i + 1
                while j < len(lines) and not lines[j].strip():
                    j += 1
                if j < len(lines) and lines[j].strip() == "}":
                    res.append((j + 1, head.strip()[:60]))
        i += 1
    return res


def note_exempt(line, idx=None, raw_lines=None):
    """A `note:` comment on the line itself or directly above marks the
    shape as measured-required (comments are erased by strip_comments,
    so this must consult the RAW text)."""
    if "note:" in line:
        return True
    if raw_lines is not None and idx is not None:
        for back in range(1, 4):
            if idx - back >= 1 and "note:" in raw_lines[idx - back]:
                return True
        if idx < len(raw_lines) and "note:" in raw_lines[idx]:
            return True
    return False


WAIVER_RE = re.compile(r"^//\s*lint-waiver:\s*([A-Z]\d)\s+-\s*(.+)$", re.M)
VALID_RULES = {"E1", "E2", "E3", "E4", "E5", "E8", "E9", "E11", "W6", "W7", "W9",
               "W10", "W11", "W12", "W13", "W15", "W16", "W17", "W18", "W19",
               "W20"}


def waivers(text):
    """Parse file-level lint waivers. Each must name a rule id + a reason
    that cites the twin evidence; unknown rule ids are rejected by main()."""
    return {m.group(1): m.group(2).strip() for m in WAIVER_RE.finditer(text)}


def _is_body_decl(ln_stripped):
    return ("=" not in ln_stripped and ";" in ln_stripped
            and not ln_stripped.startswith(("typedef", "extern")))


def lint(text, name):
    findings = []          # (severity, rule, lineno, detail)
    stripped = strip_comments(text)
    lines = stripped.split("\n")
    raw_lines = text.split("\n")
    # E5 needs a decl->use map
    decls = {}             # name -> lineno
    for m in DECL_RE.finditer(stripped):
        line_no = stripped.count("\n", 0, m.start()) + 1
        if raw_lines[line_no - 1].lstrip().startswith(("typedef", "extern")):
            continue
        decls.setdefault(m.group(1), line_no)

    brace_depth_of_line = []
    depth = 0
    for ln in lines:
        brace_depth_of_line.append(depth)
        depth += ln.count("{") - ln.count("}")
    fn_body_start = None
    for i, ln in enumerate(lines):
        if fn_body_start is None and ln.rstrip() == "{" and i and "(" in lines[i - 1]:
            fn_body_start = i  # 1-based index of the SIGNATURE line (covers params)

    in_decl = [False]  # file-scope / struct-member declaration context
    for idx, ln in enumerate(lines, start=1):
        bare = ln.rstrip()
        if not bare.strip():
            continue
        def add(sev, rule, detail):
            findings.append((sev, rule, idx, detail))

        decl_line = (bare.lstrip().startswith(("extern", "static", "typedef"))
                     or not ln[0].isspace())
        nx = note_exempt(ln, idx, raw_lines)
        if CAST_RE.search(ln) and not nx and not decl_line:
            add("E1", "body-cast", CAST_RE.search(ln).group(0))
        if OFFSET_RE.search(ln) and not note_exempt(ln) and not bare.lstrip().startswith(("#", "enum")):
            add("E2", "hex-offset-arith", OFFSET_RE.search(ln).group(0))
        if GOTO_RE.search(ln) and not nx:
            add("E3", "goto", bare.strip())
        if LABEL_RE.match(bare) and not nx:
            tgt = bare.strip()[:-1]
            if any(g.strip().endswith(tgt + ";") or f"go to {tgt}" in g
                   for g in lines) or any(f"goto {tgt}" in g for g in lines):
                add("E3", "goto-label", tgt)
        if SELECT_RE.search(ln) and not nx and not decl_line:
            add("E4", "select-materialization", SELECT_RE.search(ln).group(0)[:60])
        if FN_RE.search(ln) and not nx and "FUN_" not in ln:
            add("E8", "f-number-field", FN_RE.search(ln).group(0))
        if VOLATILE_RE.search(ln) and not nx and not decl_line:
            add("W7", "volatile-in-body", bare.strip()[:60])
        # v2 rules
        if fn_body_start and idx >= fn_body_start and not decl_line:
            ln_nosym = re.sub(r"\bFUN_[0-9a-fA-F]+\b", " ", ln)
            vs = DECOMP_VOCAB_RE.findall(ln_nosym)
            if vs and not note_exempt(ln, idx, raw_lines):
                add("E9", "decompile-vocabulary", ", ".join(sorted(set(vs))))
        if NEZ_COND_RE.search(ln) and not nx and not decl_line:
            add("W9", "bool-context-nez", bare.strip()[:60])
        # v2.1 rules
        if NULL_STMT_RE.match(ln) and not nx:
            add("W12", "no-op-statement", "lone `;`")
        vm = VOID_CAST_RE.search(ln)
        vm_arg = (vm.group(1) or "") if vm else ""
        if vm and not nx and not decl_line and "(" not in vm_arg \
                and "FUN_" not in vm_arg:
            add("W13", "void-cast-suppressor", bare.strip()[:60])
        if _noop_tail(ln) and not nx:
            add("W12", "no-op-statement", bare.strip()[:60])
        wm = SELF_INC_RE.match(ln)
        if wm and not nx and not decl_line:
            add("W16", "self-inc-as-assignment",
                "write `++` / `+=` (or measure the assignment spelling)")
        em = EMPTY_INLINE_RE.search(ln)
        if em and not nx and not decl_line \
                and not HEAD_CALL_RE.search(em.group(0)[:-2]):
            add("W15", "empty-block", bare.strip()[:60])

    # W11 (v2.4 fix): spanning single-statement brace block, searched on the
    # FULL stripped text with line mapping -- the v2 per-line form could
    # never match a three-line shape (W11 was dead since v2; caught by the
    # rd53 calibration probe). A declaration line inside the braces and a
    # note:-exempted site are the sanctioned survivors.
    for m in BRACE_ONE_STMT_RE.finditer(stripped):
        ln_no = stripped.count("\n", 0, m.start()) + 1   # the `{` line
        if brace_depth_of_line[ln_no - 1] == 0:
            continue  # a function body holding one statement is fine C
            # (W11's class is a block INSIDE a block, not a short body)
        stmt = m.group(0).split("\n")[1].strip()
        if re.match(r"[A-Za-z_][\w \*]*\[?\]?\s*(?:;|$)", stmt) and "=" not in stmt:
            continue  # a bare declaration inside braces is not a statement arm
        if note_exempt(raw_lines[ln_no - 1], ln_no, raw_lines):
            continue
        findings.append(("W11", "single-stmt-braces", ln_no,
                         f"block with one statement: {stmt[:60]} -- write it "
                         f"braceless or keep with a note: (measured)"))

    for lbl, head in _empty_blocks(lines):
        if note_exempt("", lbl, raw_lines):
            continue
        findings.append(("W15", "empty-block", lbl,
                         f"empty {{}} body after `{head}` -- dead/inverted "
                         f"branch; write the positive test"))

    # W6: C89-style hoarded decl block. v1 counted only primitive-type decls
    # (TYPE_START_RE) and excluded everything inside braces -- the brace rule
    # made the rule dead code (function bodies are braces too). v2: count any
    # init-free declaration line inside the function body, treat a blank line
    # as tolerable inside one block, require >= 4.
    run = []
    def flush_run(end_idx):
        if len(run) >= 4:
            block_note = any("note:" in raw_lines[j - 1]
                             for j in range(max(1, run[0] - 3), min(len(raw_lines), run[0]) + 1))
            if not block_note:
                findings.append(("W6", "decl-hoard-block", run[0],
                                 f"{len(run)} init-free decls (lines {run[0]}-{end_idx})"))
    struct_stack = []
    for idx, ln in enumerate(lines, start=1):
        opens = ln.count("{") - ln.count("}")
        bare = ln.strip()
        # struct/union/enum member context = inside braces of a typedef struct
        # (tracked via a stack of OPEN KINDS, not raw brace count)
        in_struct_member_ctx = "struct" in struct_stack
        m = GENERIC_DECL_RE.match(ln)
        body_decl = (fn_body_start and idx >= fn_body_start and m
                     and _is_body_decl(bare) and not in_struct_member_ctx
                     and not bare.startswith(NON_DECL_STARTS))
        if body_decl:
            run.append(idx)
        elif (not bare) and run:
            pass  # blank line inside one decl block: tolerated
        else:
            flush_run(idx - 1)
            run = []
        # push/pop brace contexts; open-brace lines classify WHAT opened
        pre = len(struct_stack)
        prev_line = lines[idx - 2] if idx >= 2 else ""
        for ch in ln:
            if ch == "{":
                ctx = "struct" if re.search(r"\b(?:typedef\s+)?(?:struct|union|enum)\b", prev_line + " " + ln.rsplit("{", 1)[0]) else "fn"
                struct_stack.append(ctx)
            elif ch == "}" and struct_stack:
                struct_stack.pop()
        if pre and not struct_stack:
            pass
    flush_run(len(lines))
    # E5 single-use temp returned directly
    for nm, dline in decls.items():
        uses = [i + 1 for i, l in enumerate(lines)
                if re.search(r"\b" + re.escape(nm) + r"\b", l)]
        if len(uses) == 2 and uses[1] == dline + 1:
            ret_m = RETURN_RE.match(lines[uses[1]])
            if ret_m and ret_m.group(1) == nm:
                findings.append(("E5", "single-use-return-temp", dline,
                                 f"declared, only use is `return {nm};` next line"))
    # W10 result-only temp: every non-decl use is an assignment or the return
    for nm, dline in decls.items():
        if len(nm) <= 3 or re.fullmatch(r"(?:ret|res|tmp|temp|retval)", nm):
            pat = re.compile(r"\b" + re.escape(nm) + r"\b")
            uses = [i for i, l in enumerate(lines, 1) if pat.search(l)]
            if dline not in uses or not uses or uses[-1] < dline:
                continue
            body_uses = [i for i in uses if i != dline]
            if not body_uses:
                continue
            ret_line = lines[body_uses[-1] - 1].strip()
            if not RETURN_RE.match(ret_line) or ret_m_group(ret_line) != nm:
                continue
            decl_assigned = re.match(
                r"^\s*(?:const\s+|volatile\s+|unsigned\s+)*[A-Za-z_]\w*\s*\**\s*"
                + re.escape(nm) + r"\s*=", lines[dline - 1]) is not None
            assigns = [i for i in body_uses[:-1]
                       if re.match(r"^\s*" + re.escape(nm) + r"\s*=", lines[i - 1])]
            if (decl_assigned and not assigns) or \
                    (len(assigns) == len(body_uses) - 1 and len(assigns) >= 1):
                findings.append(("W10", "result-only-temp", dline,
                                 f"'{nm}' declared then only assigned+returned -- return the expression or name the role"))

    # W19 (R52): ONE physical line per comment outside the doc block;
    # the essays live in the src/ twin's comments (P5: machine-max there,
    # human-min here). Scans RAW lines (the stripped text has no comments).
    docm = re.search(r"/\*.*?\*/", text, re.S)
    doc_end = text[:docm.end()].count("\n") if docm else 0
    in_block = False
    for idx, ln in enumerate(raw_lines, 1):
        if idx <= doc_end or not ln.strip():
            continue
        opens, closes = ln.count("/*"), ln.count("*/")
        if in_block:
            findings.append(("W19", "wrapped-comment", idx, ln.strip()[:70]))
            if closes:
                in_block = False
            continue
        if opens > closes:
            findings.append(("W19", "wrapped-comment", idx, ln.strip()[:70]))
            if closes == opens - 1:
                in_block = True

    # ---- R50 comment-side rules (raw text; comments are not invisible) ----
    doc_m = re.search(r"/\*.*?\*/", text, re.S)
    if doc_m:
        base = text.count("\n", 0, doc_m.start())
        doc_lines = [l.strip(" */\t") for l in doc_m.group(0).splitlines()]
        CONV = re.compile(r"\?\?\?|name-prov|name reading \(inferred\)")
        prose = []
        in_conv = False
        for k, l in enumerate(doc_lines):
            if not l:               # blank line = paragraph break
                in_conv = False
                continue
            if CONV.search(l):
                in_conv = True      # the convention paragraph starts
                continue
            if in_conv:             # wraps until the blank line are exempt
                # v2.4 W20 (R53 doc economy): a wrapped ??? / name-prov
                # entry is the research-essay shape P5 bans -- each
                # convention entry is ONE physical line (tag + question +
                # boundary); split into separate tagged entries if needed.
                findings.append(("W20", "doc-entry-wrap", base + k + 1,
                                 "wrapped ???/name-prov entry -- one line "
                                 "per entry (R53); split into separate "
                                 "tagged entries if needed"))
                continue
            prose.append(l)
        if len(prose) > 3:
            findings.append(("W17", "doc-budget", 1,
                             f"semantic doc block has {len(prose)} non-debt prose"
                             f" lines (law P5: <=3 orientation lines, 9 absolute;"
                             f" ???/name-prov entries exempt); state the purpose,"
                             f" the body is the explanation - anything else banks"
                             f" back to the twin"))
    for pat, why in ((r"\bR\d{2}\b", "wave-id reference (ledger/verdict archive)"),
                     (r"see the ledger|matched spelling|"
                      r"measured\s+(?:DIFFER|differ|reject|REJECT)",
                      "archive/measurement prose (twin-header material)")):
        for m in re.finditer(pat, text):
            line_no = text.count("\n", 0, m.start()) + 1
            line = text.splitlines()[line_no - 1]
            if re.search(r"\?\?\?|name-prov", line):
                continue  # P9 convention lines exempt
            if note_exempt(line, line_no - 1, raw_lines):
                continue  # a note: site note = P7's sanctioned measurement citation
            # the doc block (the first /*..*/ block) + free comments = targets
            findings.append(("W18", "archive-prose", line_no, f"{why}"))
    t = strip_comments(text)
    sig = re.search(r"\b(?:void|int|u8|u16|u32|s8|s16|s32|float|double|char)\s*\**\s*"
                    r"FUN_[0-9a-f]+\s*\(([^)]*)\)\s*\{", t)
    if sig:
        params = [p.strip() for p in sig.group(1).split(",") if p.strip()]
        TYPE_WORDS = {"void", "int", "char", "float", "double", "short",
                      "long", "unsigned", "signed", "u8", "u16", "u32",
                      "u64", "s8", "s16", "s32", "s64"}
        def has_identifier(p):
            toks = p.replace("*", " * ").split()
            return (bool(toks) and toks[-1] not in TYPE_WORDS
                    and re.fullmatch(r"[A-Za-z_]\w*", toks[-1]) is not None)
        unnamed = [p for p in params if not has_identifier(p)]
        if unnamed:
            findings.append(("E11", "unnamed-params", 1,
                             f"{len(unnamed)} of {len(params)} definition parameters "
                             f"unnamed ({', '.join(unnamed)}) - C99 definitions name "
                             f"them; names compile free; role-name (E9 bar)"))
    return findings


def ret_m_group(line):
    m = RETURN_RE.match(line.strip())
    return m.group(1) if m else None


# ---- Cross-file & Git-diff debt tracking (inspired by pso-decomp/source_quality.py) ----

_REPO = pathlib.Path(__file__).resolve().parents[2]
_STRUCT_TAG_RE = re.compile(r"\bstruct\s+([A-Za-z_]\w*)\s*\{")
_TYPEDEF_STRUCT_RE = re.compile(r"\btypedef\s+struct(?:\s+[A-Za-z_]\w*)?\s*\{[^{}]*\}\s*([A-Za-z_]\w*)\s*;", re.S)
_LOCAL_EXTERN_RE = re.compile(r"^\s*extern\s+(?![\"']C[\"'])[^;]+;", re.M)
_RAW_ADDR_CAST_RE = re.compile(
    r"\(\s*(?:const\s+|volatile\s+)*[A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*\s*\*+\s*\)\s*0x[0-9a-fA-F]{7,8}\b"
)


def _norm_snippet(detail: str) -> str:
    return re.sub(r"\s+", " ", detail).strip()[:120]


def _cross_file_findings(files_by_rel: dict[str, str]) -> dict[str, list[tuple[str, str, int, str]]]:
    """Cross-file and C-quality debt checks (X1..X3) run in --tree / --diff mode."""
    out: dict[str, list[tuple[str, str, int, str]]] = {k: [] for k in files_by_rel}
    struct_defs: dict[str, list[tuple[str, int]]] = collections.defaultdict(list)

    for rel, text in sorted(files_by_rel.items()):
        stripped = strip_comments(text)
        # X1: collect struct / typedef-struct definitions in .c files
        if rel.endswith(".c"):
            seen_here: set[str] = set()
            for pat in (_STRUCT_TAG_RE, _TYPEDEF_STRUCT_RE):
                for m in pat.finditer(stripped):
                    name = m.group(1)
                    if name in seen_here:
                        continue
                    seen_here.add(name)
                    ln = stripped.count("\n", 0, m.start()) + 1
                    struct_defs[name].append((rel, ln))
            # X2: local extern prototypes/data declarations inside .c files
            for m in _LOCAL_EXTERN_RE.finditer(stripped):
                ln = stripped.count("\n", 0, m.start()) + 1
                out[rel].append(("X2", "local-extern-proto", ln, _norm_snippet(m.group(0))))
        # X3: raw numeric address casts like (u8 *)0x020a1234
        for m in _RAW_ADDR_CAST_RE.finditer(stripped):
            ln = stripped.count("\n", 0, m.start()) + 1
            out[rel].append(("X3", "raw-addr-cast", ln, _norm_snippet(m.group(0))))

    for name, locs in sorted(struct_defs.items()):
        unique_files = {r for r, _ in locs}
        if len(unique_files) > 1:
            for rel, ln in locs:
                out[rel].append(("X1", "duplicate-struct-def", ln, f"struct {name} defined in {len(unique_files)} .c files"))

    return out


def scan_tree_debt(files_by_rel: dict[str, str], *, include_cross: bool = True) -> dict:
    """Lint every file in `files_by_rel` and aggregate counts + move-invariant signatures."""
    rule_counts: collections.Counter[str] = collections.Counter()
    rule_names: dict[str, str] = {}
    per_file: dict[str, int] = {}
    per_file_rules: dict[str, collections.Counter[str]] = {}
    signatures: collections.Counter[tuple[str, str, str]] = collections.Counter()

    cross = _cross_file_findings(files_by_rel) if include_cross else {}

    for rel, text in sorted(files_by_rel.items()):
        wv = waivers(text)
        file_findings = [x for x in lint(text, pathlib.Path(rel).name) if x[0] not in wv]
        if include_cross:
            file_findings.extend(cross.get(rel, []))
        c = collections.Counter()
        for rid, rname, _lineno, detail in file_findings:
            rule_counts[rid] += 1
            rule_names[rid] = rname
            c[rid] += 1
            signatures[(rid, rname, _norm_snippet(detail))] += 1
        per_file[rel] = len(file_findings)
        per_file_rules[rel] = c

    return {
        "files": len(files_by_rel),
        "total": sum(rule_counts.values()),
        "rule_counts": dict(sorted(rule_counts.items())),
        "rule_names": rule_names,
        "per_file": per_file,
        "signatures": signatures,
    }


def diff_debt(base_scan: dict, head_scan: dict) -> dict:
    """Compute move-invariant debt delta between base and head scans."""
    b_sig: collections.Counter = base_scan["signatures"]
    h_sig: collections.Counter = head_scan["signatures"]
    added_sig = h_sig - b_sig
    removed_sig = b_sig - h_sig

    all_rules = sorted(set(base_scan["rule_counts"]) | set(head_scan["rule_counts"]))
    rule_names = {**base_scan["rule_names"], **head_scan["rule_names"]}

    added_by_rule: collections.Counter[str] = collections.Counter()
    removed_by_rule: collections.Counter[str] = collections.Counter()
    for (rid, _rn, _snip), cnt in added_sig.items():
        added_by_rule[rid] += cnt
    for (rid, _rn, _snip), cnt in removed_sig.items():
        removed_by_rule[rid] += cnt

    rows = []
    for rid in all_rules:
        bv = base_scan["rule_counts"].get(rid, 0)
        hv = head_scan["rule_counts"].get(rid, 0)
        add = added_by_rule.get(rid, 0)
        rem = removed_by_rule.get(rid, 0)
        rows.append({
            "rule": rid,
            "name": rule_names.get(rid, ""),
            "before": bv,
            "after": hv,
            "added": add,
            "removed": rem,
            "net": hv - bv,
        })

    return {
        "files_before": base_scan["files"],
        "files_after": head_scan["files"],
        "total_before": base_scan["total"],
        "total_after": head_scan["total"],
        "total_added": sum(added_by_rule.values()),
        "total_removed": sum(removed_by_rule.values()),
        "total_net": head_scan["total"] - base_scan["total"],
        "rules": rows,
    }


def _load_tree_from_disk(repo: pathlib.Path, roots: list[str]) -> dict[str, str]:
    out: dict[str, str] = {}
    for root in roots:
        p = (repo / root)
        if p.is_file() and p.suffix in (".c", ".h"):
            out[p.relative_to(repo).as_posix()] = p.read_text(encoding="utf-8", errors="replace")
        elif p.is_dir():
            for f in sorted(p.rglob("*.c")):
                out[f.relative_to(repo).as_posix()] = f.read_text(encoding="utf-8", errors="replace")
    return out


def _load_tree_from_git(repo: pathlib.Path, rev: str, roots: list[str]) -> dict[str, str]:
    cmd = ["git", "ls-tree", "-r", "--name-only", rev, "--", *roots]
    res = subprocess.run(cmd, cwd=str(repo), capture_output=True, text=True, check=False)
    if res.returncode != 0:
        return {}
    paths = [p.strip() for p in res.stdout.splitlines() if p.strip().endswith(".c")]
    out: dict[str, str] = {}
    for rel in paths:
        show = subprocess.run(
            ["git", "show", f"{rev}:{rel}"],
            cwd=str(repo), capture_output=True, text=True, errors="replace", check=False,
        )
        if show.returncode == 0:
            out[rel] = show.stdout
    return out


def _print_tree_report(scan: dict, label: str, top_n: int) -> None:
    print(f"=== Source Debt Tree Report ({label}) ===")
    print(f"Files scanned: {scan['files']:,}  |  Total findings: {scan['total']:,}")
    if scan["rule_counts"]:
        print("\nBy rule:")
        for rid, cnt in sorted(scan["rule_counts"].items(), key=lambda kv: (-kv[1], kv[0])):
            rname = scan["rule_names"].get(rid, "")
            print(f"  {rid:4s} {rname:26s} {cnt:6,d}")
    worst = [(f, n) for f, n in scan["per_file"].items() if n > 0]
    worst.sort(key=lambda kv: (-kv[1], kv[0]))
    if worst and top_n > 0:
        print(f"\nWorst files (top {min(top_n, len(worst))}):")
        for rel, cnt in worst[:top_n]:
            print(f"  {cnt:5,d}  {rel}")


def _print_diff_report(delta: dict, base_label: str, head_label: str) -> None:
    print(f"=== Source Debt Diff ({base_label} -> {head_label}) ===")
    print(
        f"Files: {delta['files_before']:,} -> {delta['files_after']:,}  |  "
        f"Debt: {delta['total_before']:,} -> {delta['total_after']:,}  "
        f"(+{delta['total_added']:,} / -{delta['total_removed']:,}, net {delta['total_net']:+,d})"
    )
    moved = [r for r in delta["rules"] if r["added"] or r["removed"] or r["net"]]
    if not moved:
        print("No debt changes detected.")
        return
    print(f"\n{'Rule':5s} {'Name':26s} {'Before':>7s} {'After':>7s} {'Added':>7s} {'Rem':>7s} {'Net':>7s}")
    for r in moved:
        print(
            f"{r['rule']:5s} {r['name']:26s} {r['before']:7,d} {r['after']:7,d} "
            f"{r['added']:+7,d} {-r['removed']:+7,d} {r['net']:+7,d}"
        )


def _run_debt_cli(argv: list[str]) -> int:
    ap = argparse.ArgumentParser(
        description="Readable-layer linter & git-diff source debt tracker."
    )
    ap.add_argument("--tree", nargs="?", const="WORKTREE", default=None, metavar="REV",
                    help="Scan whole tree (working tree by default, or Git REV) and rank worst files")
    ap.add_argument("--diff", action="store_true",
                    help="Compare source debt between --base and --head (move-invariant)")
    ap.add_argument("--base", default="HEAD",
                    help="Base Git revision for --diff (default: HEAD)")
    ap.add_argument("--head", default="WORKTREE",
                    help="Head Git revision for --diff, or WORKTREE (default: WORKTREE)")
    ap.add_argument("--root", action="append", dest="roots", default=None,
                    help="Directory/file root(s) relative to repo (default: src-readable)")
    ap.add_argument("--top", type=int, default=20,
                    help="Worst files to list in --tree mode (default: 20)")
    ap.add_argument("--no-cross", action="store_true",
                    help="Disable cross-file checks (X1..X3)")
    ap.add_argument("--json", type=pathlib.Path, default=None,
                    help="Write JSON output to PATH")
    ap.add_argument("--fail-on-increase", action="store_true",
                    help="Exit 1 in --diff mode if net debt increased")
    args = ap.parse_args(argv)

    roots = args.roots or ["src-readable"]
    include_cross = not args.no_cross

    def _load(rev: str) -> dict[str, str]:
        if rev == "WORKTREE":
            return _load_tree_from_disk(_REPO, roots)
        return _load_tree_from_git(_REPO, rev, roots)

    if args.tree is not None:
        files = _load(args.tree)
        scan = scan_tree_debt(files, include_cross=include_cross)
        _print_tree_report(scan, args.tree, args.top)
        if args.json is not None:
            out_json = {k: v for k, v in scan.items() if k != "signatures"}
            args.json.parent.mkdir(parents=True, exist_ok=True)
            args.json.write_text(json.dumps(out_json, indent=2) + "\n", encoding="utf-8")
        return 0

    base_scan = scan_tree_debt(_load(args.base), include_cross=include_cross)
    head_scan = scan_tree_debt(_load(args.head), include_cross=include_cross)
    delta = diff_debt(base_scan, head_scan)
    _print_diff_report(delta, args.base, args.head)
    if args.json is not None:
        args.json.parent.mkdir(parents=True, exist_ok=True)
        args.json.write_text(json.dumps(delta, indent=2) + "\n", encoding="utf-8")
    if args.fail_on_increase and delta["total_net"] > 0:
        return 1
    return 0


def main(argv=None):
    args = list(sys.argv[1:] if argv is None else argv)
    if any(a in ("--tree", "--diff", "-h", "--help") or a.startswith("--tree=") for a in args):
        return _run_debt_cli(args)
    if args:
        files = [pathlib.Path(a) for a in args]
    else:
        rd = pathlib.Path(__file__).resolve().parent.parent.parent / "src-readable" / "arm9"
        files = sorted(rd.glob("FUN_*.c"))
    fail = False
    for f in files:
        text = f.read_text(encoding="utf-8")
        wv = waivers(text)
        bad_ids = [k for k in wv if k not in VALID_RULES]
        if bad_ids:
            print(f"== {f.name}: INVALID lint-waiver rule id(s) {bad_ids}"
                  f" (known: {sorted(VALID_RULES)})")
            fail = True
            continue
        findings = [x for x in lint(text, f.name) if x[0] not in wv]
        errs = [x for x in findings if x[0].startswith("E")]
        warns = [x for x in findings if x[0].startswith("W")]
        print(f"== {f.name}: {len(errs)} errors, {len(warns)} warnings"
              + (f"  [waived: {', '.join(sorted(wv))}]" if wv else ""))
        for sev, rule, lineno, detail in findings:
            print(f"   {sev} {rule} line {lineno}: {detail}")
            if sev.startswith("E") or sev.startswith("W"):
                fail = True
    print(f"\nlint: {'FAIL' if fail else 'PASS'} over {len(files)} file(s)"
          " (E=artifact, W=style; note: lines exempt as measured shapes)")
    return 1 if fail else 0

if __name__ == "__main__":
    sys.exit(main())
