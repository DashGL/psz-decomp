// flags: -O4,s
extern int DAT_020f2ce0[6][5];
int FUN_0207f7a4(void *unused, int b, int c) {
    if (c <= 0 || c > 5) return 0xbb8000;
    if (b < 0 || b >= 6) return 0xbb8000;
    return DAT_020f2ce0[b][c - 1];
}
