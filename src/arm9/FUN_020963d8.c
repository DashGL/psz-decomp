// flags: -O4,s
extern int DAT_0211a5d8[];
int FUN_020963d8(void) {
    int *p = DAT_0211a5d8;
    if (!p[8] && !p[7] && !p[6] && !p[5] && !p[9] && !p[3] && !p[2] && !p[4] && !p[0] && !p[1]) return 0;
    return 1;
}
