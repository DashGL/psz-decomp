// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4a, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x4a, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-runtime-review-2026-11-12.md
extern int FUN_020ce8dc(void *, int *);
extern int FUN_020ceae0(void *, int *);
extern int FUN_020cecd0(void *, int *);
extern void FUN_020ceef4(void *, int *);

int FUN_020cef64(void *a, int *b) {
    int t = b[0];
    int r = 0;
    if (t == 0x64) {
        return 3;
    }
    if (t != 0x69) {
        if (b[1] != 0) {
            r = FUN_020ce8dc(a, b);
        } else {
            r = FUN_020ceae0(a, b);
        }
    }
    if (r == 0 && b[0] == 0x69) {
        r = FUN_020cecd0(a, b);
        FUN_020ceef4(a, b);
    }
    return r;
}
