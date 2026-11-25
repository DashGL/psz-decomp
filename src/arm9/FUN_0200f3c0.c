// FUN_0200f3c0 @ 0x0200f3c0 (0x18, arm) - ported from FUN_02029a50 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f3c0 @ 0x02029a50 (0x18, ARM) — a BOOLIFYING WRAPPER: calls
 * FUN_0200f430 and returns 1 when that call yields 0, else 0. In other words
 * `return FUN_0200f430(a, b) == 0;` — the callee's own result is inverted
 * into a predicate.
 *
 * Bytes: 08 40 2d e9 / 19 00 00 eb / 00 00 50 e3 / 01 00 a0 03 / 00 00 a0 13
 *       / 08 80 bd e8
 *   02029a50: e92d4008 push  {r3, lr}
 *   02029a54: eb000019 bl    0200f430          ; ARM call, +0x64 ahead
 *   02029a58: e3500000 cmp   r0, #0
 *   02029a5c: 03a00001 moveq r0, #1            ; callee returned 0 -> 1
 *   02029a60: 13a00000 movne r0, #0            ; callee returned nonzero -> 0
 *   02029a64: e8bd8008 pop   {r3, pc}
 *
 * MODE: ARM, and the 4-aligned 0x18 size heuristic is correct here. The first
 * word 0xe92d4008 has condition field 0b1110 and is a real ARM `push`; the
 * low halfword 0x4008 would ALSO pass a naive Thumb ldr-literal test
 * (0x4008 & 0xf800 == 0x4000), which is exactly why funcs.mode_of tests ARM
 * first. The `moveq`/`movne` predication pair is a further tell: MWCC emits
 * conditional moves only in ARM mode. Carries the ARM marker below.
 *
 * SHAPE: the predication is the whole point. Spelled as separate
 * `if (r == 0) return 1; return 0;` statements, MWCC hoists the
 * unconditional `mov r0,#0` ABOVE the test and loses the moveq/movne pair.
 * Spelled as ONE ternary the two computations fuse into predicated moves on
 * the return register, which is the target. See the predication lever.
 *
 * CALLEE ARITY, read off FUN_0200f430's own body rather than Ghidra's
 * decompile: its prologue is `push {r3,r4,r5,r6,r7,r8,sb,sl,fp,lr}` and its
 * second instruction is `mov sb, r1`, so it USES arg1 — it is not a
 * one-argument predicate. It is a 0x104-byte search/scan that walks a list
 * and pushes a frame, so it is game logic, not CRT.
 *
 * The wrapper is frameless: the callee's clobbered registers are the caller-
 * saved set, so the prologue only saves lr (plus r3 as the standard alignment
 * slot MWCC always emits for a function with a call).
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern u32 FUN_0200f430(void *a, void *b);

u32 FUN_0200f3c0(void *a, void *b) {
    return FUN_0200f430(a, b) == 0 ? 1 : 0;
}
