// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_02107054[];
extern void FUN_02021ad8(void *);
extern void FUN_02066c68(int);
extern int FUN_02021a08(void *);
int FUN_02021bd4(void *a) {
    unsigned int i, j;
    for (i = 0; i < 8; i++) {
        FUN_02021ad8(a);
        for (j = 0; j < 20; j++) {
            if (DAT_02107054[0x14] == 0) {
                return 0;
            }
            FUN_02066c68(100);
            int res = FUN_02021a08(a);
            if (res != 0) {
                return res;
            }
        }
    }
    return 0;
}
