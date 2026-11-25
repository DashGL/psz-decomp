// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-runtime-small-review.md
struct S_020e95c0 {
    char pad[0x15];
    unsigned char f15;
    char pad2[0x17d - 0x16];
    unsigned char f17d;
};
extern struct S_020e95c0 *FUN_020e961c(void);
extern void FUN_020e4a2c(int, int);

int FUN_020e95c0(int a) {
    if (a != 0) {
        return 1;
    }
    if (FUN_020e961c()->f15 != 3) {
        FUN_020e961c()->f17d++;
    }
    if (FUN_020e961c()->f15 == 3 || FUN_020e961c()->f17d >= 5) {
        FUN_020e4a2c(6, -0x15194);
        return 0;
    }
    return 1;
}
