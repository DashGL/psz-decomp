// flags: -O4,p
void FUN_overlay_15__021205a8(const signed char *source, unsigned char *out, int size) {
    int i;
    int half = size / 2;
    for (i = 0; i < half; i++) {
        out[half + i] ^= source[i];
    }
}
