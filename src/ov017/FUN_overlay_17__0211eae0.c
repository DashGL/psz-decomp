// flags: -O4,s
void FUN_overlay_17__0211eae0(int **p, int a, int b) {
    int *v = p[225];
    long long s = a;
    int r0, r1, r2, r3;
    r0 = (int)(((long long)b * v[0] + s * v[2]) >> 12);
    r1 = (int)(((long long)b * v[1] + s * v[3]) >> 12);
    r2 = (int)(((long long)b * v[2] - s * v[0]) >> 12);
    r3 = (int)(((long long)b * v[3] - s * v[1]) >> 12);
    v[0] = r0;
    v[1] = r1;
    v[2] = r2;
    v[3] = r3;
    r0 = (int)(((long long)b * v[6] + s * v[8]) >> 12);
    r1 = (int)(((long long)b * v[7] + s * v[9]) >> 12);
    r2 = (int)(((long long)b * v[8] - s * v[6]) >> 12);
    r3 = (int)(((long long)b * v[9] - s * v[7]) >> 12);
    v[6] = r0;
    v[7] = r1;
    v[8] = r2;
    v[9] = r3;
}
