// flags: -O4,p -noThumb
void FUN_0202bf80(unsigned char *out, const unsigned int *in, unsigned int length) {
    unsigned int i;
    length >>= 2;
    for (i = 0; i < length; i++) {
        unsigned int v = *in++;
        out[0] = (unsigned char)(v >> 24);
        out[1] = (unsigned char)(v >> 16);
        out[2] = (unsigned char)(v >> 8);
        out[3] = (unsigned char)v;
        out += 4;
    }
}
