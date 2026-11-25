// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    unsigned int sp0[8];
    unsigned int sp20[5];
} Frame_dd5e0;
extern void FUN_02068658(unsigned int *);
extern void FUN_020eae44(unsigned int *);
extern void FUN_020dd20c(void *, unsigned int, unsigned int);
extern void FUN_020dd224(void *, unsigned int);
extern void FUN_020dd2e0(void *, int);
void FUN_020dd5e0(void *a) {
    Frame_dd5e0 f;
    FUN_02068658(f.sp0);
    unsigned int i = 1;
    unsigned int *p = &f.sp0[1];
    do {
        unsigned int v = *p ^ *(p - 1);
        i++;
        *p++ = v;
    } while (i < 8);
    unsigned long long r4 = f.sp0[7];
    FUN_020eae44(f.sp20);
    if (f.sp20[4] != 0) {
        FUN_020dd20c(a, f.sp20[0], f.sp20[1]);
    } else {
        FUN_020dd20c(a, f.sp20[2], f.sp20[3]);
    }
    FUN_020dd224(a, (unsigned int)((r4 * 0x5d588b656c078965ULL + 1) >> 32));
    FUN_020dd2e0(a, 1);
}
