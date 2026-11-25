// flags: -O4,p
int FUN_020d28a4(const unsigned char *p) {
    int state = 0;
    int i;
    for (i = 1; i < 0x20; i++) {
        int b1, b2;
        if (p[i - 1] < p[0]) b1 = 1; else b1 = 0;
        if (p[0] < 0x4f) b2 = 1; else b2 = 0;
        state = ((p[0] & 1) ^ (state ^ ((i ^ p[i - 1]) & 1))) ^ b2;
        state = state ^ b1;
        if ((state != 0 && (p[i] & 1) == 0) || (state == 0 && (p[i] & 1) == 1)) {
            return 0;
        }
    }
    return 1;
}
