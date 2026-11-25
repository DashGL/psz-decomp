// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_02000b9c(void *);
extern void FUN_02000c34(void);
extern int FUN_020ea6cc(void *);
extern int FUN_020eae84(void);
extern void FUN_020eacb4(void *);
extern void FUN_020c7bb8(const void *, const void *, const void *, const void *);
extern const unsigned char D_020e0651[];
extern const unsigned char D_020e0671[];
extern const unsigned char D_020e065d[];
extern const unsigned char D_020e0681[];
int FUN_020dd154(void *a) {
    int r4 = 0;
    int r6;
    FUN_02000b9c((void *)FUN_02000c34);
    r6 = FUN_020ea6cc(a);
    if (FUN_020eae84() != 0) {
        FUN_020eacb4(a);
        r4 = 1;
    }
    if (r6 < 0) {
        if (r4 != 0) {
            r4 = 2;
        } else {
            r4 = 3;
        }
    } else {
        if (r4 != 0) {
            r4 = 1;
        } else {
            r4 = 0;
        }
    }
    FUN_020c7bb8(D_020e0651, D_020e0671, D_020e065d, D_020e0681);
    return r4;
}
