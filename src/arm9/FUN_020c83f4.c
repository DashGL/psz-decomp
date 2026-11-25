// Verified 2026-11-13: full96-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
} S_c83f4;
typedef struct {
    int f0;
    unsigned short f4;
    int f8;
} Arg_c83f4;
extern S_c83f4 *FUN_020c7e54(void);
extern int FUN_020c6f30(int, Arg_c83f4 *, void *, int, int);
extern void FUN_020c7e84(void);
extern S_c83f4 *FUN_020c6e10(int, int);
extern int FUN_020d3714(int);
int FUN_020c83f4(int a, unsigned short b, int *c) {
    Arg_c83f4 sp4;
    int index;
    S_c83f4 *r4 = FUN_020c7e54();
    if (r4->fc == 0) {
        *c = 3;
        return 0xb;
    }
    sp4.f0 = a;
    sp4.f4 = b;
    if ((index = FUN_020c6f30(r4->f4, &sp4, (void *)FUN_020c7e84, 0, 0)) == -1) {
        *c = 3;
        return 0;
    }
    *c = FUN_020d3714(FUN_020c6e10(r4->f4, index)->f8);
    return 0;
}
