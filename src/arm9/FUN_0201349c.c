// FUN_0201349c @ 0x0201349c (0xc, arm) - ported from FUN_02018764 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0201349c @ 0x02018764 (0xc, ARM) — one-word store into a u32 array at a
 * fixed +8 byte bias: a[index + 2] = value. Three-argument accessor leaf.
 *
 * Bytes: 01 01 80 e0 / 08 20 80 e5 / 1e ff 2f e1
 *   add r0, r0, r1, lsl #2 ; str r2, [r0, #8] ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * writes `*(undefined4 *)(param_1 + param_2 * 4 + 8) = param_3`, which is the
 * same address arithmetic, and the +8 bias is a fixed element offset of 2 on a
 * u32 array. The target's INSTRUCTION SPLIT is the load-bearing detail: it
 * materialises base + index*4 into r0 first and then spends the 8 bytes as an
 * addressing displacement, rather than folding the constant into the index
 * (see CODEGEN below — the fold is what MWCC does instead). Nothing is reloaded
 * between the two instructions, so r0 is base, r1 the index and r2 the value,
 * and arity is 3.
 *
 * Sits inside the same accessor cluster as FUN_0201871c / FUN_02018724 /
 * FUN_0201872c; the +8-bias siblings are FUN_02018770 (load), FUN_0201877c
 * (load and compare against -1) and the 3-iteration fill loop at
 * FUN_02018744, which strides by 4 and stores the same +8 slot.
 *
 * CODEGEN: spelling it as a plain `base[index + 2]` is WRONG and lands the
 * wrong shape on all 24 builds (cell 1) — MWCC folds the constant element
 * offset into the index and emits `add r1,r1,#2` / `str r2,[r0,r1,lsl #2]`.
 * The target instead does NOT touch the index register: it forms
 * base + index*4 in r0 and spends the 8 bytes as an addressing displacement.
 * Explicit byte arithmetic keeps the index untouched (lever
 * `halfword-byte-offset-threshold` shape, applied to a word store).
 */
typedef unsigned int u32;
typedef unsigned char u8;

void FUN_0201349c(u32 *base, int index, u32 value)
{
    *(u32 *)((u8 *) base + index * 4 + 8) = value;
}
