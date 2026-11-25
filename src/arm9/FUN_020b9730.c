// flags: -O4,s
extern int FUN_0203beb4(void *), FUN_0208a094(void *), FUN_0203b41c(void *), FUN_02085438(void);
extern char *FUN_0209554c(void *);
void FUN_020b9730(char *s, int amount, int divisor) {
    char *table;
    int ratio, level, i, value;
    if (FUN_0203beb4(s) && FUN_0208a094(s + 416) >= 10 && !FUN_0203b41c(s)) {
        table = FUN_0209554c(s);
        if (table) {
            ratio = (-amount * 1000) / divisor;
            level = FUN_02085438() - 1;
            if (ratio >= 0 && ratio <= 1000 && level >= 0 && level < 4) {
                for (i = 0; i < 6; i++) {
                    if (*(unsigned short *)(table + 72 + 2 * i) > ratio || i == 5) {
                        value = (*(unsigned short *)(table + 84 + 2 * i) * *(unsigned short *)(table + 2 * level) * (unsigned char)table[129]) / 1000;
                        *(short *)(s + 340) += value;
                        break;
                    }
                }
                if (*(short *)(s + 340) > 10000) *(short *)(s + 340) = 10000;
            }
        }
    }
}
