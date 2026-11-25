// flags: -O4,s
int FUN_020b769c(unsigned char *s, int i) {
    if (i >= 0 && i < 4) {
        return *(signed char *)(s + 0x18 + i);
    }
    return -1;
}
