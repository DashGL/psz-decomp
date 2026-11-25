// FUN_0203647c @ 0x0203647c (0x1e, thumb) - ported from FUN_020407b8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0203647c - 3-word vector add via FUN_02035408 (Thumb, recorded size 0x20). dst untouched; sums scheduled w0/w1/w2.
 *
 * verified: FUN_0203647c @ 0x020407b8 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned int u32;

extern void FUN_02035408(u32 *p, u32 a, u32 b, u32 c);

void FUN_0203647c(u32 *dst, u32 *a, u32 *b)
{
    u32 s0 = a[0] + b[0];
    u32 s1 = a[1] + b[1];
    u32 s2 = a[2] + b[2];
    FUN_02035408(dst, s0, s1, s2);
}
