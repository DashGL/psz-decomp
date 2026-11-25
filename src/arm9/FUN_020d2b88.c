// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    char *f0;
    int f4;
    int f8;
} Buf;
extern const char D_020fe89c[];
extern const char D_020fe848[];
extern const char D_020fe7d8[];
extern const char D_020fe8b4[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020014f4(char *, char *, int);
void FUN_020d2b88(Buf *a, int b, int c) {
    if (b == -1) {
        b = a->f8 - c;
    }
    if (b > a->f8) {
        FUN_02000edc(D_020fe89c, D_020fe848, D_020fe7d8, 0x4f);
    }
    if (c > a->f8 - b) {
        FUN_02000edc(D_020fe8b4, D_020fe848, D_020fe7d8, 0x50);
    }
    FUN_020014f4(a->f0 + b, a->f0 + b + c, a->f8 - b - c);
    a->f8 -= c;
}
