// flags: -O4,s
extern int FUN_0209c3b8(void);
extern unsigned int FUN_0209beac(unsigned int);

int FUN_0209c2c8(unsigned char (*table)[4], int limit) {
    unsigned char *row = table[FUN_0209c3b8()];
    int total = 0;
    unsigned int value;
    int i;
    if (limit < 4) {
        for (i = 0; i <= limit; i++) {
            total += row[i];
        }
    } else {
        total = 100;
    }
    value = FUN_0209beac(total);
    for (i = 0; i <= limit; i++) {
        if (i == 4) return 4;
        if (value < row[i]) return i;
    }
    return 0;
}
