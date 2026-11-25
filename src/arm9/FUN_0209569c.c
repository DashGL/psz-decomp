// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
extern int FUN_020390f4(void *);
extern void FUN_0206ea9c(void *, int, int);
extern char *FUN_020384a4(void *, int);
extern void FUN_02039038(void *, unsigned int, void (*)(void));
extern void FUN_02094f8c(void);

void FUN_0209569c(char *a, int b, int c) {
    if (FUN_020390f4(a) == 0) {
        char *p;
        unsigned int i;
        FUN_0206ea9c(a, b, c);
        p = FUN_020384a4(a, *(int *)(a + 0xd0));
        a[0x201] = 0;
        if (p != 0) {
            for (i = 0; i < 8; i++) {
                if ((unsigned char)p[i + 8] != 0xff) {
                    FUN_02039038(a, i, FUN_02094f8c);
                }
            }
        }
    }
}
