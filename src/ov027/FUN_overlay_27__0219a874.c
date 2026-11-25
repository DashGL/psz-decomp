// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_27__0219a874(int *p) {
    unsigned long long next;
    FUN_02040c0c((void *)p[1], 0, 1, 4096, 0);
    next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = next;
    p[4] = ((unsigned int)(((next >> 32) * 30ull) >> 32) + 30) << 12;
    p[3] = 0;
}
