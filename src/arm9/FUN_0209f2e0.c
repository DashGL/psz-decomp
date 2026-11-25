// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_020fb7b8;
extern const char DAT_020fb7bc[];
extern const char DAT_020fb7d0[];
extern int DAT_02108c84;
extern const char DAT_020fb7e4[];
extern const char DAT_020fb7e8[];
extern void *FUN_020ba894(int);
extern void *FUN_020bc2dc(void *, int, int);
extern void FUN_020038ec(char *, int, const char *, void *);
extern void FUN_020bc3c0(void *, char *, int);
extern void FUN_0209f3a4(char *, void *, void *);
extern int FUN_020bc51c(void *, const char *);
extern unsigned short FUN_02037adc(int, int, int);
extern unsigned short FUN_02037c88(int, int, int, int);
extern void FUN_02033f30(int, unsigned short, unsigned short);

void FUN_0209f2e0(int param_1) {
    char buf[0x40];
    if (*(signed char *)param_1 != 0) {
        void *p = FUN_020ba894(0x84);
        if (p != 0) {
            p = FUN_020bc2dc(p, DAT_020fb7b8, 0);
        }
        *(void **)(param_1 + 0x40) = p;
        FUN_020038ec(buf, 0x40, DAT_020fb7bc, (void *)param_1);
        if (*(void **)(param_1 + 0x40) != 0) {
            FUN_020bc3c0(*(void **)(param_1 + 0x40), buf, 0);
        }
        FUN_020038ec(buf, 0x40, DAT_020fb7d0, (void *)param_1);
        FUN_0209f3a4(buf, (void *)(param_1 + 0x4c), (void *)(param_1 + 0x48));
        if (*(void **)(param_1 + 0x40) != 0) {
            int r4 = DAT_02108c84;
            if (r4 != 0) {
                int r1 = FUN_020bc51c(*(void **)(param_1 + 0x40), DAT_020fb7e4);
                *(unsigned short *)(param_1 + 0x44) = FUN_02037adc(r4, r1, 0);
                r1 = FUN_020bc51c(*(void **)(param_1 + 0x40), DAT_020fb7e8);
                *(unsigned short *)(param_1 + 0x46) = FUN_02037c88(r4, r1, 4, 0);
                FUN_02033f30(r4, *(unsigned short *)(param_1 + 0x44), *(unsigned short *)(param_1 + 0x48));
            }
        }
    }
}
