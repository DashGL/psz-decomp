// FUN_020bc3c0 @ 0x020bc3c0 (0x56, thumb) - ported from FUN_020aa76c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020bc3c0 @ 0x020aa76c (0x56, Thumb) — MATCHED dsi/1.1.
 * Load archive payload from path unless state+4 is2. Obtain positive size throughaae5c.
 * Supplied buffer clears ownership+80 and installs pointer+70; otherwise allocate size
 * aligned32 throughaa988 and fail on null buffer. Read viaaaeb0 then initialize archive
 * viaaa888. Return initializer result. True extent56 excludes padding. Mini ROM
 * instructions and callee contracts are ground truth. 2026-10-14.
 */
typedef unsigned int u32;
extern int FUN_020ba288(u32);
extern void FUN_020bc578(u32, int, int), FUN_020ba2d4(u32, u32);
extern u32 FUN_020bc4dc(u32, u32);
u32 FUN_020bc3c0(u32 object, u32 path, u32 buffer) {
    int size;
    if (*(u32 *)(object + 4) == 2)
        return 0;
    size = FUN_020ba288(path);
    if (size <= 0)
        return 0;
    if (buffer) {
        *(u32 *)(object + 128) = 0;
        *(u32 *)(object + 112) = buffer;
    } else {
        FUN_020bc578(object, size, 32);
        if (!*(u32 *)(object + 112))
            return 0;
    }
    FUN_020ba2d4(path, *(u32 *)(object + 112));
    return FUN_020bc4dc(object, *(u32 *)(object + 112));
}
