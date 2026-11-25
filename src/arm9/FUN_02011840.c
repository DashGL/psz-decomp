// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_020669dc(void *);
extern void FUN_0206719c(void *);
extern void *FUN_02010aac(void *);
extern void FUN_02067220(void *);
extern void FUN_02010e80(void *);
extern void FUN_02010b3c(void *);
void FUN_02011840(char *a) {
    char *r4 = a + 0x4c8;
    for (;;) {
        FUN_020669dc(a + 0x4c0);
        for (;;) {
            void *r5;
            FUN_0206719c(r4);
            r5 = FUN_02010aac(a + 0x4e0);
            if (r5 == 0) {
                FUN_02067220(r4);
                break;
            }
            FUN_02010e80(r5);
            FUN_02010b3c(r5);
            FUN_02067220(r4);
        }
    }
}
