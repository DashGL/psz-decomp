// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern volatile unsigned long long DAT_021184d4[];
unsigned long long FUN_02067e0c(void) {
    volatile unsigned short countL;
    volatile unsigned long long countH;
    int prev = FUN_020683d4();
    countL = *(volatile unsigned short *)0x04000100;
    countH = DAT_021184d4[1] & 0x0000ffffffffffffULL;
    if ((*(volatile unsigned int *)0x04000214 & 8) && !(countL & 0x8000)) {
        countH++;
    }
    FUN_020683e8(prev);
    return (countH << 16) | countL;
}
