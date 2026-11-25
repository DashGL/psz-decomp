// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void (*)(void));
extern int FUN_020ea20c(int, int, int, int);
extern void FUN_020004fa(int);
extern void FUN_020ea628(void);

int FUN_020ea5e4(void) {
    while (FUN_0206889c(4, 1) == 0) {
    }
    FUN_02068850(4, FUN_020ea628);
    while (1) {
        if (FUN_020ea20c(7, 0, 0, 0) == 1) {
            break;
        }
        FUN_020004fa(0x40000);
    }
    return 1;
}
