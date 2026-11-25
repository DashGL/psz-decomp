// flags: -O4,s
extern int FUN_overlay_22__021a05a8(void *, signed char *, signed char *);
extern int FUN_overlay_22__0219a624(int, int, int, int);

int FUN_overlay_22__0219a87c(int *self, signed char *outX, signed char *outY, int minimum) {
    int x = (signed char)((self[4] + 2048) / 4096);
    int y = (signed char)((self[6] + 2048) / 4096);
    signed char randomX = 0, randomY = 0;
    int i;
    for (i = 0; i < 4; i++) {
        if (FUN_overlay_22__021a05a8((void *)self[2], &randomX, &randomY) == 1 &&
            FUN_overlay_22__0219a624(x, y, randomX, randomY) >= minimum) {
            break;
        }
    }
    *outX = randomX;
    *outY = randomY;
    return 1;
}
