// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
extern int DAT_020fdbdc[];
extern int DAT_020fdbf4[];
extern int DAT_020fdc00[];
extern int DAT_020fdc08[];
extern void FUN_020cb184(void *, int, void *);
extern void FUN_020cb1a0(void *, int, int);

struct Sub4 {
    char pad0[0x198];
    int f198;
    char pad1[0x8];
    int f1a4;
    char pad2[0x438];
    void *f5e0;
    char pad3[4];
    int f5e8;
    char pad4[4];
    void *f5f0;
    char pad5[4];
    int f5f8;
};

int FUN_020cd4b0(struct Sub4 **param_1, int param_2) {
    struct Sub4 *r4 = *param_1;
    if (r4->f5e8 > 0) {
        FUN_020cb184(param_1, param_2, DAT_020fdbdc);
        FUN_020cb1a0(param_1, param_2, r4->f198);
        FUN_020cb184(param_1, param_2, r4->f5e0);
        FUN_020cb184(param_1, param_2, DAT_020fdbf4);
        FUN_020cb1a0(param_1, param_2, r4->f1a4);
        FUN_020cb184(param_1, param_2, DAT_020fdc00);
        r4->f5e8 = 0;
    }
    if (r4->f5f8 > 0) {
        FUN_020cb184(param_1, param_2, DAT_020fdc08);
        FUN_020cb1a0(param_1, param_2, r4->f198);
        FUN_020cb184(param_1, param_2, r4->f5f0);
        FUN_020cb184(param_1, param_2, DAT_020fdc00);
        r4->f5f8 = 0;
    }
    return 0;
}
