// FUN_020694f0 @ 0x020694f0 (0x20, arm) - ported from FUN_02030714 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_020694f0(void *a0) {
    return FUN_020698e8(1, a0, 0, 0, 0);
}
