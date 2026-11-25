// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { unsigned long long state, mul, inc; } Rng;
extern Rng UNK_0211c844;
extern const short UNK_020ed83c[];
extern void FUN_020b0d90(void *, void *), FUN_020426b8(void *), FUN_020b0ee0(void *, int, void *, int), FUN_020345f0(void *, void *), FUN_02090f74(void *, void *, void *, int), FUN_020c193c(int, int, int, int, int);
extern void *FUN_02090c20(void);
void FUN_020b179c(char *s) {
    int angle = (*(unsigned short *)(s + 88) >> 4) * 2;
    Vec zero, pos;
    short screen[2];
    *(int *)(s + 52) += (UNK_020ed83c[angle] * *(int *)(s + 96)) >> 12;
    *(int *)(s + 60) += (UNK_020ed83c[angle + 1] * *(int *)(s + 96)) >> 12;
    if (*(unsigned short *)(s + 116) > *(unsigned short *)(s + 122)) {
        zero.x = 0; zero.y = 0; zero.z = 0;
        FUN_020b0d90(s, &zero);
        *(int *)(s + 112) = 4;
        FUN_020426b8(*(void **)(s + 32));
        FUN_020b0ee0(s, 122, s + 76, 4096);
    } else {
        *(unsigned short *)(s + 88) += 512;
    }
    if (*(unsigned short *)(s + 116) % 4 == 0) {
        unsigned long long n = UNK_0211c844.mul * UNK_0211c844.state + UNK_0211c844.inc;
        UNK_0211c844.state = n;
        if ((unsigned int)(((n >> 32) * 3ULL) >> 32) == 0)
            FUN_020b0ee0(s, 140, s + 76, 4096);
    }
    if (*(unsigned short *)(s + 116) % 25 == 0) {
        FUN_020345f0(&pos, s + 52);
        FUN_02090f74(screen, FUN_02090c20(), &pos, 0);
        FUN_020c193c(59, 1, screen[0], screen[1], *(int *)(s + 44));
    }
    ++*(unsigned short *)(s + 116);
}