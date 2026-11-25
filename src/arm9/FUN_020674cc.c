// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x104, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02067664(int);
extern void FUN_020677f0(int, int);
extern int FUN_02067748(int);
extern void FUN_02067804(int, int);
extern int DAT_021183f8;

void FUN_020674cc(void) {
    if (DAT_021183f8 != 0) {
        return;
    }
    DAT_021183f8 = 1;
    FUN_020677f0(0, FUN_02067664(0));
    FUN_02067804(0, FUN_02067748(0));
    FUN_02067804(2, 0);
    FUN_020677f0(2, 0);
    FUN_020677f0(3, FUN_02067664(3));
    FUN_02067804(3, FUN_02067748(3));
    FUN_020677f0(4, FUN_02067664(4));
    FUN_02067804(4, FUN_02067748(4));
    FUN_020677f0(5, FUN_02067664(5));
    FUN_02067804(5, FUN_02067748(5));
    FUN_020677f0(6, FUN_02067664(6));
    FUN_02067804(6, FUN_02067748(6));
}
