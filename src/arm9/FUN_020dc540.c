// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
struct S {
    unsigned char pad[0xc0];
    unsigned char f_c0[4];
};
extern const void *DAT_020f5f8c;
extern void FUN_02065774(const void *, void *, int);
extern int FUN_020dada0(int);
extern int FUN_020dc5c8(void *);
extern int FUN_020dc60c(int);

void FUN_020dc540(int *a, int b, int *c) {
    int idx;
    FUN_02065774(&DAT_020f5f8c, c, 0x58);
    c[1] = a[0];
    c[2] = a[1];
    if (*(unsigned char *)(b + 0xd0d) < 6) {
        idx = FUN_020dada0(*(unsigned char *)(b + 0xd0d)) << 8;
        if (((struct S *)(b + idx))->f_c0[0] != 0) {
            c[3] = 0;
            c[4] = FUN_020dc5c8((void *)(((struct S *)(b + idx))->f_c0));
            c[5] = FUN_020dc60c(*(unsigned char *)(b + idx + 0xd0));
            c[6] = FUN_020dc5c8((void *)(b + idx + 0xc4));
            c[7] = FUN_020dc5c8((void *)(b + idx + 0xc8));
            c[8] = FUN_020dc5c8((void *)(b + idx + 0xcc));
        } else {
            c[3] = 1;
            c[4] = 0;
            c[5] = 0;
            c[6] = 0;
            c[7] = 0;
            c[8] = 0;
        }
    }
}
