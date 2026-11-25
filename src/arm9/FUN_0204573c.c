// flags: -O4,s
typedef struct {
    signed char a, b, c, d;
} Row;
extern Row DAT_02108f84[];
extern signed char DAT_02108f48[][10];

int FUN_0204573c(signed char *out, int index, int column) {
    int result = 0;
    if (index < 22) {
        out[0] = DAT_02108f48[DAT_02108f84[index].a][column];
        out[1] = DAT_02108f48[DAT_02108f84[index].b][column];
        out[2] = DAT_02108f48[DAT_02108f84[index].c][column];
        out[3] = DAT_02108f48[DAT_02108f84[index].d][column];
        result = 1;
    }
    return result;
}
