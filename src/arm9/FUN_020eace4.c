// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020e9ebc(void *, int);
extern int FUN_020e9f4c(void *, int);

struct S20 {
    long long p0;
    long long p1;
    int c;
};

int FUN_020eace4(long long *p, int a) {
    struct S20 s;
    FUN_020e9ebc(&s, a);
    p[0] = p[1];
    p[1] = s.p1;
    if (FUN_020e9f4c(p, a) != 0) {
        return 1;
    }
    return 0;
}
