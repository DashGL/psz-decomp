// flags: -O4,s
extern int DAT_020f3e84[];
extern int FUN_0208b09c(void *, void *), FUN_020848e0(int, int);
extern void FUN_020c331c(int, int, int, int), FUN_020c3788(void *, void *, int, int, int), FUN_02079160(void *, void *, int, int, int, int, int, int, int);
extern void *FUN_0209e1a8(int, int), *FUN_02079114(void);
void FUN_0208af0c(int *s, char *entry) {
    int index = FUN_0208b09c(s, entry), pair[2], value;
    void *p, *renderer;
    FUN_020c331c(63, 0xb0000, 0xfb000, s[8]);
    if (!s[14]) {
        p = FUN_0209e1a8((unsigned char)(entry + index)[2], 0);
        if (p) {
            FUN_020c3788((void *)s[12], p, 0, 12, 2);
            s[14] = 1;
        }
    }
    FUN_020c331c(33, 0xe0000, 0x113000, s[8]);
    renderer = FUN_02079114();
    if (renderer) {
        char *e = entry + index;
        pair[0] = DAT_020f3e84[7];
        pair[1] = DAT_020f3e84[8];
        value = FUN_020848e0((unsigned char)e[2], ((signed char *)e)[5]);
        FUN_02079160(renderer, pair, 2, 1, value, -1, -1, 8, 0);
    }
}
