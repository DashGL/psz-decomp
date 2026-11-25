// flags: -O4,s -noThumb
int FUN_0206bfc8(unsigned int c) {
    unsigned int i = c - 9;
    int res = 0;
    if (i > 23) return 0;
    if (0x0080001fu & (1u << i)) res = 1;
    return res;
}
