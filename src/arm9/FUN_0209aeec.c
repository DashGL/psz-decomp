// flags: -O4,s
extern int *DAT_0211a61c;
int FUN_0209aeec(void) {
    int r = 0;
    if (DAT_0211a61c != 0 && *DAT_0211a61c == 3) {
        r = 1;
    }
    return r;
}
