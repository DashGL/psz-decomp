// FUN_0202050c @ 0x0202050c (0x10, arm) - ported from FUN_02026fbc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0202050c @ 0x02026fbc (0x10, ARM) — header-accessor leaf:
 * wordAt0 + halfwordAt10 * 16.
 *
 * Bytes: ba 10 d0 e1 / 00 00 90 e5 / 01 02 80 e0 / 1e ff 2f e1
 *   ldrh r1, [r0, #0xa] ; ldr r0, [r0] ; add r0, r0, r1, lsl #4 ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * agrees on the arithmetic but types the base as `int *`; the scaled `lsl #4`
 * only follows from a 32-bit word at offset 0 plus an UNSIGNED halfword at
 * offset 10, so the base is a byte-addressed record. ldrh is unsigned (no sign
 * extension), so the field is u16 and the multiply is unsigned; `add r0,r0,r1,lsl#4`
 * is the u32 scale-by-16 form, not a signed `* 0x10`.
 *
 * Load ORDER falls out of the register roles, not from the source: r0 holds the
 * left leaf (the word) and r1 the right leaf (the halfword), and this compiler
 * emits a two-leaf sum right-load-first — which is exactly ldrh before ldr here.
 *
 * Four instructions, one pool-free body: the 0x10 recorded span is the whole
 * function and is 4-aligned, so it is not a 2-byte pad case.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

u32 FUN_0202050c(void *p)
{
    return *(u32 *)p + (u32)*(u16 *)((u8 *)p + 0xa) * 0x10;
}
