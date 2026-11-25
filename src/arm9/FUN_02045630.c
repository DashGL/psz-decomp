// flags: -O4,s
//cpp
struct Obj_45630 {
    virtual ~Obj_45630();
};
struct Rec14_45630 {
    unsigned short a;
    unsigned short b;
    unsigned char pad[10];
};
struct Mgr_45630 {
    Obj_45630 *p[9];
};
extern "C" {
extern char DAT_02108da4[];
extern unsigned int DAT_02108e58[];
extern Rec14_45630 DAT_0210b340[];
extern unsigned int DAT_0210d1e8[][7];
extern Mgr_45630 DAT_02108d6c;
void FUN_02045f84(void *);
void FUN_02045630(void);
}

void FUN_02045630(void) {
    int i, j;
    FUN_02045f84(DAT_02108da4);
    for (i = 0; i < 7; i++) {
        DAT_02108e58[i] = 0;
    }
    for (i = 14; i < 149; i++) {
        DAT_0210b340[i].b = 0xffff;
        FUN_02045f84(&DAT_0210b340[i]);
        for (j = 0; j < 7; j++) {
            DAT_0210d1e8[i][j] = 0;
        }
    }
    if (DAT_02108d6c.p[7]) {
        delete DAT_02108d6c.p[7];
        DAT_02108d6c.p[7] = 0;
    }
    if (DAT_02108d6c.p[6]) {
        delete DAT_02108d6c.p[6];
        DAT_02108d6c.p[6] = 0;
    }
}
