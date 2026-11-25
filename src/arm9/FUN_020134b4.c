// FUN_020134b4 @ 0x020134b4 (0x1c, arm) - ported from FUN_0201877c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020134b4 @ 0x0201877c (0x1c, ARM) — "+8-bias slot is not -1" test:
 * load-and-compare leaf returning a bool. Sibling of banked FUN_02018764
 * (the matching store) and of the unsliced form FUN_0201872c.
 *
 * Bytes: 01 01 80 e0 / 08 10 90 e5 / 00 00 e0 e3 / 00 00 51 e1 /
 *        01 00 a0 13 / 00 00 a0 03 / 1e ff 2f e1
 *   add r0, r0, r1, lsl #2 ; ldr r1, [r0, #8] ; mvn r0, #0 ;
 *   cmp r1, r0 ; movne r0, #1 ; moveq r0, #0 ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * agrees on the address arithmetic (`param_1 + param_2 * 4 + 8 != -1`) and on
 * arity 2 (r0 base, r1 index; r2 is never touched). Recorded size 0x1c is the
 * true size: the body closes on `bx lr` at +0x18 and there is no pool word and
 * no 0000 pad inside the span.
 *
 * CODEGEN 1 (addressing): the load-bearing detail is the SAME instruction split
 * the banked store sibling documents. The target does NOT fold the +8 into the
 * scaled index; it materialises base + index*4 into r0 first, then spends the 8
 * bytes as an addressing displacement. Spelling it as a plain `base[index + 2]`
 * makes MWCC touch the index register instead, so explicit byte arithmetic is
 * what leaves r1 free to be clobbered by the load — the shape the target has.
 *
 * CODEGEN 2 (the -1 test) is why this file carries the 2.0/base override. The
 * target materialises -1 with `mvn r0,#0` and compares against it in a second
 * instruction. The dsi family (all 9 builds) instead strength-reduces
 * `x != -1` to a single `cmn r0,#1`, which is one word SHORTER — measured, not
 * argued: at the candidate's own 0x18 the dsi build reads
 *   add r0,r0,r1,lsl#2 ; ldr r0,[r0,#8] ; cmn r0,#1 ; movne r0,#1 ;
 *   moveq r0,#0 ; bx lr
 * i.e. the mvn AND the cmp both vanish and the load even retargets r1->r0. The
 * 1.2/* and 2.0/* families emit the target's seven words exactly, 15/24 builds
 * with zero mismatches and clean relocs. Five respellings were tried against the
 * dsi family first (unsigned `!= 0xffffffffu`, a hoisted local, an explicit
 * cast compare, and the algebraic `(v + 1) != 0` form) plus two flag cells
 * (-O4,s and -O2,p): every one still folds to the 6-word `cmn` form at dsi, so
 * the fold is unconditional in that compiler rather than a spelling artefact.
 * This is the documented stale-object family case, same class as the 17 banked
 * files carrying a 2.0/base override; no prose here repeats the marker strings.
 */
typedef unsigned int u32;
typedef unsigned char u8;

int FUN_020134b4(u32 *base, int index)
{
    return *(int *)((u8 *) base + index * 4 + 8) != -1;
}
