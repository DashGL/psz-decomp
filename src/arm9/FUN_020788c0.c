// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern char DAT_0211a51c[];
extern char DAT_0211a3b8[];
extern int FUN_02084ce8(void *);
extern int FUN_02078a98(void);
extern int FUN_02078968(void);

int FUN_020788c0(void) {
    if (!FUN_02084ce8(DAT_0211a51c)) {
        return 1;
    }
    if (((*(int *)(DAT_0211a3b8 + 20) >= 0) ? E1 : E0) != 0) {
        return 2;
    }
    if (!FUN_02078a98()) {
        return 3;
    }
    if (FUN_02078968() == 0) return 4; else return 0;
}
