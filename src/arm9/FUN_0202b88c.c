// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02066a94(int);

struct Elem92 {
    char pad00[0x50];
    int f50;
    char pad54[6];
    unsigned char f5a;
    unsigned char f5b;
};

extern struct Elem92 DAT_02108a88[];
extern void *DAT_021181a0[];

void FUN_0202b88c(int a0) {
    int r0 = FUN_020683d4();
    int r4;
    struct Elem92 *r6 = DAT_02108a88;
    void *p;
    for (r4 = 0; r4 < 4; r4++, r6++) {
        if (r6->f5a != 0) {
            if (a0 - r6->f50 > 0x3bd) {
                r6->f5a = 0;
            }
        }
    }
    FUN_020683e8(r0);
    for (p = DAT_021181a0[2]; p != 0; p = *(void **)((char *)p + 0x68)) {
        void *r1 = *(void **)((char *)p + 0xa4);
        if (r1 != 0 && *(int *)r1 != 0 && *(unsigned char *)((char *)r1 + 9) != 0) {
            if (*(unsigned char *)((char *)r1 + 8) == 4 && *(unsigned char *)(*(char **)((char *)r1 + 0xc) + 0x455) < 8 && a0 - *(int *)((char *)r1 + 0x10) > 0xef && *(int *)((char *)r1 + 4) == 2) {
                *(unsigned char *)((char *)r1 + 8) = 0;
                *(int *)((char *)r1 + 4) = 0;
                FUN_02066a94(*(int *)r1);
            }
        }
    }
}
