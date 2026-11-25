// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets; argument/return contract corrected.
typedef int s32;
typedef signed char s8;

extern s32 FUN_0207f430(s8 *, s8 *);

s32 FUN_0207f45c(s8 *a, s8 *b) {
    if (FUN_0207f430(a, b) != 0 && *(s8 *)(b + 2) == *(s8 *)(a + 2)) {
        return 1;
    }
    return 0;
}
