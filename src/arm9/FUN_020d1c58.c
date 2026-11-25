// Verified 2026-11-13: full96-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
} S_d1c58;
extern S_d1c58 *FUN_020d1f70(void *, int);
extern void *FUN_020d1f58(char *);
extern int FUN_020d1ec4(int);
extern int FUN_020d1ed4(double);
extern int FUN_020d1f0c(S_d1c58 *, int);
extern int FUN_020d1dc4(void *, int, void *);
int FUN_020d1c58(void *a, int b, void *c) {
    S_d1c58 *r4 = FUN_020d1f70(a, b);
    if (r4 == 0) {
        return 0;
    }
    if (r4->f4 == 0) {
        return FUN_020d1f0c(r4, FUN_020d1ec4(*(int *)c + *(int *)FUN_020d1f58((char *)r4)));
    }
    if (r4->f4 == 1) {
        return FUN_020d1f0c(r4, FUN_020d1ed4(*(double *)c + *(double *)FUN_020d1f58((char *)r4)));
    }
    return FUN_020d1dc4(a, b, c);
}
