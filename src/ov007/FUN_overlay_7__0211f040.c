// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3864(void *, const unsigned short *, int, int, unsigned int);
extern void FUN_overlay_7__0211f0c8(void *, unsigned short *, const signed char *);
extern void FUN_02093c00(int);
extern char *FUN_overlay_7__0211e670(int);
extern unsigned int FUN_020dd468(char *, unsigned long long);
enum { E0 = 0, E1 = 1 };

void FUN_overlay_7__0211f040(char *self, int id) {
    char text[13];
    unsigned short output[17];
    char *p;
    FUN_020c38f0(self + 8, 0);
    FUN_020c38f0(self + 68, 0);
    p = FUN_overlay_7__0211e670(id);
    if (p) {
        if (((*(unsigned short *)(p + 16) == 0) ? E1 : E0) == 0) {
            FUN_020c3864(self + 8, (unsigned short *)(p + 16), 100, 0, 2);
        }
        {
            unsigned long long val = *(unsigned long long *)(p + 8);
            if (val != 0ULL) {
                FUN_020dd468(text, val);
                FUN_overlay_7__0211f0c8(self, output, (signed char *)text);
                FUN_020c3864(self + 68, output, 100, 0, 2);
            }
        }
    }
    FUN_02093c00(0);
}
