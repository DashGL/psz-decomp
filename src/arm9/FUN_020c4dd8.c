// flags: -O4,p
struct S_020c4dd8 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    void (*f1c)(int);
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int *f44;
    unsigned char pad48[0x404];
    int f44c;
    int f450;
    int f454;
    int f458;
};

#pragma thumb off
extern int FUN_02055bb8(void);
extern void FUN_02055c50(unsigned short);
#pragma thumb reset
extern void FUN_020c4f70(struct S_020c4dd8 *, int, int, int);
extern int FUN_020c4f10(struct S_020c4dd8 *, int, int);
extern int FUN_020c4d84(struct S_020c4dd8 *, int, int);
extern void FUN_020c4f98(struct S_020c4dd8 *);

void FUN_020c4dd8(struct S_020c4dd8 *param_1) {
    param_1->f24 = FUN_02055bb8();
    FUN_02055c50((unsigned short)param_1->f10);
    if (param_1->f08 == 1) {
        FUN_020c4f70(param_1, param_1->f44c, param_1->f44c, param_1->f450);
        if (param_1->f3c != FUN_020c4f10(param_1, param_1->f44c, param_1->f450)) {
            param_1->f24 = 0x66;
        }
        param_1->f44c = 0;
        param_1->f450 = 0;
    } else {
        int res;
        FUN_020c4f70(param_1, param_1->f454, param_1->f454, param_1->f458);
        res = FUN_020c4f10(param_1, param_1->f454, param_1->f458);
        if (FUN_020c4d84(param_1, param_1->f20, res) == 0 && param_1->f1c != 0) {
            FUN_020c4f98(param_1);
            param_1->f1c(0);
        }
    }
    FUN_020c4f98(param_1);
    param_1->f08 = 0;
    if (param_1->f44 != 0) {
        *param_1->f44 = param_1->f24;
        param_1->f44 = 0;
    }
    param_1->f20 = -1;
}
