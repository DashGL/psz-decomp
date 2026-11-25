// flags: -O4,p -noThumb
unsigned int *FUN_0202bfc4(unsigned int *out, const unsigned char *in, unsigned int length) {
    unsigned int i;
    for (i = 0; i < length; i += 4) {
        *out++ = (in[i] << 24) | (in[i + 1] << 16) | (in[i + 2] << 8) | in[i + 3];
    }
    return out;
}
