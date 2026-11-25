// flags: -O4,s
extern int DAT_020f46b8[5][3];
extern int DAT_020fc988;
void FUN_02099d44(int *out, void *unused, int c, int d) {
    if (c >= 0 && c < 5 && d >= 0 && d < 3) {
        *out = DAT_020f46b8[c][d];
    } else {
        *out = DAT_020fc988;
    }
}
