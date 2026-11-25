// flags: -O4,s -noThumb
extern unsigned int DAT_02118600[];
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
unsigned int FUN_02069e84(unsigned int requested) {
    unsigned int saved = FUN_020683d4(), done = DAT_02118600[1], result;
    if (requested > done) {
        if (requested - done < 0x80000000) result = 0;
        else result = 1;
    } else {
        result = done - requested < 0x80000000;
    }
    FUN_020683e8(saved);
    return result;
}
