// flags: -O4,s
extern unsigned int DAT_0211a3d4[];
int FUN_02078cec(int index, int bit) {
    if (bit >= 0 && bit < 6 && index >= 0 && index < 4) {
        unsigned int w = DAT_0211a3d4[index];
        return (w & (1u << bit)) ? 1 : 0;
    }
    return 0;
}
