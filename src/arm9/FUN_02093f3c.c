// flags: -O4,s
extern void *UNK_02108c64;
extern int FUN_02032d2c(void *, int);
extern int FUN_02093fa4(int, int, void *, int, int);

enum { E0 = 0, E1 = 1 };

int FUN_02093f3c(signed char *d, int arg) {
    int category = -1;
    int type = d[2];
    if (((d[0] == 0) ? E1 : E0) != 0) {
        if (type == 0) category = 0;
        else if (type == 1) category = 1;
        else if (type == 2) category = 2;
    } else if (type == 0) {
        category = 3;
    } else if (FUN_02032d2c(UNK_02108c64, type)) {
        category = 4;
    }
    return FUN_02093fa4(category, d[1], d, arg, 0);
}
