// FUN_02013438 @ 0x02013438 (0x1c, arm) - ported from FUN_02018700 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef int s32;

void FUN_02013438(s32 *base) {
    int i;
    for (i = 0; i < 3; i++) {
        base[i] = -1;
    }
}
