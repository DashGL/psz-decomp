// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern char DAT_02101858[];
extern char DAT_02101864[];
extern char DAT_0210179c[];
extern char DAT_021017a8[];
extern char DAT_021017b4[];
extern char DAT_02101794[];
extern int FUN_020d81b0(void *, const char *, int);

int FUN_020e8444(void *r4) {
    if (FUN_020d81b0(r4, DAT_02101858, -1) == -1) {
        return 0;
    }
    if (FUN_020d81b0(r4, DAT_02101864, -1) == -1) {
        return 0;
    }
    if (FUN_020d81b0(r4, DAT_0210179c, -1) == -1) {
        return 0;
    }
    if (FUN_020d81b0(r4, DAT_021017a8, -1) == -1) {
        if (FUN_020d81b0(r4, DAT_021017a8, 0) == 0) {
            return 0;
        }
    }
    if (FUN_020d81b0(r4, DAT_021017b4, -1) == -1) {
        return 0;
    }
    return FUN_020d81b0(r4, DAT_02101794, 0);
}
