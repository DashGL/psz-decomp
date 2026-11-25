// flags: -O4,p
extern char DAT_021001e0[];

void FUN_020dd4e4(unsigned long long val, int bits, char *output) {
    int i; int count; const char *tbl;
    count = (bits + 4) / 5;
    tbl = DAT_021001e0;
    for (i = 0; i < count; i++) {
        *((output + count - 1) - i) = tbl[val & 31];
        val >>= 5;
    }
    output[count] = 0;
}
