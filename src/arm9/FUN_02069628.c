// FUN_02069628 @ 0x02069628 (0x28, arm) - ported from FUN_020307cc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_02069628(void *a0, void *b0, void *c0) {
    return FUN_020698e8(9, a0, b0, (int)c0, 0);
}
