// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern int DAT_020fc988;
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_27__0219936c(int *p) {
    unsigned long long n;
    FUN_02040c0c((void *)p[1], 0, 2, 4096, 0);
    n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = n;
    *(unsigned short *)(p + 3) = (unsigned short)(((n >> 32) * 0x10000ull) >> 32);
    p[5] = 0;
    p[4] = DAT_020fc988;
}
