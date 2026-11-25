// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -O4,p
extern const char DAT_020fe594[];
extern const char DAT_020fe59c[];
extern const char DAT_020fe5a4[];
extern const char DAT_020fe5b0[];
extern int FUN_02003f38(const char *, const char *, int);
extern int FUN_020d191c(const char *, const char *, char *, int);
extern int FUN_02005898(char *);
extern int FUN_02003fa8(const char *, const char *);
extern void FUN_020cb778(int *, int, int);

int FUN_020d1888(int *a, const char *b, int c) {
    char sp0[16];
    char *r4 = (char *)*a;
    if (FUN_02003f38(b, DAT_020fe594, 7) == 0) {
        if (FUN_020d191c(b, DAT_020fe59c, sp0, 16) != 0) {
            *(int *)(r4 + 0x5b8) = FUN_02005898(sp0);
        }
        if (FUN_020d191c(b, DAT_020fe5a4, r4, 0x100) == 0) {
            *r4 = 0;
        }
        if (c != 0) {
            FUN_020cb778(a, 4, (FUN_02003fa8(b, DAT_020fe5b0) != 0 ? 1 : 0) ? 1 : 0);
        }
        return 1;
    }
    return 0;
}
