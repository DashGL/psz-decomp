// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void (*)(void));
extern void FUN_020ea628(void);
extern void FUN_020673f0(int, int);
extern int FUN_020ea20c(int, int, int, int);
extern void FUN_020004fa(int);

void FUN_020ea56c(int a, int b, int c) {
    do {
    } while (FUN_0206889c(4, 1) == 0);
    FUN_02068850(4, FUN_020ea628);
    FUN_020673f0(c, b);
    while (1) {
        if (FUN_020ea20c(2, a, b, c) == 1) {
            break;
        }
        FUN_020004fa(0x40000);
    }
}
