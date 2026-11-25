// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int f0; int *f4; } G_d1bd4;
extern G_d1bd4 DAT_0211d084;
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020c77cc(int);
extern void FUN_020d1f0c(int *, int);
extern void FUN_020c7228(int, int *);
extern void FUN_020d1f70(int *, int);
extern int FUN_020d1f58(void);
extern const char DAT_020fe668[];
extern const char DAT_020fe66c[];
extern const char DAT_020fe64c[];
int FUN_020d1bd4(int *a, int b, int c, int d) {
    int sp[5];
    if (a == 0) {
        a = DAT_0211d084.f4;
    }
    if (a == 0) {
        FUN_02000edc(DAT_020fe668, DAT_020fe66c, DAT_020fe64c, 0x75);
    }
    sp[0] = FUN_020c77cc(b);
    sp[3] = 0;
    sp[2] = 1;
    sp[1] = c;
    FUN_020d1f0c(sp, d);
    FUN_020c7228(*a, sp);
    FUN_020d1f70(a, b);
    return FUN_020d1f58();
}
