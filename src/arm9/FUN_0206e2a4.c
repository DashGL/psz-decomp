//cpp
// flags: -O4,s
struct Sub30 {
    virtual ~Sub30();
    int f4;
    unsigned int flags8;
    int fc;
    char pad[0x84];
    unsigned int flags94;
};
struct Info30 {
    signed char f0;
    signed char f1;
    signed char f2;
};
struct Group30 {
    int f0;
    Sub30 *f4[8];
};
struct Parent30 {
    char pad[0x64];
    Group30 *f64;
    int f68;
    int f6c;
    int f70;
    char f74[4];
};

extern "C" {
Info30 *FUN_020511f4(Parent30 *, int);
void FUN_02072964(char *, int);
void *FUN_overlay_4__02129ed4(void);
void FUN_overlay_4__0212a9a0(void *, int);
void FUN_020357f4(Sub30 *);

void FUN_0206e2a4(Parent30 *param_1) {
    
    for (int i = 0; i < 8; i++) {
        Sub30 **arr = param_1->f64->f4;
        if (arr[i] != 0) {
            Info30 *info = FUN_020511f4(param_1, arr[i]->fc);
            if (info != 0) {
                Sub30 *s = arr[i];
                bool flag = false;
                if (((s->flags8 & 1) ? true : false) != false) {
                    if (((info->f2 & 1) ? true : false) != false) {
                        flag = true;
                    }
                }
                if ((((s->flags94 & 0x10000) ? true : false) != false) || flag) {
                    FUN_02072964(param_1->f74, s->fc);
                    FUN_overlay_4__0212a9a0(FUN_overlay_4__02129ed4(), i);
                    FUN_020357f4(arr[i]);
                    delete arr[i];
                    arr[i] = 0;
                }
            }
        }
    }

}
}
