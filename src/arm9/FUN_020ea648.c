// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned char DAT_0211e5f4[];
void FUN_02065774(const void *src, void *dst, int len);

unsigned char *FUN_020ea648(unsigned char *a) {
    union {
        unsigned long long u64;
        unsigned int u32[2];
    } sp0;
    unsigned int r2 = *(unsigned int *)(a + 8);
    sp0.u32[1] = *(unsigned int *)(a + 0xc);
    sp0.u32[0] = r2;
    FUN_02065774(a, DAT_0211e5f4, 5);
    DAT_0211e5f4[5] = ((*(unsigned int *)(a + 4) >> 8) & 7) | ((sp0.u64 & 0x1f) << 3);
    sp0.u64 >>= 5;
    FUN_02065774(&sp0, DAT_0211e5f4 + 6, 4);
    DAT_0211e5f4[10] = ((sp0.u64 >> 32) & 0x3f) | ((*(unsigned short *)(a + 0x10) & 3) << 6);
    DAT_0211e5f4[11] = (int)*(unsigned short *)(a + 0x10) >> 2;
    FUN_02065774(a + 0x12, DAT_0211e5f4 + 12, 2);
    return DAT_0211e5f4;
}
