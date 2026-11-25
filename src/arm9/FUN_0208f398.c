// flags: -O4,s -lang c++
enum { E0 = 0, E1 = 1 };

extern "C" {
extern void FUN_02032dfc(void *, void *);
extern int FUN_0206d36c(void *, int);
extern void FUN_0207088c(void *, int);
extern void FUN_020391cc(void *, int);
extern int FUN_02077930(void);
extern int FUN_02077d50(int);
extern void FUN_0208d688(void *, int, unsigned short, int, int, int);

extern void *DAT_02108c64;
extern int DAT_0211a578;
}

struct S_8f398 {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40();
    virtual void v44(unsigned short, int);
    virtual void v48(unsigned short, int);
    virtual void v4c(unsigned short, int);
    virtual void v50();
    virtual void v54(unsigned short, int);
    virtual void v58(unsigned short, int);

    char pad0[0xf8 - 4];
    unsigned int ff8;
    int ffc;
    char pad1[0x138 - 0x100];
    unsigned short f138;
    char pad2[0x13e - 0x13a];
    unsigned short f13e;
    char pad3[0x181 - 0x140];
    unsigned char f181;
    char pad4[0x23c - 0x182];
    int f23c;
    int f240;
};

extern "C" int FUN_0208f398(S_8f398 *p0, int p1, int p2) {
    unsigned char sp8[20];
    int r5;

    if (p0 != 0) {
        FUN_02032dfc(sp8, DAT_02108c64);
        if (FUN_0206d36c(sp8, 0) == 0) {
            r5 = p0->f181;
            if ((r5 >= 8 && r5 <= 13) ? E1 : E0) {
                FUN_0207088c(p0, p1);
            }
            FUN_020391cc(p0, 0);
            if ((p0->ff8 & 0x400000) ? E1 : E0) {
                r5 = 8;
                p0->v54(p0->f13e, p1);
            } else {
                switch (p0->f240) {
                case 9:
                    if (r5 == 12 || r5 == 13) {
                        return 0;
                    }
                    if ((p0->ff8 & 0x80) ? E1 : E0) {
                        r5 = 5;
                    } else {
                        r5 = 2;
                    }
                    p0->v48(p0->f13e, p1);
                    break;
                case 10:
                    if (r5 == 12 || r5 == 13) {
                        return 0;
                    }
                    if ((p0->ff8 & 0x80) ? E1 : E0) {
                        r5 = 6;
                    } else {
                        r5 = 3;
                    }
                    p0->v4c(p0->f13e, p1);
                    break;
                default:
                    if (r5 == 16) {
                        r5 = 9;
                        p0->v58(p0->f13e, p1);
                    } else {
                        if ((p0->ff8 & 0x80) ? E1 : E0) {
                            r5 = 4;
                        } else {
                            r5 = 1;
                        }
                        p0->v44(p0->f13e, p1);
                    }
                    break;
                }
            }
            p0->f23c = FUN_02077d50(FUN_02077930());
            FUN_0208d688(&DAT_0211a578, p0->ffc, p0->f13e, r5, p1, p2);
            p0->f138 = 0;
            return 1;
        }
    }
    return 0;
}
