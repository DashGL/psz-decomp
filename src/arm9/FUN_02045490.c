// flags: -O4,s
//cpp
struct Obj_45490 {
    virtual ~Obj_45490();
};
struct Rec14_45490 {
    unsigned short a;
    unsigned short b;
    unsigned char pad[10];
};
struct Mgr_45490 {
    Obj_45490 *p[9];
};
extern "C" {
extern char DAT_02108dc0[];
extern unsigned int DAT_02108e3c[];
extern Rec14_45490 DAT_0210b340[];
extern unsigned int DAT_0210d1e8[][7];
extern Mgr_45490 DAT_02108d6c;
void FUN_02045f84(void *);
void FUN_02045490(void);
}

void FUN_02045490(void) {
    int i, j;
    FUN_02045f84(DAT_02108dc0);
    for (i = 0; i < 7; i++) {
        DAT_02108e3c[i] = 0;
    }
    for (i = 11; i < 14; i++) {
        DAT_0210b340[i].b = 0xffff;
        FUN_02045f84(&DAT_0210b340[i]);
        for (j = 0; j < 7; j++) {
            DAT_0210d1e8[i][j] = 0;
        }
    }
    if (DAT_02108d6c.p[8]) {
        delete DAT_02108d6c.p[8];
        DAT_02108d6c.p[8] = 0;
    }
    if (DAT_02108d6c.p[2]) {
        delete DAT_02108d6c.p[2];
        DAT_02108d6c.p[2] = 0;
    }
}
