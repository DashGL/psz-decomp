// FUN_02069538 @ 0x02069538 (0x20, arm) - ported from FUN_02030714 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);

int FUN_02069538(void *a0) {
    return FUN_020698e8(3, a0, 0, 0, 0);
}
