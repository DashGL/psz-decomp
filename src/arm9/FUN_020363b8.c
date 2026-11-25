// FUN_020363b8 @ 0x020363b8 (0xa, thumb) - ported from FUN_0205912c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

int FUN_020363b8(u32 obj) {
    return *(signed char *)(*(u32 *)(*(u32 *)(obj + 0x14)) + 2);
}
