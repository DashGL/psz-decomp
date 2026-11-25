// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *D_021180ac;
extern int FUN_02061278(int, int, int);
extern void FUN_020600fc(int, int, int);

void FUN_020600b0(int a, int b, int c) {
    if (FUN_02061278(a, b, c) != 0) {
        *(int *)(D_021180ac + (a - 1) * 4 + 0x1000 + 0x4e8) = b;
    }
    FUN_020600fc(a, b, c);
}
