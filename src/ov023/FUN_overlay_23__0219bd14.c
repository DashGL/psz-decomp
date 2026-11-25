// flags: -O4,s
extern unsigned long long DAT_0211c844[3];
unsigned int FUN_overlay_23__0219bd14(int *p) {
    int type = ***(signed char ***)((char *)p[1] + 20);
    unsigned long long n;
    switch (type) {
    case 58: return 0;
    case 59: return 1;
    case 60: return 2;
    case 57:
        n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        DAT_0211c844[0] = n;
        return (unsigned int)(((n >> 32) * 3ull) >> 32);
    default: return 0;
    }
}
