// FUN_02069830 @ 0x02069830 (0x20, arm) - ported from FUN_0203077c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_02069830(void *a0, void *b0) {
    return FUN_020698e8(32, a0, b0, 0, 0);
}
