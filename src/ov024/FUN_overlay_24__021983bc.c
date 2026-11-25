// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_020445a8(void *, int, int);
void FUN_overlay_24__021983bc(int *p) {
    void *c = (void *)p[1];
    unsigned long long n;
    FUN_02040c0c(c, 0, 0, 4096, 0);
    FUN_020445a8(c, 0, 0);
    n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    p[3] = ((unsigned int)(((n >> 32) * 21ull) >> 32) + 10) << 12;
}
