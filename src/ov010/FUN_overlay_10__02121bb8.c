// flags: -O4,s
extern void FUN_020c38f0(void *, int), FUN_020c3864(void *, const unsigned short *, int, int, int), FUN_020c3788(void *, const void *, int, int, int), FUN_overlay_10__02121d64(void *, unsigned short *, const char *);
extern const unsigned short *FUN_020c0788(void);
extern void *FUN_02093c00(int), *FUN_02093b2c(void *, int, int);
extern int FUN_020c0c78(char *);

void FUN_overlay_10__02121bb8(char *self)
{
    char digits[13];
    unsigned short text[17];
    void *bank;
    unsigned empty;
    FUN_020c38f0(self + 12, 0);
    FUN_020c38f0(self + 72, 0);
    *(unsigned *)(self + 132) |= 1;
    empty = (*FUN_020c0788() == 0);
    if (!empty) FUN_020c3864(self + 12, FUN_020c0788(), 100, 0, 2);
    else {
        bank = FUN_02093c00(0);
        if (bank) FUN_020c3788(self + 12, FUN_02093b2c(bank, 6, 0), 0, 0, 2);
    }
    if (FUN_020c0c78(digits)) {
        FUN_overlay_10__02121d64(self, text, digits);
        FUN_020c3864(self + 72, text, 100, 0, 2);
        *(unsigned *)(self + 132) |= 2;
    } else {
        bank = FUN_02093c00(0);
        if (bank) FUN_020c3788(self + 72, FUN_02093b2c(bank, 6, 1), 100, 0, 2);
        *(unsigned *)(self + 132) &= ~2u;
    }
}
