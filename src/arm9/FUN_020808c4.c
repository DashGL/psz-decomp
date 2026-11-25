// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4[3];
    short f10;
    char f12;
    char f13;
    char f14;
    char f15;
    char f16;
    unsigned char f17;
    unsigned char f18;
    unsigned char f19;
} S_808c4;
extern char DAT_020fa6e4[];
extern void FUN_02080b24(S_808c4 *);
extern void FUN_020662b4(char *, int, char *, int);
extern int FUN_020ba174(char *, void *, S_808c4 *, int);
extern void FUN_02080b10(void);
void FUN_020808c4(S_808c4 *a, char b, unsigned char *c, int d) {
    char sp0[0x14];
    a->f13 = b;
    a->f14 = 0;
    unsigned char r6 = c[1];
    if (r6 != a->f17) {
        FUN_02080b24(a);
        a->f17 = 0xff;
        FUN_020662b4(sp0, 0x14, DAT_020fa6e4, r6);
        a->f0 = FUN_020ba174(sp0, (void *)FUN_02080b10, a, 0x10);
        if (a->f0 != 0) {
            a->f15 = 1;
            a->f17 = r6;
        }
    }
    a->f12 = (r6 == 0) ? 0 : (signed char)d;
    a->f19 = c[3];
    a->f18 = c[2];
}
