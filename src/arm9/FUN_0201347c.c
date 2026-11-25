// FUN_0201347c @ 0x0201347c (0x20, arm) - ported from FUN_02018744 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef int s32;

void FUN_0201347c(s32 *base) {
    int i;
    for (i = 0; i < 3; i++) {
        base[i + 2] = -1;
    }
}
