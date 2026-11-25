// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_0219ac78;
extern volatile int DAT_020fc988;
extern void FUN_020bc5cc(int *, const int *, const int *);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);

void FUN_overlay_25__02198978(int *p) {
    int *c = (int *)p[1];
    int value;
    Vec v;
    int flag;
    FUN_020bc5cc(&value, &DAT_0219ac78, p + 3);
    flag = !(DAT_020fc988 <= value);
    if (flag != 0) {
        value = DAT_020fc988;
    }
    v = *(Vec *)(c + 14);
    v.y = value;
    *(Vec *)(c + 14) = v;
    if (FUN_02040d2c(c, 0)) {
        FUN_02037924((void *)p[2]);
    }
    p[3] -= FUN_02036c34(c);
}
