// flags: -O4,s
typedef union { int w[4]; unsigned char b[16]; } Record;
extern int FUN_020b707c(void *, void *);
extern int FUN_0204ea84(void *, int);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern void FUN_0208de20(void *, unsigned int, unsigned int, unsigned int);
int FUN_0203d060(char *s, Record *src) {
    Record r = *src;
    if (FUN_020b707c(s + 32, &r) == 1 && FUN_0204ea84(&r, 1)) {
        unsigned int index = r.b[2];
        int value = (r.w[1] & 0x3fc000) >> 14;
        char *m;
        (s + 123)[index] = value;
        m = FUN_020870c4(FUN_02086e3c());
        (m + 87)[index] = (unsigned char)value;
        FUN_0208de20(s + 588, *(unsigned int *)(s + 252), index, (unsigned char)value);
        return 1;
    }
    return 0;
}
