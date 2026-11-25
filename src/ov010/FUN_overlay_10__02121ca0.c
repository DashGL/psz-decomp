// flags: -O4,s
extern void FUN_020c38f0(void *, int), FUN_020c3864(void *, const unsigned short *, int, int, int), FUN_overlay_10__02121d64(void *, unsigned short *, const char *);
extern unsigned FUN_020dd468(char *, unsigned long long);
extern void *FUN_020c1154(int), *FUN_02093c00(int);

void FUN_overlay_10__02121ca0(char *self, int index)
{
    char digits[13];
    unsigned short text[17];
    char *record;
    int present;
    FUN_020c38f0(self + 12, 0);
    FUN_020c38f0(self + 72, 0);
    *(unsigned *)(self + 132) &= ~1u;
    present = 0;
    record = (char *)FUN_020c1154(index);
    if (record) {
        unsigned empty = (*(unsigned short *)(record + 16) == 0);
        if (!empty) FUN_020c3864(self + 12, (unsigned short *)(record + 16), 100, 0, 2);
        if (*(unsigned long long *)(record + 8) != 0) {
            FUN_020dd468(digits, *(unsigned long long *)(record + 8));
            FUN_overlay_10__02121d64(self, text, digits);
            FUN_020c3864(self + 72, text, 100, 0, 2);
            present = 1;
            *(unsigned *)(self + 132) |= 2;
        }
    }
    if (FUN_02093c00(0) && !present) *(unsigned *)(self + 132) &= ~2u;
}
