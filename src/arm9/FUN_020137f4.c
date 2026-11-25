// FUN_020137f4 @ 0x020137f4 (0x1c, arm) - ported from FUN_02018700 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef int s32;

void FUN_020137f4(s32 *base) {
    int i;
    for (i = 0; i < 3; i++) {
        base[i] = -1;
    }
}
