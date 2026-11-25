// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x82, exact bytes and relocation targets.
// flags: -O4,p
extern char FUN_020d686c(unsigned char);

void FUN_020d68a4(const unsigned char *src, int len, char *dst) {
    unsigned char in3[4];
    unsigned char out4[4];
    int pos = 0;
    while (pos < len) {
        int i;
        for (i = 0; i <= 2; i++, pos++) {
            if (pos < len) {
                in3[i] = *src++;
            } else {
                in3[i] = 0;
            }
        }
        out4[0] = (int)in3[0] >> 2;
        out4[1] = ((in3[0] & 3) << 4) + ((int)in3[1] >> 4);
        out4[2] = ((in3[1] & 0xf) << 2) + ((int)in3[2] >> 6);
        out4[3] = in3[2] & 0x3f;
        for (i = 0; i <= 3; i++) {
            *dst++ = FUN_020d686c(out4[i]);
        }
    }
    *dst = 0;
}
