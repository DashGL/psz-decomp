// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    void *f8;
    int fc;
    unsigned short f10;
    unsigned short f12;
} S_79874;
extern void FUN_020798d4(S_79874 *, char *);
extern int FUN_020ba288(char *);
extern void *FUN_020c13c8(int, int, int);
extern int FUN_020ba0c8(char *, void *, void *, S_79874 *);
extern void FUN_020799a0(void);
extern void FUN_020ba2d4(char *, void *);
extern int FUN_020ba440(void *);
extern void FUN_0209cc0c(int);
void FUN_02079874(S_79874 *a) {
    char sp0[0x40];
    FUN_020798d4(a, sp0);
    int r1 = FUN_020ba288(sp0);
    if (r1 > 0) {
        a->f8 = FUN_020c13c8(a->f4, r1, 0x10);
        if (a->f8 != 0) {
            if (a->f12 & 1) {
                if (FUN_020ba0c8(sp0, a->f8, (void *)FUN_020799a0, a) != 0) {
                    a->f10 = 2;
                }
            } else {
                FUN_020ba2d4(sp0, a->f8);
                a->fc = FUN_020ba440(a->f8);
                a->f10 = 0;
                FUN_0209cc0c(a->fc);
            }
        }
    }
}
