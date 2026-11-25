// flags: -O4,s
extern unsigned int DAT_0211a498[4][5];
unsigned int FUN_0207a3d0(int bank, int slot) {
    unsigned int result = 0;
    if (bank >= 0 && bank <= 3 && slot < 5) result = DAT_0211a498[bank][slot];
    return result;
}
