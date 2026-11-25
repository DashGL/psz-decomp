// flags: -O4,s
extern int FUN_020b8118(void *, int *, int *), FUN_02071c64(void *, void *, int);
extern void FUN_02071d0c(void *), FUN_02071be4(void *, void *, int), FUN_020c32b4(void *, int);

void FUN_02072020(char *s, char *input) {
    int d[4];
    int x = 0, y = 0;
    short digits[4];
    int i, position, offset;
    if (FUN_020b8118(input + 4, &x, &y)) return;
    FUN_02071d0c(d);
    FUN_02071be4(s, digits, *(int *)(input + 16));
    position = 0;
    offset = 0;
    for (i = 0; i < 4; i++) {
        if (digits[i] != -1) {
            offset = *(short *)(input + 26);
            *(short *)d = FUN_02071c64(s, input, digits[i]);
            d[2] = ((*(volatile int *)&x - 15) + 15 * position) << 12;
            d[3] = (y + offset) << 12;
            if (d[3] >= 491520) d[3] = 491520;
            FUN_020c32b4(d, *(int *)(s + 640));
            position++;
        }
    }
    *(short *)d = 65;
    d[2] = (x - 15 + 16 * position) << 12;
    d[3] = (y + offset) << 12;
    if (d[3] >= 491520) d[3] = 491520;
    FUN_020c32b4(d, *(int *)(s + 640));
}
