// flags: -O4,s
typedef struct { unsigned short h[8]; } Icons;
typedef struct { unsigned short h[3]; int x, y; } Draw;
extern Icons DAT_020f41fc, DAT_020f41ec;
extern void *DAT_02108d04;
extern void *FUN_02077f3c(void);
extern int FUN_02077fec(void *), FUN_0203ae60(void *), FUN_0203b674(void *);
extern void FUN_020c331c(int, int, int, int), FUN_02071d0c(Draw *), FUN_020c32b4(Draw *, int);
#define W(n) (*(int *)(s + (n)))
void FUN_0208bddc(char *s) {
    Icons normal, low;
    Draw draw;
    void *actor;
    int current, amount, full, part, old, x, i, handle, lowFull, normalFull;
    if (W(40) > 9999) W(40) = 9999;
    if (W(44) > W(40)) W(44) = W(40);
    current = W(44);
    amount = (((10000 * current) / W(40)) * 48) / 10000;
    old = W(72);
    if (old >= 0) {
        if (amount < old - 2) { amount = old - 2; if (amount < 0) amount = 0; }
        if (amount > old + 3) { amount = old + 3; if (amount > 48) amount = 48; }
    }
    full = amount / 8;
    part = amount % 8;
    if (!full && !part && current > 0) part = 1;
    actor = DAT_02108d04;
    if (actor) {
        if (FUN_0203ae60(actor) == 1) W(76) = 1;
        else W(76) = 2;
    }
    if (W(76) != 1) {
        if (amount < 15) W(76) = 0;
        else W(76) = 2;
    }
    if (actor && !FUN_0203b674(actor)) {
        x = 0x15000;
        for (i = 0; i < 6; i++) {
            FUN_020c331c(105, x, 0xda000, FUN_02077fec(FUN_02077f3c()));
            x += 0x8000;
        }
        return;
    }
    normal = DAT_020f41fc;
    low = DAT_020f41ec;
    handle = FUN_02077fec(FUN_02077f3c());
    FUN_02071d0c(&draw);
    draw.x = 0x15000;
    draw.y = 0xda000;
    lowFull = low.h[7];
    normalFull = normal.h[7];
    for (i = 0; i < full; i++) {
        draw.h[0] = W(76) == 0 ? lowFull : normalFull;
        FUN_020c32b4(&draw, handle);
        draw.x += 0x8000;
    }
    if (part) {
        draw.h[0] = W(76) == 0 ? low.h[part - 1] : normal.h[part - 1];
        FUN_020c32b4(&draw, handle);
    }
    W(72) = amount;
}
