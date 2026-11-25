// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0;
    int f4;
} G_675d0;
extern G_675d0 DAT_021183f8;
extern int FUN_02067664(int);
extern void FUN_020677f0(int, int);
extern int FUN_02067748(int);
extern void FUN_02067804(int, int);
extern int FUN_02066ef4(void);
extern void FUN_02067abc(int);
extern void FUN_02067ac4(int);
void FUN_020675d0(void) {
    FUN_020677f0(2, FUN_02067664(2));
    FUN_02067804(2, FUN_02067748(2));
    if (DAT_021183f8.f4 == 0 || (FUN_02066ef4() & 3) == 1) {
        FUN_02067abc(0x0200002b);
        FUN_02067ac4(0x023e0021);
    }
}
