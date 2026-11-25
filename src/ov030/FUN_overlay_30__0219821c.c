// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern int FUN_overlay_30__02198544(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_30__0219821c(int *self) {
    void *owner = (void *)self[1];
    unsigned long long n;
    if (FUN_overlay_30__02198544(owner) == 1) {
        self[4] = 1;
        FUN_02040c0c(owner, 0, 3, 4096, 0);
    } else {
        self[4] = 0;
        FUN_02040c0c(owner, 0, 2, 4096, 0);
    }
    n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    self[3] = ((unsigned int)(((n >> 32) * 21ull) >> 32) + 130) << 12;
}
