// FUN_02066a2c @ 0x02066a2c (0x68, arm) - ported from FUN_0202d02c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02066a2c @ 0x0202d02c (true 0x68, recorded 0x68, ARM) — live
 * game-side list teardown. Doubled guard: outer if(*list) holds [redundant
 * inner if(*list){ drain loop } + tail/head clears (+ cbbc)], token release
 * outside. Void return (pop carries caller's r0 convention).
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32 tok);
extern u32 *FUN_02066378(u32 *list);
extern void FUN_020664d8(void);

void FUN_02066a2c(u32 *list)
{
    u32 tok = FUN_020683d4();

    if (*list != 0) {
        if (*list != 0) {
            do {
                u32 *node = FUN_02066378(list);
                *(u32 *)((u8 *)node + 0x64) = 1;
                *(u32 *)((u8 *)node + 0x78) = 0;
                *(u32 *)((u8 *)node + 0x80) = 0;
                *(u32 *)((u8 *)node + 0x7c) = 0;
            } while (*list != 0);
        }
        list[1] = 0;
        list[0] = 0;
        FUN_020664d8();
    }
    FUN_020683e8(tok);
}
