// flags: -O4,p
extern unsigned long long FUN_020dd3a0(unsigned int, unsigned int, unsigned int);
unsigned long long FUN_020dd878(unsigned int *s) {
    unsigned long long ret = 0;
    if (s[7] != 0) {
        ret = FUN_020dd3a0(s[7], s[9], 1);
    }
    return ret;
}
