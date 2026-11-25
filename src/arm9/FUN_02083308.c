// flags: -O4,s
int FUN_02083308(unsigned char *s, int i) {
    if (i >= 0 && i < 4) {
        return *(signed char *)(s + 0x10 + i);
    }
    return -1;
}
