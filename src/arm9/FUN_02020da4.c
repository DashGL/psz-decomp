// FUN_02020da4 @ 0x02020da4 (0x8, arm) - ported from FUN_020274f4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02020da4 @ 0x020274f4 (0x8, ARM) — shift leaf: returns its argument
 * multiplied by 16.
 *
 * Bytes: 00 02 a0 e1 / 1e ff 2f e1
 *   lsl r0,r0,#4 ; bx lr.
 *
 * Frameless two-instruction leaf: argument arrives in r0, the shifted value
 * leaves in r0. No pool, no stack frame, no callee, no literal — the recorded
 * 0x8 is the whole function, and the next word at 0x020274fc is a separate
 * function's push {r3,lr} prologue, not a continuation of this one. So this is
 * the "1-instruction leaf plus return" form, not a two-instruction guard pair:
 * a guard would compare and branch on a condition, and there is no compare here.
 *
 * `return x << 4;` over a u32 parameter emits the shift by immediate directly.
 * The width matters only in that a signed int parameter would make the C
 * semantics a left shift of a negative value (undefined); u32 is the faithful
 * spelling and is what shipped. The encoding lsl r0,r0,#4 is the ARM shifted-
 * register form with an immediate rotate field, and it is identical at either
 * optimization level, so no flag class beyond the default was needed.
 *
 * Matched all 24 builds (9 dsi + 5 ntr + 10 2.0) at the recorded 0x8.
 * No version override needed.
 */
typedef unsigned int u32;

u32 FUN_02020da4(u32 x) {
    return x << 4;
}
