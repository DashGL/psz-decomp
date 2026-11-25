// flags: -O4,s
void FUN_overlay_17__0211ea68(int **p, int x, int y)
{
    int *m = p[225];
    long long lx = x, ly = y;
    m[4] += (int)((lx * m[0] + ly * m[2]) >> 12);
    m[5] += (int)((lx * m[1] + ly * m[3]) >> 12);
}
