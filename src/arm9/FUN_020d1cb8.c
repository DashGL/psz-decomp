// Verified 2026-11-13: full88-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
extern int *FUN_020d1f70(void *, int);
extern void *FUN_020d1f58(char *);
extern int FUN_020d1ec4(int);
extern int FUN_020d1ed4(double);
extern int FUN_020d1f0c(int *, int);
int FUN_020d1cb8(void *a, int b, void *c) {
    int *r4 = FUN_020d1f70(a, b);
    if (r4 == 0) {
        return 0;
    }
    if (r4[1] == 0) {
        int *p = (int *)FUN_020d1f58((char *)r4);
        return FUN_020d1f0c(r4, FUN_020d1ec4(*p - *(int *)c));
    }
    if (r4[1] == 1) {
        double *p = (double *)FUN_020d1f58((char *)r4);
        return FUN_020d1f0c(r4, FUN_020d1ed4(*p - *(double *)c));
    }
    return (int)FUN_020d1f58((char *)r4);
}
