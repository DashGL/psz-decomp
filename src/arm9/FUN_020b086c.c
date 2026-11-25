//cpp
// flags: -O4,s
extern "C" int FUN_020b086c(unsigned char *s) {
    int i = 0;
    for (; i < *(short *)(s + 0xc); i++) {
        int ok = (((*(unsigned int **)(s + 8))[i] & 0x4) != 0) ? 1 : 0;
        if (ok) return i;
    }
    return -1;
}
