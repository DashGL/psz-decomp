// flags: -O4,s
typedef struct { int pad[3]; unsigned char *g; } State;
extern State DAT_0211de50;
unsigned int FUN_020e28e8(unsigned int unused0, unsigned int unused1, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e, unsigned int f) {
    unsigned char *p;
    unsigned int n;
    *(unsigned int *)(DAT_0211de50.g + 44) = a;
    *(unsigned int *)(DAT_0211de50.g + 48) = b;
    *(unsigned int *)(DAT_0211de50.g + 52) = c;
    *(unsigned int *)(DAT_0211de50.g + 56) = d;
    *(unsigned int *)(DAT_0211de50.g + 60) = e;
    *(unsigned int *)(DAT_0211de50.g + 64) = f;
    DAT_0211de50.g[29] = 0;
    DAT_0211de50.g[30] = 0;
    DAT_0211de50.g[31] = 0;
    DAT_0211de50.g[28] = 0;
    *(unsigned int *)DAT_0211de50.g = 1;
    p = DAT_0211de50.g;
    if (!*(unsigned int *)(p + 24)) p[31]++;
    p = DAT_0211de50.g;
    n = p[31] + 1;
    p[31] = n;
    return n;
}
