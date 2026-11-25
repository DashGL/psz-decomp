// flags: -O4,s
extern int DAT_0211a448[4][5];
int FUN_0207a3ac(int bank, int slot) {
    int result = -1;
    if (bank >= 0 && bank <= 3 && slot < 5) result = DAT_0211a448[bank][slot];
    return result;
}
