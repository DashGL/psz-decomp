// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { int a[3]; } V3;
extern char *FUN_0208555c(int);
extern void FUN_020345f0(V3 *, void *);
extern void FUN_02036348(V3 *, void *, V3 *);
extern int FUN_0205c86c(void *);
extern int FUN_0203bee0(void *);
extern int FUN_0200a3a0(int, int);
int FUN_02098574(int *a, void *b, void *c) {
    char *r4 = FUN_0208555c(*a);
    if (r4 != 0) {
        V3 v1, v0;
        int r7, r5, r6;
        FUN_020345f0(&v0, r4 + 0x9c);
        FUN_02036348(&v1, b, &v0);
        r7 = FUN_0205c86c(&v1);
        r5 = FUN_0205c86c(c);
        r6 = FUN_0203bee0(r4);
        return FUN_0200a3a0(r7, r6 + r5);
    }
    return -1;
}
