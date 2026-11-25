// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    unsigned int f0 : 7;
    unsigned int f1 : 4;
    unsigned int f2 : 5;
    unsigned int f3 : 8;
    unsigned int f4 : 8;
} BF_86f80;
extern int FUN_02068c9c(int *, int *);
void FUN_02086f80(BF_86f80 *a) {
    int d[4];
    int t[3];
    if (FUN_02068c9c(d, t) == 0) {
        a->f0 = d[0];
        a->f1 = d[1];
        a->f2 = d[2];
        a->f3 = t[0];
        a->f4 = t[1];
    }
}
