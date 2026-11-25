//cpp
// flags: -O4,s
extern "C" int FUN_020a00e4(unsigned char *s, int flag) {
    if (flag == 0) {
        int ok = (*(unsigned char *)*(unsigned char **)(s + 0x4c) & 0x1) ? 1 : 0;
        if (ok) return 1;
    }
    return 0;
}
