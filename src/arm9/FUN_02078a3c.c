// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern char DAT_0211a51c[];
extern int FUN_02084c2c(void *);
extern int FUN_02084bf8(void *);
extern int FUN_02084c78(void *);
extern int FUN_02078cec(int, int);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
int FUN_02078a3c(void) {
    if (FUN_02084c2c(DAT_0211a51c) != 0) {
        return 0;
    }
    if (FUN_02084bf8(DAT_0211a51c) != 0) {
        if (FUN_02078cec(FUN_02084c78(DAT_0211a51c), 0) != 0) {
            return 1;
        }
    } else {
        char *p = FUN_020870c4(FUN_02086e3c());
        if (((*(unsigned int *)(p + 3408) & 0x100000) ? E1 : E0) != 0) {
            return 1;
        }
    }
    return 0;
}
