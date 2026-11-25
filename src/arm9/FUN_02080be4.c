// flags: -O4,s
extern const unsigned char DAT_020f2e5c[];

void FUN_02080be4(unsigned char *src, unsigned char *dst) {
    int i, j;
    for (i = 0; i < 768; i++) {
        unsigned char input = *src;
        src++;
        j = 0;
        do {
            unsigned char value = 0;
            if (input & DAT_020f2e5c[j]) value |= 1;
            if (input & DAT_020f2e5c[j + 1]) value |= 4;
            if (input & DAT_020f2e5c[j + 2]) value |= 16;
            if (input & DAT_020f2e5c[j + 3]) value |= 64;
            *dst++ = value;
            j += 4;
        } while (j < 8);
    }
}
