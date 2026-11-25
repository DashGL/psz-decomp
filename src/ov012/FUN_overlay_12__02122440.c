// flags: -O4,s
extern volatile int DAT_0213ec9c[];
extern int DAT_0213ecb4[];
extern void FUN_020c193c(int, int, int, int, int);

void FUN_overlay_12__02122440(signed char *p, int wrap) {
    int i;
    int old = p[4];
    int category = old >= DAT_0213ec9c[1];
    int found = 0;
    for (i = 0; i < 4; i++) {
        p[4]--;
        if (p[4] < 0) {
            p[4] = wrap;
            found = 1;
            break;
        }
        if (DAT_0213ecb4[p[4] * 2 + 1]) {
            found = 1;
            break;
        }
    }
    if (!found) {
        p[4] = old;
    }
    if (old != p[4]) {
        int now = p[4] >= DAT_0213ec9c[1];
        if (category != now || category != 1) {
            FUN_020c193c(0, 2, 0, 0, -1);
        }
    }
}
