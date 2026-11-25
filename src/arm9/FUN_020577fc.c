// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065774(const void *, void *, unsigned int);
extern void FUN_0205797c(void *);

void FUN_020577fc(void *a0, const unsigned char *a1, unsigned int a2) {
    unsigned int r3 = *((unsigned int *)a0 + 4);
    unsigned int ip = r3 & 0x3f;
    unsigned int r7;
    *(unsigned long long *)((char *)a0 + 0x10) += a2;
    r7 = 0x40 - ip;
    if (r7 > a2) {
        if (a2 == 0) {
            return;
        }
        FUN_02065774(a1, (char *)a0 + 0x18 + ip, a2);
        return;
    }
    FUN_02065774(a1, (char *)a0 + 0x18 + ip, r7);
    FUN_0205797c(a0);
    a2 -= r7;
    {
        int r8 = (int)(a2 >> 6);
        const unsigned char *p = a1 + r7;
        while (r8 > 0) {
            FUN_02065774(p, (char *)a0 + 0x18, 0x40);
            p += 0x40;
            FUN_0205797c(a0);
            r8--;
        }
        if ((a2 & 0x3f) != 0) {
            FUN_02065774(p, (char *)a0 + 0x18, a2 & 0x3f);
        }
    }
}
