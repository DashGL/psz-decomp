// flags: -O4,s
extern unsigned char DAT_020fb1d4[];
extern const unsigned char DAT_020f4510[];
extern int FUN_0208546c(void);
extern int FUN_0203382c(void);
extern int FUN_02097200(void *, void *);
extern void FUN_0209794c(void *, int);
extern void FUN_02097320(void *, void *, void *);
extern void FUN_0209785c(void *, void *);

int FUN_02097444(char *s) {
    int result;
    unsigned char pair[2];
    int state = *(short *)(s + 0x10);

    if (state == 4) {
        FUN_0209794c(s, FUN_0208546c());
        if (FUN_02097200(s, DAT_020fb1d4) != 0) {
            return 1;
        }
    } else if (state == 2) {
        if (FUN_0203382c() != 0) {
            pair[0] = DAT_020f4510[2];
            pair[1] = DAT_020f4510[3];
            FUN_0209794c(s, FUN_0208546c());
            FUN_02097320(&result, s, pair);
            if (FUN_02097200(s, &result) == 0) {
                FUN_0209785c(s, pair);
            }
            return 1;
        }
    }
    return 0;
}
