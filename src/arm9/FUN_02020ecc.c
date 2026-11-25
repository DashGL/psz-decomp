// flags: -O4,s -noThumb
extern unsigned int FUN_020209b4(void *, void *, unsigned int, unsigned int);
extern unsigned int DAT_02107040;
extern unsigned int DAT_02107044;
unsigned int FUN_02020ecc(unsigned int key) {
    enum { E0 = 0, E1 = 1 };
    return FUN_020209b4(&DAT_02107040, &DAT_02107044, ((unsigned short)key) << 3, ((key & 0xffff0000u) >> 16) << 3) == 0 ? E1 : E0;
}
