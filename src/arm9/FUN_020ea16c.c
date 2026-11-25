// flags: -O4,p
void FUN_020ea16c(int bits, unsigned char *out) {
    int i;
    unsigned int mask = 0xffffffffu ^ (0xffffffffu >> bits);
    for (i = 0; i < 4; i++) {
        out[i] = mask >> (24 - i * 8);
    }
}
