// flags: -O4,p
extern const signed char DAT_020f5c64[];
void FUN_020c73ec(const unsigned char *source, char *dest) {
    unsigned int i = 0, j = 0;
    do {
        dest[j] = DAT_020f5c64[(int)source[i] / 16];
        dest[j + 1] = DAT_020f5c64[(int)source[i] % 16];
        i++;
        j += 2;
    } while (i < 16);
    dest[32] = 0;
}
