// flags: -O4,s
void FUN_overlay_12__0211f880(int *p) {
    if (p[2] >= p[0]) p[2] = p[0] - 1;
    if (p[2] - p[3] >= p[1]) {
        p[3] = p[2] - (p[1] - 1);
    } else if (p[2] - p[3] < 0) {
        p[3] = p[2];
    } else if (p[3] < 0) {
        p[3] = p[1] - 1;
    }
    if (!p[0]) {
        p[2] = 0;
        p[3] = 0;
    }
}
