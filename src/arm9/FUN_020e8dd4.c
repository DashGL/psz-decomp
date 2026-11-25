// flags: -O4,p
extern char *FUN_020e961c(void);
extern int FUN_020d8b3c(void *);
extern void *FUN_020d8b30(void *, int);
extern int FUN_020d81b0(void *, const char *, int);
extern void FUN_020d8ab0(void *, void *);
extern int FUN_020e0b68(int);
extern void FUN_020d8134(void *, const char *, int);
extern void FUN_020d8b48(void *, int, const char *, int);

extern const char DAT_02101794[];
extern const char DAT_021017c0[];

int FUN_020e8dd4(int p0) {
    int sp_c = 0;
    int r4;
    int r5;
    int r6;
    int r7;
    int sp8;
    void *sp4;

    for (r4 = 0; r4 < FUN_020d8b3c(*(void **)(FUN_020e961c() + 0xe4)); r4++) {
        sp4 = FUN_020d8b30(*(void **)(FUN_020e961c() + 0xe4), r4);
        if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0) {
            r7 = FUN_020d81b0(sp4, DAT_02101794, 0);
            sp8 = 0;
            for (r6 = 1; r6 <= *(unsigned char *)(FUN_020e961c() + 0xd); r6++) {
                if (r7 == *(int *)(FUN_020e961c() + r6 * 4 + 0xf4)) {
                    FUN_020d8ab0(*(void **)(FUN_020e961c() + 0xe4), sp4);
                    r4--;
                    sp8 = 1;
                    break;
                }
            }
            if (sp8 != 0) {
                continue;
            }
        }
        if (*(int *)(FUN_020e961c() + 0x474) != 0) {
            char *s0 = FUN_020e961c();
            char *s1 = FUN_020e961c();
            r5 = (*(int (**)(int, int))(s0 + 0x474))(r4, *(int *)(s1 + 0x478));
            if (r5 > 0) {
                if (r5 > 0x7fffff) {
                    r5 = 0x7fffff;
                }
                FUN_020d8134(sp4, DAT_021017c0, (r5 << 8) | FUN_020e0b68(0x100));
            } else {
                FUN_020d8ab0(*(void **)(FUN_020e961c() + 0xe4), sp4);
                r4--;
                sp_c = 1;
            }
        } else {
            FUN_020d8134(sp4, DAT_021017c0, FUN_020e0b68(0x80));
        }
    }
    if (p0 != 0 && FUN_020d8b3c(*(void **)(FUN_020e961c() + 0xe4)) != 0) {
        FUN_020d8b48(*(void **)(FUN_020e961c() + 0xe4), 0, DAT_021017c0, 0);
    }
    if (sp_c != 0 && FUN_020d8b3c(*(void **)(FUN_020e961c() + 0xe4)) == 0) {
        return 0;
    }
    return 1;
}
