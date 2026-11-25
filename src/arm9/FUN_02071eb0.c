// flags: -O4,s
extern int FUN_020b8118(void *, int *, int *), FUN_02071c64(void *, void *, int);
extern void FUN_02071d0c(void *), FUN_02071be4(void *, void *, int), FUN_020c32b4(void *, int);
void FUN_02071eb0(char *s, char *input) {
    int x, y, d[4], position, i;
    short digits[4];
    if (*(int *)(input + 20) >= 30) return;
    x = 0;
    y = 0;
    if (FUN_020b8118(input + 4, &x, &y)) return;
    FUN_02071d0c(d);
    *(short *)d = 10;
    d[2] = (x - 15) << 12;
    d[3] = y << 12;
    if (d[3] >= 491520) d[3] = 491520;
    FUN_020c32b4(d, *(int *)(s + 640));
    position = 4;
    FUN_02071be4(s, digits, *(int *)(input + 16));
    for (i = 0; i < 4; i++) {
        if (digits[i] != -1) {
            *(short *)d = FUN_02071c64(s, input, digits[i]);
            ((short *)d)[1] = 0;
            d[2] = ((x - 15) << 12) + (position << 15);
            d[3] = y << 12;
            if (d[3] >= 491520) d[3] = 491520;
            ((short *)d)[2] = 0;
            FUN_020c32b4(d, *(int *)(s + 640));
            position++;
        }
    }
}
