// FUN_020696dc @ 0x020696dc (0x40, arm) - ported from FUN_020308e4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern int FUN_020698e8(int id, void *a, void *b, int z0, int z1);
extern u32 FUN_0206a0ec(u32 idx, u32 v1, u32 v2);

int FUN_020696dc(void *a0, void *b0, void *c0, int d0, u32 e0) {
    return FUN_020698e8(18, a0, b0, (int)c0, (int)FUN_0206a0ec((u32)a0, (u32)d0, e0));
}
