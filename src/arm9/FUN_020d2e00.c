// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0[5];
    int f14;
    int f18;
    int f1c;
} Sub_d2e00;
typedef struct S_d2e00 {
    int f0[2];
    Sub_d2e00 *f8;
    int fc[6];
    int f24;
    int f28[2];
    void (*f30)(struct S_d2e00 *, void *);
} S_d2e00;
extern char DAT_020fe9fc[];
extern char DAT_020fe9d4[];
extern char DAT_020fe900[];
extern void FUN_02000edc(char *, char *, char *, int);
extern void FUN_020d4d60(Sub_d2e00 *);
int FUN_020d2e00(S_d2e00 *a, void *b) {
    if (a == 0) {
        FUN_02000edc(DAT_020fe9fc, DAT_020fe9d4, DAT_020fe900, 0xba);
    }
    if (a == 0) {
        return 1;
    }
    if (a->f30 == 0) {
        return 1;
    }
    a->f24++;
    a->f8->f1c++;
    a->f30(a, b);
    a->f24--;
    a->f8->f1c--;
    if (a->f8->f14 != 0 && a->f8->f1c == 0) {
        FUN_020d4d60(a->f8);
        return 0;
    }
    return 1;
}
