// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_25__02198224(int *p) {
    int *parent = (int *)p[2];
    unsigned long long n;
    FUN_02040c0c((void *)p[1], 0, 1, 4096, 0);
    n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    p[3] = ((unsigned int)(((n >> 32) * 41ull) >> 32) + 30) << 12;
    parent[18] = 2;
}
