// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { unsigned char a, b; } B2;
typedef struct { int a, b, c; } V3;
extern const B2 D_020f4590;
extern char *FUN_0208555c(int);
extern void FUN_020345f0(V3 *, void *);
extern void FUN_02036348(V3 *, void *, V3 *);
extern short FUN_0205c9e4(int, int);
extern void FUN_0209885c(int *, B2 *, int, int);
void FUN_020989b4(int *a, void *b) {
    B2 loc = D_020f4590;
    char *r4 = FUN_0208555c(*a);
    if (r4 != 0) {
        V3 v1, v0;
        FUN_020345f0(&v0, r4 + 0x9c);
        FUN_02036348(&v1, b, &v0);
        *(short *)(r4 + 0xc2) = FUN_0205c9e4(v1.a, v1.c);
    }
    FUN_0209885c(a, &loc, -1, 0);
}
