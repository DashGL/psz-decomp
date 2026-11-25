// flags: -O4,s
extern unsigned char *FUN_02080d4c(void *, int, int);
extern void FUN_020655d8(const void *, void *, int);

void FUN_020a7170(void *unused, void *source, int bank, unsigned int *buffer) {
    int row, tile, line;
    unsigned char *dst;
    for (row = 0; row < 6; row++) {
        for (tile = 0; tile < 16; tile++) {
            unsigned int *dest = buffer + (tile & 7) * 8 + (tile / 8) * 512 + row * 64;
            for (line = 0; line < 8; line++) {
                unsigned char *p = FUN_02080d4c(source, tile * 8, line + row * 8);
                unsigned int value = 0;
                if (*p & 0x80) value |= 0x00000001;
                if (*p & 0x40) value |= 0x00000010;
                if (*p & 0x20) value |= 0x00000100;
                if (*p & 0x10) value |= 0x00001000;
                if (*p & 0x08) value |= 0x00010000;
                if (*p & 0x04) value |= 0x00100000;
                if (*p & 0x02) value |= 0x01000000;
                if (*p & 0x01) value |= 0x10000000;
                dest[line] = value;
            }
        }
    }
    dst = (unsigned char *)0x06600000;
    dst += (bank << 12) + 0x1d000;
    FUN_020655d8(buffer, dst, 0x1000);
}
