// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02069f68(void);
extern void FUN_02068850(int, void *);
extern int FUN_0206a05c(void);
extern int FUN_0206889c(int, int);
extern void FUN_02068444(int);
void FUN_02069f8c(void) {
    FUN_02068850(7, (void *)FUN_02069f68);
    if (FUN_0206a05c() == 0) {
        return;
    }
    while (FUN_0206889c(7, 1) == 0) {
        FUN_02068444(100);
    }
}
