// FUN_020469d4 @ 0x020469d4 (0x8, thumb) - ported from FUN_02070e54 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned short u16;
typedef unsigned int u32;

int FUN_020469d4(int a) {
    return *(u16 *)(*(u32 *)(a + 8) + 4) << 12;
}
