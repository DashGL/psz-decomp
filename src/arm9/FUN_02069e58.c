// flags: -noThumb
extern unsigned int DAT_02118600[];
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_02069e58(void) {
    unsigned int saved = FUN_020683d4(), result;
    if (DAT_02118600[2] == 0) result = DAT_02118600[1];
    else result = DAT_02118600[8];
    FUN_020683e8(saved);
    return result;
}
