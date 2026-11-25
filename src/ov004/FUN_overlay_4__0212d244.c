// flags: -O4,s
extern void FUN_020c331c(int, int, int, int);
void FUN_overlay_4__0212d244(int *self) {
    int i, y = 0x109000, n;
    for (i = 0; i < self[26]; i++, y += 0x17000) {
        int j;
        int x = 0x88000;
        FUN_020c331c(5, self[20 + i] * 0x1a000 + 0x88000, y, self[0]);
        for (j = 0; j < 3; j++, x += 0x1a000) {
            FUN_020c331c(4, x, y, self[0]);
        }
    }
    n = self[18];
    if (n == 3)
        FUN_020c331c(6, 0x33000, 0x14a000, self[0]);
    else
        FUN_020c331c(3, 0x11000, (n * 23 + 261) << 12, self[0]);
}
