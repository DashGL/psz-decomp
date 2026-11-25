extern char *FUN_020e961c(void);
extern int FUN_020e56d0(char *, int, int, int);
extern int FUN_020662b4(char *, int, const char *, ...);
extern void FUN_020d8af8(void *);
extern int FUN_020d8a2c(void *, int, int, char *, int, char *, int);
extern long long FUN_02067e0c(void);

struct S_0211de64_19 {
    int f0;
    int f4;
    char *f8;
};
extern struct S_0211de64_19 DAT_0211de64;
struct Entry_e5564 {
    unsigned char f0;
    char pad[11];
};
extern const struct Entry_e5564 DAT_0211de84[];
extern const char DAT_021017cc[];
extern const char DAT_021017d8[];
extern const char DAT_02101794[];

int FUN_020e5564(int p0) {
    char buf_ad[0x100];
    char sp_c[0xa1];
    int r4;
    int i;
    int r5;

    sp_c[0] = 8;
    sp_c[1] = 10;
    sp_c[2] = 0x32;
    sp_c[3] = 0x33;
    sp_c[4] = 0x34;
    sp_c[5] = 0x35;
    sp_c[6] = 0x36;
    r4 = 7;
    if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0 || *(unsigned char *)(FUN_020e961c() + 0x15) == 1) {
        for (i = 0; i < 0x9a; i++) {
            if (DAT_0211de84[i].f0 != 0) {
                sp_c[r4] = DAT_0211de84[i].f0;
                r4++;
            }
        }
    }
    switch (*(int *)(FUN_020e961c() + 0x1a0)) {
    case 0:
    case 1:
        break;
    case 3:
        if (*(int *)(FUN_020e961c() + 0x208) == 0) {
            int n = FUN_020e56d0(buf_ad, *(volatile int *)(FUN_020e961c() + 0x200), *(volatile unsigned char *)(FUN_020e961c() + 0x16), *(volatile unsigned char *)(FUN_020e961c() + 0x15));
            if (DAT_0211de64.f8 != 0) {
                FUN_020662b4(buf_ad + n, 0x100 - n, DAT_021017cc, DAT_0211de64.f8);
            }
            break;
        }
        p0 = *(int *)(FUN_020e961c() + 0x208);
    case 2:
    case 4:
    case 5:
        FUN_020662b4(buf_ad, 0x100, DAT_021017d8, DAT_02101794, p0);
        *(int *)(FUN_020e961c() + 0x204) = p0;
        break;
    }
    FUN_020d8af8(*(void **)(FUN_020e961c() + 0xe4));
    for (i = 0; i < 5; i++) {
        r5 = FUN_020d8a2c(*(void **)(FUN_020e961c() + 0xe4), 1, 0, sp_c, r4, buf_ad, 6);
        if (r5 == 0 || r5 != 2) {
            break;
        }
    }
    if (r5 == 0) {
        char *s = FUN_020e961c();
        *(long long *)(s + 0x174) = FUN_02067e0c() + 0xefb5f7LL;
    }
    return r5;
}
