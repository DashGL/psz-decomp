// flags: -O4,s
extern const int DAT_020ed0a4[4][7];
extern const int DAT_020ed048[];
void FUN_020376d4(void *unused, int a, int b, int *type, int *id) {
    *type = -1;
    *id = -1;
    if (b >= 0 && b <= 6) {
        if (a >= 0 && a < 4) {
            *type = (b == 6) ? 3 : 2;
            *id = DAT_020ed0a4[a][b];
        }
    } else if (b >= 7 && b <= 11) {
        *type = (b == 11) ? 72 : 3;
        *id = *(DAT_020ed048 + (b - 7));
    }
}
