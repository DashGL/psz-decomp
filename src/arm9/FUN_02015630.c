// flags: -O4,p -noThumb
extern unsigned int FUN_020155f8(int, int, unsigned int *, unsigned int);
unsigned int FUN_02015630(int bg, unsigned int *pPlt, unsigned short *pScn, unsigned int mode) {
    unsigned short fmt = pScn[3];
    if (fmt == 0 && pScn[2] == 1) {
        int x;
        if (bg <= 3) x = (*(volatile unsigned int *)0x04000000 & 0x40000000) != 0;
        else x = (*(volatile unsigned int *)0x04001000 & 0x40000000) != 0;
        return FUN_020155f8(bg, x, pPlt, mode);
    } else {
        return FUN_020155f8(bg, (pPlt[0] != 3 && fmt != 1), pPlt, mode);
    }
}
