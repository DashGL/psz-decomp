// flags: -O4,p -noThumb
extern unsigned int DAT_020ebfe4[][4];
unsigned int FUN_0201702c(unsigned char *p) {
    return DAT_020ebfe4[p[1]][p[0]];
}
