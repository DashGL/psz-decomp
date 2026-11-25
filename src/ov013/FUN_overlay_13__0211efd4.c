// FUN_overlay_13__0211efd4 @ 0x0211efd4 (0x28, thumb) - ported from FUN_020ba1fc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_overlay_13__0211efd4 @ 0x020ba1fc (0x28 = 0x22 body + 2-byte pad + 4-byte pool
 * word, Thumb) — masked update of the DISP_MMEM/DISPCNT-class control
 * register at 0x04000000: extract the 5-bit field at bits 8..12
 * ((v & 0x1f00) >> 8), AND it with ~arg, and merge it back with the
 * complement mask 0xffffe0ff (pooled: not an ARM immediate).
 *
 * Matched 2026-10-17 wave r2 (worker w1). THE LEVER IS THE FLAG, again
 * (twin of banked FUN_020a3390's note): the body spelling below compiles
 * to two different machine codes and only the -O4,s cell matches:
 *   -O4,s (this file): push {r4,lr}; f lives in callee-saved r4 across the
 *     second volatile read; `lsls r0,r0,#8` scheduled BEFORE `ands r2,r3`;
 *     pop {r4,pc}.  <- byte-identical to ROM
 *   -O4,p: no frame (bx lr), f copied r2->r3 via `adds r3,r2,#0`, the
 *     final `ands`/`lsls` pair swapped -> 2 halfwords differ.
 * The parked near header's "all -O<n>,<x> cells byte-identical" negative
 * grid was measured on an older spelling; re-swept flat on this one
 * (rule: p-vs-s epilogue trade is per-function AND per-spelling).
 *
 * THE DOUBLE REGISTER READ IS LOAD-BEARING: the register is spelled
 * through a `volatile u32 *` (house style of FUN_0200f9a4/f07c/fc3c); two
 * separate `*disp` reads keep both `ldr r3,[r1]` sites. The field mask
 * 0x1f00 is built in registers (`movs #0x1f; lsls #8`), matching; the
 * write-back mask 0xffffe0ff is pooled, matching the target's literal at
 * 0x020ba220.
 */
typedef unsigned int u32;
typedef volatile unsigned int vu32;

void FUN_overlay_13__0211efd4(u32 mask)
{
    volatile u32 *disp = (u32 *)0x04000000;
    u32 f = (*disp & 0x1f00) >> 8;
    *disp = (*disp & 0xffffe0ffu) | ((~mask & f) << 8);
}
