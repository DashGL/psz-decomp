// FUN_02016830 @ 0x02016830 (0xc, arm) - ported from FUN_0201c0d4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb -O4,p
/*
 * FUN_02016830 — pointer-pair store helper (ARM, recorded 0xc exact).
 * Two stores into the caller's struct: [0x1c] <- a1, [0x20] <- a2.
 * Found live-hot in the 0923 scan (x22 samples); called by parked
 * FUN_02019658 near (drafts/near/arm9/FUN_02019658.c spells the same
 * offsets 0x28/0x2c on its own node base).
 */
typedef unsigned int u32;

void FUN_02016830(u32 *obj, u32 a, u32 b)
{
    obj[7] = a;
    obj[8] = b;
}
