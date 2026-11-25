// flags: -O4,s
extern int FUN_0203beb4(void *);
extern int FUN_0203b41c(void *);
extern int FUN_02085438(void);
extern void FUN_0208d7e4(void *, unsigned int, int, int, int);
void FUN_0203e09c(char *s, unsigned int amount, int divisor, int mode) {
    int scaled, level, i;
    if (!FUN_0203beb4(s) || FUN_0203b41c(s)) return;
    scaled = (int)(amount * 1000u) / divisor;
    level = (int)((unsigned int)FUN_02085438() - 1);
    if (level < 0 || level >= 4) level = 0;
    if (mode == 1) {
        for (i = 0; i < 10; i++) {
            if (*(unsigned short *)(s + 0xdb4 + 2 * i) > scaled || i == 9) {
                int delta = (int)((unsigned int)*(unsigned short *)(s + 0xdc8 + 2 * i) * *(unsigned short *)(s + 0xd94 + 2 * level)) / 100;
                *(unsigned short *)(s + 340) = (unsigned int)*(short *)(s + 340) + (unsigned int)delta;
                break;
            }
        }
    } else {
        int j;
        for (j = 0; j < 6; j++) {
            if (*(unsigned short *)(s + 0xd9c + 2 * j) > scaled || j == 5) {
                int delta = (int)((unsigned int)*(unsigned short *)(s + 0xda8 + 2 * j) * *(unsigned short *)(s + 0xd94 + 2 * level)) / 100;
                *(unsigned short *)(s + 340) = (unsigned int)*(short *)(s + 340) + (unsigned int)delta;
                break;
            }
        }
    }
    if (*(short *)(s + 340) >= 10000) {
        *(short *)(s + 340) = 10000;
        FUN_0208d7e4(s + 588, *(unsigned int *)(s + 252), 0, 0, 15);
    }
}
