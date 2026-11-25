// flags: -O4,s
extern signed char DAT_020f2fd8[];
extern unsigned char DAT_020f3010[][7];
unsigned int FUN_02084758(unsigned int a, unsigned int b, unsigned int c) {
    return DAT_020f3010[a][DAT_020f2fd8[c + b * 3]];
}
