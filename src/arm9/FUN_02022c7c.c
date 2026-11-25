// flags: -O4,p -noThumb
void FUN_02022c7c(unsigned char *packet, unsigned char *state) {
    int left;
    unsigned char *p;
    *(unsigned short *)(state + 46) = 536;
    left = ((int)(packet[12] & 0xf0) / 4) - 20;
    p = packet + 20;
    while (left-- != 0) {
        unsigned char opt = *p++;
        if (opt == 0) {
            return;
        }
        if (opt == 1) {
            continue;
        }
        if (opt == 2) {
            unsigned short mss = (unsigned short)((p[1] << 8) | p[2]);
            p += 3;
            left -= 3;
            *(unsigned short *)(state + 46) = mss;
        } else {
            int len = *p - 1;
            left -= len;
            p += len;
        }
    }
}
