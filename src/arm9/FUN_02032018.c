// flags: -O4,s
extern void *FUN_0208f068(void);
extern int FUN_02084bf8(void *);
extern int FUN_0208ef48(void *, const void *, int);
extern char DAT_0211a51c[];
extern const char DAT_020f6cac[];
extern const char DAT_020f6cd0[];
extern const char DAT_020f6cf4[];
void FUN_02032018(char *s, int both) {
    void *m = FUN_0208f068();
    if (m != 0) {
        const char *cd0 = DAT_020f6cd0;
        if (FUN_02084bf8(DAT_0211a51c)) {
            *(int *)(s + 56) = FUN_0208ef48(m, DAT_020f6cac, 2);
            if (both) {
                *(int *)(s + 60) = FUN_0208ef48(m, cd0, 3);
            }
        } else {
            *(int *)(s + 60) = FUN_0208ef48(m, cd0, 3);
            if (both) {
                *(int *)(s + 56) = FUN_0208ef48(m, DAT_020f6cac, 2);
            }
        }
        *(int *)(s + 72) = FUN_0208ef48(m, DAT_020f6cf4, 15);
    }
}
