// FUN_0204248c @ 0x0204248c (0x26, thumb) - ported from FUN_020703d8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0204248c - Table probe + dispatch (Thumb, recorded size 0x28). Guards: (int)a1 in (−1, 5) exclusive-ish (ble/bge chain), then r3 = u32[a0 + 4*a1 + 0xcc] must be non-zero, call FUN_02046b94(r3, a2), else return 0.
 *
 * verified: FUN_0204248c @ 0x020703d8 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_02046b94(u32 table, u32 a2);

u32 FUN_0204248c(u32 a0, int a1, u32 a2)
{
    u32 r3;
    r3 = 0;
    r3 = ~r3;
    if (a1 <= (int)r3) {
        goto ret0;
    }
    if (a1 >= 5) {
        goto ret0;
    }
    r3 = *(u32 *)(a0 + (a1 << 2) + 0xcc);
    if (r3 == 0) {
        goto ret0;
    }
    return FUN_02046b94(r3, a2);
ret0:
    return 0;
}
