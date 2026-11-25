// flags: -O4,s
//cpp
struct Obj_452ec {
    virtual ~Obj_452ec();
};
struct Rec14_452ec {
    unsigned short a;
    unsigned short b;
    unsigned char pad[10];
};
struct Mgr_452ec {
    Obj_452ec *p[9];
};
extern "C" {
extern char DAT_02108db2[];
extern unsigned int DAT_02108e20[];
extern Rec14_452ec DAT_0210b340[];
extern unsigned int DAT_0210d1e8[][7];
extern Mgr_452ec DAT_02108d6c;
void FUN_02045f84(void *);
void FUN_020452ec(void);
}

void FUN_020452ec(void) {
    int i, j;
    FUN_02045f84(DAT_02108db2);
    for (i = 0; i < 7; i++) {
        DAT_02108e20[i] = 0;
    }
    for (i = 0; i < 11; i++) {
        DAT_0210b340[i].b = 0xffff;
        FUN_02045f84(&DAT_0210b340[i]);
        for (j = 0; j < 7; j++) {
            DAT_0210d1e8[i][j] = 0;
        }
    }
    if (DAT_02108d6c.p[1]) {
        delete DAT_02108d6c.p[1];
        DAT_02108d6c.p[1] = 0;
    }
    if (DAT_02108d6c.p[4]) {
        delete DAT_02108d6c.p[4];
        DAT_02108d6c.p[4] = 0;
    }
}
