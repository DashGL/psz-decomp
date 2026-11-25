// FUN_overlay_12__0212f49c @ 0x0212f49c (0xa, thumb) - ported from FUN_0205912c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

int FUN_overlay_12__0212f49c(u32 obj) {
    return *(signed char *)(*(u32 *)(*(u32 *)(obj + 0x14)) + 0);
}
