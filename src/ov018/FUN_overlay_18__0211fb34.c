// flags: -O4,s
void FUN_overlay_18__0211fb34(int **p, int a, int b) {
    int *v = p[225];
    long long la = a, lb = b;
    int r0 = (int)((lb * v[0] + la * v[2]) >> 12);
    int r1 = (int)((lb * v[1] + la * v[3]) >> 12);
    int r2 = (int)((lb * v[2] - la * v[0]) >> 12);
    int r3 = (int)((lb * v[3] - la * v[1]) >> 12);
    v[0] = r0; v[1] = r1; v[2] = r2; v[3] = r3;
    r0 = (int)((lb * v[6] + la * v[8]) >> 12);
    r1 = (int)((lb * v[7] + la * v[9]) >> 12);
    r2 = (int)((lb * v[8] - la * v[6]) >> 12);
    r3 = (int)((lb * v[9] - la * v[7]) >> 12);
    v[6] = r0; v[7] = r1; v[8] = r2; v[9] = r3;
}
