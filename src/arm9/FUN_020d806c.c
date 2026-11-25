// FUN_020d806c @ 0x020d806c (0xc, thumb) - ported from FUN_0204058c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020d806c @ 0x0204058c (0xc, Thumb) — one-shot tail forward:
 * loads the callee's argument out of the object (`ldr r0,[r0]`) and tail
 * calls FUN_020d85e8 with it. NOT a veneer: r3 comes from a literal-pool
 * slot (0x20d85e9, Thumb bit set) and r0 is rewritten before the
 * branch, so the inline-veneer spelling cannot express it — plain C does.
 * Body = 3 instructions + 1 pool-alignment halfword (c0 46) + pool word.
 *
 * The Ghidra decompile renders this as `(*DAT_02040594)(*param_1)`, a
 * call through a struct-held function pointer. That is wrong: the pool
 * slot is the direct call TARGET, not a pointer-to-variable, and the
 * destination is the known function FUN_020d85e8 (sym 0x20d85e8, size
 * 0x30, Thumb). Banked twin in shape: src/arm9/FUN_020686ac.c
 * (`FUN_020d85e8(a0)`), which is the same tail call without the reload.
 *
 * Header warning: match.py classifies any source whose text contains the
 * inline-assembly keyword as a hand-written assembly helper and STRIPS
 * -thumb from its flags, which silently turns a Thumb target into an ARM
 * compile. Do not spell that keyword anywhere in this file's prose.
 *
 * 14 builds match (all 9 dsi + all 5 1.2/*). The 2.0/* family schedules
 * the pool load ahead of the argument load (emits 014b 0068 instead of
 * 0068 014b) — a codegen-order difference in that compiler, not a
 * spelling difference; the canonical dsi/1.1 pin matches.
 */
typedef unsigned int u32;
extern int FUN_020d85e8(int);

void FUN_020d806c(u32 *p)
{
    FUN_020d85e8(*p);
}
