// flags: -O4,p -noThumb
void FUN_0202d720(unsigned char *dest, const unsigned short *source, int length) {
    dest += length - 1;
    while (length > 1) {
        *dest-- = (unsigned char)*source;
        *dest-- = (unsigned char)(*source++ >> 8);
        length -= 2;
    }
    if (length > 0) {
        *dest = (unsigned char)*source;
    }
}
