// flags: -O4,s
extern void *FUN_02093c00(int);
extern const signed char *FUN_02093b2c(void *, unsigned int, unsigned int);
extern void FUN_020c3788(void *, const signed char *, int, int, int);
extern void FUN_020c38f0(void *, int);

static inline void draw_text(void *box, const signed char *text, int x, int y)
{
    if (text != 0) {
        FUN_020c3788(box, text, x, y, 2);
    } else {
        FUN_020c38f0(box, 0);
    }
}

void FUN_overlay_7__0211f680(char *self)
{
    void *a;
    void *b;

    *(int *)(self + 0x9c) = 1;
    *(int *)(self + 0xa4) = *(int *)(self + 0x9c);
    *(int *)(self + 8) = 2;
    *(int *)(self + 4) = 1;
    *(int *)(self + 12) = 0;

    a = FUN_02093c00(0);
    b = FUN_02093c00(1);
    if (a != 0 && b != 0) {
        draw_text(self + 0x14, 0, 0, 0);
        draw_text(self + 0x14, FUN_02093b2c(a, 5, 6), 0, 0);
        draw_text(self + 0x50, 0, 0, 0);
        draw_text(self + 0x50, FUN_02093b2c(a, 6, 2), 100, 0);
        draw_text(self + 0x50, FUN_02093b2c(b, 2, 0), 100, 41);
        draw_text(self + 0x50, FUN_02093b2c(b, 2, 1), 100, 51);
    }
}
