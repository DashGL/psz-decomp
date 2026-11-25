// flags: -O4,p -noThumb
extern void *FUN_02020f10(void);
extern void FUN_02020e00(void);
extern void FUN_02020ecc(void);
extern unsigned int DAT_02107040[];
extern void (*DAT_020f693c)(void);
extern void (*DAT_020f6940)(void);
void *FUN_02020dac(unsigned int size, unsigned int records, unsigned int record_bytes, unsigned int install) {
    void *result;
    DAT_02107040[2] = size;
    DAT_02107040[3] = records;
    DAT_02107040[4] = record_bytes;
    result = FUN_02020f10();
    if (!install) return result;
    DAT_020f693c = FUN_02020e00;
    DAT_020f6940 = FUN_02020ecc;
    return &DAT_020f6940;
}
