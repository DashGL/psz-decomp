// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -O4,p
struct S12 {
    void *(*fn)(const void *, int);
    int b;
    int c;
};
extern struct {
    int p0;
    int p4;
    int p8;
    int pc;
    int p10;
    int p14;
} DAT_0211dbfc;
extern char DAT_021006f8[];
extern char DAT_0210070c[];
extern void FUN_020656b8(void *, int, int);
extern void FUN_02067184(int);
extern void FUN_020df6b4(void);

int FUN_020df4f8(struct S12 *a) {
    void *(*r4)(const void *, int) = a->fn;
    void *p;
    if (DAT_0211dbfc.p0 != 0) {
        return 4;
    }
    p = r4(DAT_021006f8, 0x11f4);
    DAT_0211dbfc.p0 = (int)p;
    if (p == 0) {
        return 4;
    }
    FUN_020656b8(p, 0, 0x11f4);
    *(int *)(DAT_0211dbfc.p0 + 0x1004) = -99999;
    *(struct S12 *)(DAT_0211dbfc.p0 + 0x1108) = *a;
    if (DAT_0211dbfc.p14 != 0) {
        return 4;
    }
    p = r4(DAT_0210070c, 0x1c14);
    DAT_0211dbfc.p14 = (int)p;
    if (p == 0) {
        return 4;
    }
    DAT_0211dbfc.p4 = 0;
    FUN_02067184(DAT_0211dbfc.p0 + 0x11dc);
    FUN_020df6b4();
    return 0;
}
