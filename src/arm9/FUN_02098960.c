// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { int a, b, c; } V3;
extern char *FUN_0208555c(int);
extern void FUN_020345f0(V3 *, void *);
extern void FUN_02036348(V3 *, void *, V3 *);
extern short FUN_0205c9e4(int, int);
extern void FUN_0209885c(int *, int, int, int);
void FUN_02098960(int *a, int b, void *c, int d) {
    char *r4 = FUN_0208555c(*a);
    if (r4 != 0) {
        V3 v1, v0;
        short s;
        FUN_020345f0(&v0, r4 + 0x9c);
        FUN_02036348(&v1, c, &v0);
        s = FUN_0205c9e4(v1.a, v1.c);
        *(short *)(r4 + 0x13e) = s;
        *(short *)(r4 + 0xc0) = s;
        *(short *)(r4 + 0xc2) = s;
    }
    FUN_0209885c(a, b, d, 0);
}
