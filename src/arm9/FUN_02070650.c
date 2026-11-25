// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned short a;
    unsigned short b;
} Pair16;

extern int FUN_0203bf3c(void *);
extern void FUN_0206f558(void *);
extern void FUN_02034680(void *, void *);
extern void *FUN_020718e0(void);
extern void FUN_020719d8(void *, void *);
extern void FUN_0204a88c(int, int, int, int, int);
extern void FUN_02050018(int, void (*)(void *, int), void *, int);
extern void FUN_02070760(void *, int);

void FUN_02070650(char *s) {
    Vec3 pos;
    int d[8];
    unsigned short *cur;
    Pair16 *prev;
    int amount;
    int type;

    cur = (unsigned short *)(s + 0x50);
    prev = (Pair16 *)(s + 0x14e);
    pos = *(Vec3 *)(s + 0x9c);
    pos.y = 4096;
    amount = 0;
    type = 1;
    if (prev->a < cur[6]) {
        amount = cur[6] - prev->a;
    } else if (prev->b < cur[7]) {
        amount = cur[7] - prev->b;
        type = 9;
    }
    if (FUN_0203bf3c(s)) {
        FUN_0206f558(d);
        d[5] = 10;
        d[0] = type;
        d[4] = amount;
        FUN_02034680(&d[1], &pos);
        FUN_020719d8(FUN_020718e0(), d);
    }
    prev->a = cur[6];
    prev->b = cur[7];
    FUN_0204a88c(1, 17, -1, 0, 0);
    FUN_02050018(10, FUN_02070760, s, 0);
}
