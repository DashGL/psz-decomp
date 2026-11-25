// FUN_02013454 @ 0x02013454 (0x8, arm) - ported from FUN_0201871c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02013454 @ 0x0201871c (0x8, ARM) — one-word store into a u32 array:
 * a[index] = value. Three-argument accessor leaf; the target is exactly two
 * instructions, a scaled-index str and the bx lr epilogue.
 *
 * Bytes: 01 21 80 e7 / 1e ff 2f e1
 *   str r2, [r0, r1, lsl #2] ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * agrees on the store but types the base as a bare `int`; the scaled index
 * lsl #2 only follows from a u32 element, so the base is a word pointer and the
 * middle argument is the element index. Arity is read off the target itself:
 * three distinct argument registers (r0 base, r1 index, r2 value) are consumed
 * and r0/r1/r2 are never reloaded, so there is no fourth.
 *
 * Placed next to a live accessor cluster in symbols.txt: FUN_02018724 loads
 * from the same scaled-index site, FUN_0201872c loads and compares against -1,
 * and FUN_02018700 is a 3-iteration fill loop over the same slot shape.
 */
typedef unsigned int u32;

void FUN_02013454(u32 *base, int index, u32 value)
{
    base[index] = value;
}
