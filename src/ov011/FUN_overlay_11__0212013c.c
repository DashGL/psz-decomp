// flags: -O4,s
void FUN_overlay_11__0212013c(int **p, int a, int b) {
    int *m = p[225];
    long long la = a, lb = b;
    int t0, t1, t2, t3;
    t0 = (int)((lb * m[0] + la * m[2]) >> 12);
    t1 = (int)((lb * m[1] + la * m[3]) >> 12);
    t2 = (int)((lb * m[2] - la * m[0]) >> 12);
    t3 = (int)((lb * m[3] - la * m[1]) >> 12);
    m[0] = t0; m[1] = t1; m[2] = t2; m[3] = t3;
    t0 = (int)((lb * m[6] + la * m[8]) >> 12);
    t1 = (int)((lb * m[7] + la * m[9]) >> 12);
    t2 = (int)((lb * m[8] - la * m[6]) >> 12);
    t3 = (int)((lb * m[9] - la * m[7]) >> 12);
    m[6] = t0; m[7] = t1; m[8] = t2; m[9] = t3;
}
