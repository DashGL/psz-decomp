// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern char DAT_0211a3b8[];
extern char DAT_0211a51c[];
extern int FUN_02084be8(void *);
extern int FUN_02085438(void);
extern int FUN_02084ce8(void *);
extern int FUN_02078968(void);
int FUN_0207890c(void) {
    if (((*(int *)(DAT_0211a3b8 + 20) >= 0) ? E1 : E0) == 0) {
        return 0;
    }
    if (*(signed char *)(DAT_0211a3b8 + 24) == 0) {
        return 0;
    }
    if (FUN_02084be8(DAT_0211a51c) != 0) {
        return 1;
    }
    if (FUN_02085438() <= 0) {
        return 0;
    }
    if (FUN_02084ce8(DAT_0211a51c) == 0) {
        return 0;
    }
    return FUN_02078968();
}
