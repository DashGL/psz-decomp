// FUN_02033e0c @ 0x02033e0c (0x42, thumb) - ported from FUN_020a5090 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02033e0c @ 0x020a5090 (0x42, Thumb) — MATCHED dsi/1.1.
 * Resolve two keys through manager lookup 02033cbc. If object and
 * first result exist, dispatch first byte+0x12 and word+0xc through
 * 020423a0; fourth input is second word+0xc or zero. Both lookups
 * happen before the guards. True extent excludes final padding.
 * Evidence: Mini saved-ROM Ghidra instructions and extracted ROM.
 * 2026-10-14 full match.py word and relocation verification pass.
 */
typedef unsigned int u32;
extern u32 FUN_02033cbc(u32, u32);
extern void FUN_020423a0(u32, u32, u32, u32);
void FUN_02033e0c(u32 manager, u32 object, u32 key1, u32 key2) {
    u32 first = FUN_02033cbc(manager, key1);
    u32 second = FUN_02033cbc(manager, key2);
    if (object && first) {
        if (second) {
            FUN_020423a0(object, *(unsigned char *)(first + 0x12), *(u32 *)(first + 12),
                         *(u32 *)(second + 12));
            return;
        }
        FUN_020423a0(object, *(unsigned char *)(first + 0x12), *(u32 *)(first + 12), 0);
    }
}
