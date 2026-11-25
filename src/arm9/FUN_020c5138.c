// FUN_020c5138 @ 0x020c5138 (0x20, thumb) - ported from FUN_020a62d8 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned char u8;

int FUN_020c5138(const u8 *p) {
    if (p[0] == 0x5a && p[1] == 0x50 && p[2] == 0x52 && p[3] == 0) {
        return 1;
    }
    return 0;
}
