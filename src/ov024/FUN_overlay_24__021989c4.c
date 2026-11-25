// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_24__021989c4(int *p) {
    unsigned long long next;
    FUN_02040c0c((void *)p[1], 0, 1, 4096, 0);
    next = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
    DAT_0211c844[0] = next;
    p[3] = ((unsigned int)(((next >> 32) * 21ull) >> 32) + 60) << 12;
}
