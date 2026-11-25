// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020b8070(int **, int *, int, int);
extern void *FUN_02129ed4(void);
extern void FUN_0212a980(void *, int);
extern void FUN_0212a3cc(void *, int, int, int, unsigned short);
void FUN_020b800c(int a, int b, int c, int *d, unsigned short e) {
    int *sp8 = 0;
    int sp4 = 0;
    if (FUN_020b8070(&sp8, &sp4, a, c) != 0 && sp8 != 0) {
        int i;
        for (i = 0; i < sp4; i++) {
            FUN_0212a980(FUN_02129ed4(), sp8[i]);
        }
        if (b < sp4) {
            FUN_0212a3cc(FUN_02129ed4(), d[0], d[2], sp8[b], e);
        }
    }
}
