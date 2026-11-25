// FUN_020c3440 @ 0x020c3440 (0x50, thumb) - ported from FUN_020a8320 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef short s16;

int FUN_020c3440(int param_1, int param_2, int *param_3) {
    s16 *s = (s16 *)(param_1 + 8);
    int dx = *(int *)(param_2 + 0x10) - param_3[0];
    int dy = *(int *)(param_2 + 0x14) - param_3[1];
    int sx2 = s[2] * 0x1000; int x2 = sx2 + dx;
    int sx1 = s[0] * 0x1000; int x1 = sx1 + dx;
    int sy2 = s[3] * 0x1000; int y2 = sy2 + dy;
    int sy1 = s[1] * 0x1000; int y1 = sy1 + dy;
    if (0 < y1 && y2 < param_3[3] && 0 < x1 && x2 < param_3[2]) {
        return 1;
    }
    return 0;
}
