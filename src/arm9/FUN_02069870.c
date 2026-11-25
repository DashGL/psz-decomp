// FUN_02069870 @ 0x02069870 (0x28, arm) - ported from FUN_02030734 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_02069870(void *a0, void *b0, void *c0, int d0) {
    return FUN_020698e8(25, a0, b0, (int)c0, d0);
}
