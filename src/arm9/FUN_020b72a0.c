// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { unsigned char b[4]; } B4;
typedef struct { unsigned char b[16]; } B16;
extern int FUN_0203a1fc(void *);
extern void *FUN_020845a8(void *);
extern int FUN_020b6170(void *, int);
extern int FUN_020b618c(void *, int);
int FUN_020b72a0(int **a) {
    B16 sp4;
    B4 sp0;
    int r4 = 0;
    int i;
    void *r6;
    ((void (*)(int **, B16 *))(*a)[4])(a, &sp4);
    if (FUN_0203a1fc(&sp4) == 0) {
        sp0 = *(B4 *)&sp4;
        r6 = FUN_020845a8(&sp0);
        if (r6 != 0) {
            for (i = 0; i < 2; i++) {
                if (FUN_020b6170(r6, i) == 0x2d) {
                    r4 += FUN_020b618c(r6, i);
                }
            }
        }
    }
    return r4;
}
