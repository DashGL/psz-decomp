// flags: -O4,p -noThumb
typedef struct {
    unsigned int f00;
    unsigned int f04;
    unsigned int f08;
    unsigned int f0c;
    unsigned int f10;
} S_02107040;
extern S_02107040 DAT_02107040;
extern unsigned int UNK_02107040;
extern unsigned int DAT_02107044;
extern unsigned int FUN_02020734(unsigned int, unsigned int);
extern void FUN_02020728(void *);
extern void FUN_02020780(void *, void *, unsigned int, unsigned int);
extern void FUN_02020930(void *, void *);
void FUN_02020f10(void) {
    DAT_02107040.f04 = FUN_02020734(DAT_02107040.f0c, DAT_02107040.f10 >> 4);
    FUN_02020728(&UNK_02107040);
    FUN_02020780(&UNK_02107040, &DAT_02107044, 0, DAT_02107040.f08);
    FUN_02020930(&UNK_02107040, &DAT_02107044);
}
