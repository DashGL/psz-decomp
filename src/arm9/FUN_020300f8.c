// flags: -O4,p -noThumb
extern char DAT_01ff81cc[];
int FUN_020300f8(unsigned int *s) {
    if (s[2] == 0) {
        s[2] = (unsigned int)DAT_01ff81cc;
        s[3] += 1;
        return 1;
    }
    if (s[2] != (unsigned int)DAT_01ff81cc) {
        return 0;
    }
    s[3] += 1;
    return 1;
}
