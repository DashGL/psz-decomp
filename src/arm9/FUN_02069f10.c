// flags: -O4,p -noThumb
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern struct { unsigned int pad[2]; unsigned int head; } DAT_02118600;
unsigned int FUN_02069f10(void) {
    unsigned int saved = FUN_020683d4(), count = 0, p = DAT_02118600.head;
    while (p) {
        p = *(unsigned int *)p;
        count++;
    }
    FUN_020683e8(saved);
    return count;
}
