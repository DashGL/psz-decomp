// flags: -O4,p -noThumb
extern unsigned int DAT_027ffc3c;
extern void FUN_020684f4(unsigned char *);
unsigned int FUN_02063aa8(void) {
    unsigned char bytes[8];
    int i;
    unsigned int sum;
    FUN_020684f4(bytes);
    i = 0;
    sum = 0;
    for (; i < 6; i++) {
        sum += bytes[i];
    }
    return ((sum + DAT_027ffc3c) * 7) % 20;
}
