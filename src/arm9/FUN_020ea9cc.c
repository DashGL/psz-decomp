// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x56, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020654b4(int, char *, int);
extern void FUN_020eab5c(int *);
extern int FUN_020ea648(int *);
extern void FUN_02065774(int, char *, int);
int FUN_020ea9cc(char *a) {
    int sp[5];
    int i;
    char *p;
    FUN_020654b4(0, a, 0x400);
    for (i = 0, p = a; i < 3; i++, p += 0x100) {
        *(unsigned char *)(p + 0xe7) = 0xff;
    }
    FUN_020eab5c(sp);
    int r6 = FUN_020ea648(sp);
    for (i = 0; i < 2; i++) {
        FUN_02065774(r6, a + 0xf0, 0xe);
        a += 0x100;
    }
    return 0;
}
