// FUN_020a45a4 @ 0x020a45a4 (0x24, thumb) - ported from FUN_0205d3f0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020a45a4 @ 0x0205d3f0 (0x24 = 0x22 body + 2-byte pad + pool word
 * inside the recorded span, Thumb) — masked update of the DISPCNT-class
 * control register at 0x04000000: extract the 5-bit field at bits 8..12
 * ((v & 0x1f00) >> 8), OR it with the argument, and merge it back with
 * the complement mask 0xffffe0ff (pooled: not an ARM immediate).
 * OR-twin of banked FUN_020ba1fc (which ANDs with ~arg).
 *
 * Matched 2026-10-17 wave r2 (worker w1). The parked header's "needs a
 * load-order lever" diagnosis was wrong: the single-expression spelling
 * (everything in one store statement) batches the two volatile loads
 * adjacent; splitting the field extract into its OWN local
 * (`u32 f = (*disp & 0x1f00) >> 8;` before the store statement) under
 * -O4,s reproduces the target's separation exactly (extract chain
 * between the loads, f in callee-saved r4, push {r4,lr} frame, final
 * `lsls r0,r0,#8` before `ands r2,r3`). Same lever pair as FUN_020ba1fc:
 * -O4,s flag + extract-as-local spelling.
 *
 * Double volatile read is load-bearing (two `ldr r3,[r1]` sites); the
 * field mask 0x1f00 is register-built (movs #0x1f; lsls #8), the merge
 * mask pools at 0x0205d414.
 */
typedef unsigned int u32;
typedef volatile unsigned int vu32;

void FUN_020a45a4(u32 a)
{
    volatile u32 *disp = (u32 *)0x04000000;
    u32 f = (*disp & 0x1f00) >> 8;
    *disp = (*disp & 0xffffe0ffu) | ((a | f) << 8);
}
