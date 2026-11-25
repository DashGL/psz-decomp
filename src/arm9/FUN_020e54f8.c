// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020e961c(void);
extern void FUN_020d8960(void *);
extern void FUN_020e34e0(void);
extern void FUN_020e9628(int);
extern void FUN_020e05d8(int, int, int);
extern void FUN_020e8374(void);
extern int DAT_0211de64[];
void FUN_020e54f8(void) {
    if (FUN_020e961c() == 0) {
        return;
    }
    if (*(void **)(FUN_020e961c() + 0xe4) != 0) {
        if (DAT_0211de64[6] == 0) {
            FUN_020d8960(*(void **)(FUN_020e961c() + 0xe4));
            *(void **)(FUN_020e961c() + 0xe4) = 0;
        } else {
            DAT_0211de64[5] = 1;
        }
    }
    FUN_020e34e0();
    FUN_020e9628(0);
    if (DAT_0211de64[2] != 0) {
        FUN_020e05d8(4, DAT_0211de64[2], 0);
        DAT_0211de64[2] = 0;
    }
    FUN_020e8374();
    *(char *)(FUN_020e961c() + 0x18) = 1;
}
