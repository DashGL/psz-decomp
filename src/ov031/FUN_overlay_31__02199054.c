// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_31__02199054(int *p) {
    int *c = (int *)p[1];
    unsigned long long n;
    FUN_02040c0c(c, c[56], 0, 4096, 0);
    n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    p[3] = ((unsigned int)(((n >> 32) * 36ull) >> 32) + 25) << 12;
}
