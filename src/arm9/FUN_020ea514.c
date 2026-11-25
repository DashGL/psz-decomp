// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020673d4(int, int);
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void *);
extern int FUN_020ea20c(int, int, unsigned short, int);
extern void FUN_020004fa(int);
extern void FUN_020ea628(void);
int FUN_020ea514(int a, int b, int c) {
    FUN_020673d4(c, b);
    while (FUN_0206889c(4, 1) == 0) {
    }
    FUN_02068850(4, (void *)FUN_020ea628);
    for (;;) {
        if (FUN_020ea20c(1, a, (unsigned short)b, c) == 1) {
            break;
        }
        FUN_020004fa(0x40000);
    }
    FUN_020673d4(c, b);
    return 1;
}
