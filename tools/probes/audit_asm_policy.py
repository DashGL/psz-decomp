#!/usr/bin/env python3
"""Pass/fail gate: inline-asm policy for banked src/ files.

OWNER RULING 2026-10-18: NO asm spelling in src/ at all, in any language
unit (the game's source is mixed C/C++; both are fine as source -- the
ruling bans the asm SPELLING, not a language). Any file containing asm
fails: move it to drafts/ (asm bodies -> drafts/arm9/asm/, best-C near
cells -> drafts/near/), and keep the asm construct documented in its
header wherever the semantics matter. History: the 2026-10-17 marker
classes (MCR-COPROCESSOR, CLZ-INLINE, HAND-REGISTER-ROLES,
OUT-OF-SPAN-BRANCH, REGISTER-BINDING, OWNER-APPROVED) admitted asm for
"measured walls"; they are retired the same day they were introduced -
the 5 marker-admitted files were demoted by the owner, then the
grandfathered 76-file corpus (thunks, CP15 writers, arithmetic leaves,
register bindings) followed. Records:
notes/sessions/session-asm-void-blindspot-2026-10-18.md,
session-75pct-asm-policy-2026-10-17.md, the parked-ledger's
2026-10-18 section.

Exit code 0 = pass; 1 = violations (printed per file with the reason).
"""
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent.parent
SRC_DIRS = [REPO / "src" / "arm9", REPO / "src" / "arm9" / "stale"]
SRC_DIRS += [p for p in (REPO / "src").glob("ov*") if p.is_dir()]

# Broad: `__asm` blocks, `asm(` strings, whole-`asm TYPE name()` function
# bodies (ALL return types: void/int/u32/... — the `asm int` veneer family
# escaped an `asm void`-only pattern before, found in the upper-bound pass
# 2026-10-18), register-asm bindings included via asm(.
# Prose that merely MENTIONS the spellings also matches -- same trap as
# match.py:119; keep the literal keywords out of narrative prose (say
# "the inline-assembly keyword").
ASM_RE = re.compile(r"^\s*asm\s+[A-Za-z_]\w*\s*\(|\b__asm\b|\basm\s+void\b|\basm\s*\(")


def main():
    violations = []
    counted = 0
    for d in SRC_DIRS:
        for ext in ("*.c", "*.cpp", "*.cc", "*.cxx"):
            for f in sorted(d.glob(ext)):
                text = f.read_text(encoding="utf-8", errors="replace")
                if not ASM_RE.search(text):
                    continue
                counted += 1
                rel = f.relative_to(REPO).as_posix()
                violations.append((rel,
                                   "asm in src/ (owner ruling 2026-10-18: "
                                   "none admitted) -- move to drafts/"))
    print("asm files in src/: %d (none admitted; all must move to drafts/)"
          % counted)
    if violations:
        print("ASM POLICY: FAIL")
        for rel, why in violations:
            print("  %s: %s" % (rel, why))
        return 1
    print("ASM POLICY: PASS")
    return 0


if __name__ == "__main__":
    sys.exit(main())
