// FUN_02099920 @ 0x02099920 (0x58, thumb) - ported from FUN_02041444 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_02099920 @ 0x02041444 (0x58, Thumb), verified dsi/1.1.
 * Rebuilds five 16-byte tagged name records for the game object. Releases the old array, allocates aligned storage, queries manager names using the selector getter chain, and copies each nonnull result.
 * 2026-10-15: unchanged recovered body matches with -O4,s; default -O4,p
 * caused the previously recorded compiler residual. Full words and relocations pass.
 * True extent checked against ROM return/pool boundaries; trailing inventory
 * padding is excluded when present. Gameplay has not been tested.
 */
typedef unsigned int u32;
extern void FUN_02099498(u32 *, u32), FUN_020c4470(void *, u32),
    FUN_020c44e4(u32, void *);
extern u32 FUN_020c13c8(u32, int, int), FUN_0208f068(void), FUN_02077930(void),
    FUN_02077da8(u32), FUN_0208efa8(u32, u32, int, unsigned);
void FUN_02099920(u32 *object) {
    unsigned char name[16];
    u32 manager, source;
    unsigned i;
    FUN_02099498(object, object[17]);
    object[17] = FUN_020c13c8(object[0], 80, 16);
    manager = FUN_0208f068();
    if (manager) {
        for (i = 0; i < 5; i++) {
            source = FUN_0208efa8(manager, FUN_02077da8(FUN_02077930()), 0, i);
            if (source) {
                FUN_020c4470(name, source);
                FUN_020c44e4(object[17] + i * 16, name);
            }
        }
    }
}
