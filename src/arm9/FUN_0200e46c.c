// flags: -O4,p -noThumb
struct S30_pair {
    int a;
    int b;
};
struct S30_obj {
    int pad[8];
    int f20;
    int f24;
    unsigned int f28;
    unsigned int f2c;
    void (*f30)(int, unsigned int, int *, unsigned int, int, int);
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    unsigned char f4c[16];
};
extern struct S30_pair DAT_02102758[];
extern int DAT_02102718[];

void FUN_0200e46c(struct S30_obj *param_1, int param_2) {
    unsigned int r3 = param_1->f28 / param_1->f2c;
    int ip = r3 * param_1->f38;
    int i = 0;
    for (; i < param_1->f48; i++) {
        DAT_02102718[i] = DAT_02102758[param_1->f4c[i]].a - (-ip);
    }
    param_1->f30(param_2, param_1->f48, DAT_02102718, r3, param_1->f20, param_1->f34);
    param_1->f38++;
    if (param_1->f38 >= (int)param_1->f2c) {
        param_1->f38 = 0;
    }
}
