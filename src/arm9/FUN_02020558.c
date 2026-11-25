// flags: -O4,p -noThumb
extern void FUN_020204a8(void *);
extern unsigned DAT_02107010[];
extern unsigned DAT_a_02107010[];
void FUN_02020558(unsigned a, unsigned b) {
    DAT_02107010[0] = a;
    DAT_02107010[1] = b;
    FUN_020204a8(DAT_a_02107010);
}
