// flags: -O4,s
extern signed char DAT_0211c644[32];
int FUN_020c0904(int count, signed char value) {
    if (count >= 1 && count <= 3) {
        signed char *dst = &DAT_0211c644[31];
        signed char *src = dst - count;
        signed char *base = DAT_0211c644;
        signed char *p;
        signed char *end;
        if (src >= base) {
            for (; src >= base; dst--, src--) {
                *dst = *src;
            }
        }
        p = DAT_0211c644;
        end = p + (count - 1);
        while (p <= end) {
            *p++ = value;
        }
        return 1;
    }
    return 0;
}
