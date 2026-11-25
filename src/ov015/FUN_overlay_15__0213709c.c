// flags: -O4,p
int FUN_overlay_15__0213709c(unsigned short *out, const unsigned char *in, int max) {
    int limit = max - 1;
    int count;
    for (count = 0; count < limit; count++) {
        unsigned char c = in[count];
        if (c == 0) {
            break;
        }
        out[count] = c;
    }
    out[count] = 0;
    return count;
}
