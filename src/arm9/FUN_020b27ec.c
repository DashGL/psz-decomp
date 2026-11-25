// flags: -O4,s
extern unsigned int FUN_020832b4(unsigned int);
extern void FUN_020b2854(void *, int, int);
extern void FUN_020b2a14(void *, void *, int, int);

int FUN_020b27ec(char *s, unsigned char *item, int index, unsigned int count) {
    int threshold, amount;
    unsigned int random;
    unsigned int flag;
    if (!count) return 0;
    flag = (item[0] & 32) != 0;
    if (flag) {
        threshold = (*(signed char **)(s + 16))[6];
    } else {
        threshold = (*(signed char **)(s + 16))[7];
    }
    random = FUN_020832b4(100);
    if (count >= 2 && random < (unsigned int)threshold) {
        amount = 2;
    } else {
        amount = 1;
    }
    FUN_020b2854(item, index, amount);
    item[4]++;
    (*(int *)(s + 12))++;
    FUN_020b2a14(s, item, amount, 0);
    return amount;
}
