// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02064ac8(unsigned char *, int);
extern void FUN_02061f90(int, int, int);
extern int D_021180ac;

void FUN_02060b54(unsigned char a, int b) {
    unsigned char buf[8];
    int v = D_021180ac;
    buf[0] = a;
    FUN_02064ac8(buf, v);
    FUN_02061f90(6, b, D_021180ac);
}
