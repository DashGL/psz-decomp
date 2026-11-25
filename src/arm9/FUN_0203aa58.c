// flags: -O4,s
typedef struct {
    int x, y, z;
} Vector_0203aa58;
extern const int DAT_020ed184[][3];
extern void FUN_020345f0(Vector_0203aa58 *, void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, Vector_0203aa58 *, int);
extern void FUN_020c193c(int, int, int, int, int);
void FUN_0203aa58(char *s, int kind, char *record) {
    int type = *(signed char *)(record + 32);
    if (type >= 0 && type < 3 && kind >= 0 && kind < 2) {
        Vector_0203aa58 v;
        short pair[2];
        int id;
        FUN_020345f0(&v, s + 156);
        FUN_02090f74(pair, FUN_02090c20(), &v, 0);
        type = *(signed char *)(record + 32);
        id = DAT_020ed184[kind][type];
        if (id >= 0) {
            if (type == 2 && *(signed char *)(record + 33) == 0 && *(signed char *)(record + 34) == 1) {
                FUN_020c193c(1, 27, pair[0], pair[1], -1);
            } else {
                FUN_020c193c(1, id, pair[0], pair[1], -1);
            }
        }
    }
}
