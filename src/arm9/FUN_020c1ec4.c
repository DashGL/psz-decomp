// flags: -O4,p
extern char *DAT_0211c85c;
extern int FUN_0200d940(void *, int, unsigned int), FUN_0200d968(int, unsigned int);
int FUN_020c1ec4(int index, unsigned int value) {
    int res = 0;
    if (index >= 0 && index < 16) res = FUN_0200d940(DAT_0211c85c + 0xb8, index, value);
    else if (index < 32) res = FUN_0200d968(index - 16, value);
    return res;
}
