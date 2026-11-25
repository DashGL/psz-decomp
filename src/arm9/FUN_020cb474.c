// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x100, exact bytes and relocation targets.
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020cb1c4(int, int, char *, int, int *, int *, int);
extern void FUN_020014f4(char *, char *, int);

extern const char DAT_020fd370[];
extern const char DAT_020fd388[];
extern const char DAT_020fd2f4[];
extern const char DAT_020fd494[];
extern const char DAT_020fd4a0[];
extern const char DAT_020fd4ac[];

int FUN_020cb474(int a0, int a1, void *a2, int *a3, int a4, int a5) {
    int sp24;
    int sp20;
    int r4;
    char *r7;
    int sp1c;
    int r6;
    int r5;
    if (a2 == 0) {
        FUN_02000edc(DAT_020fd370, DAT_020fd388, DAT_020fd2f4, 0x227);
    }
    r7 = *(char **)a2;
    sp1c = *(int *)((char *)a2 + 8);
    r6 = *(int *)((char *)a2 + 0xc);
    r5 = sp1c - r6;
    r4 = 0;
    if (r5 == 0) {
        return 0;
    }
    do {
        int r0 = FUN_020cb1c4(a0, a1, r7 + (r6 + r4), r5, &sp24, &sp20, a5);
        if (r0 != 0) {
            return r0;
        }
        if (sp20 != 0) {
            r4 += sp20;
            r5 -= sp20;
        }
    } while (sp20 != 0 && r5 != 0);
    if (a4 != 0) {
        if (r4 > 0) {
            FUN_020014f4(r7, r7 + r4, r5 + 1);
            sp1c -= r4;
        }
    } else {
        r6 += r4;
    }
    if (sp1c < 0) {
        FUN_02000edc(DAT_020fd494, DAT_020fd388, DAT_020fd2f4, 0x24c);
    }
    if (r6 < 0) {
        FUN_02000edc(DAT_020fd4a0, DAT_020fd388, DAT_020fd2f4, 0x24d);
    }
    if (r6 > sp1c) {
        FUN_02000edc(DAT_020fd4ac, DAT_020fd388, DAT_020fd2f4, 0x24e);
    }
    *(int *)((char *)a2 + 8) = sp1c;
    *(int *)((char *)a2 + 0xc) = r6;
    if (a3 != 0) {
        *a3 = sp24;
    }
    return 0;
}
