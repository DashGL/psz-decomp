// flags: -O4,s
void FUN_overlay_10__02121d64(void *unused, unsigned short *out, const signed char *in) {
    int count = 0, i;
    for (i = 0; i < 13; i++) {
        if (i % 4 == 0) {
            out[count] = 0x3000;
            count++;
        }
        out[count] = in[i];
        count++;
    }
}
