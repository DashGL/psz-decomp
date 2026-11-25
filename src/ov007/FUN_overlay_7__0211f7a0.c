// flags: -O4,s
extern void *FUN_02093c00(int);
extern const signed char *FUN_02093b2c(void *, unsigned int, unsigned int);
extern void FUN_020c3788(void *, const signed char *, int, int, int);
extern void FUN_020c38f0(void *, int);

static inline void set_label(void *panel, const signed char *text, int x, int y) {
    if (text != 0)
        FUN_020c3788(panel, text, x, y, 2);
    else
        FUN_020c38f0(panel, 0);
}
static inline const signed char *get_empty(void) { return 0; }

void FUN_overlay_7__0211f7a0(char *self) {
    void *a, *b;
    *(int *)(self + 0x9c) = 2;
    *(int *)(self + 0xa4) = *(int *)(self + 0x9c);
    *(int *)(self + 0x08) = 2;
    *(int *)(self + 0x04) = 0;
    *(int *)(self + 0x0c) = 0;
    a = FUN_02093c00(0);
    b = FUN_02093c00(1);
    if (!a || !b) return;
    set_label(self + 0x14, get_empty(), 0, 0);
    set_label(self + 0x14, FUN_02093b2c(a, 5, 7), 0, 0);
    set_label(self + 0x50, get_empty(), 0, 0);
    set_label(self + 0x50, FUN_02093b2c(a, 7, 0), 100, 0);
    set_label(self + 0x50, FUN_02093b2c(b, 2, 0), 100, 41);
    set_label(self + 0x50, FUN_02093b2c(b, 2, 1), 100, 51);
}
