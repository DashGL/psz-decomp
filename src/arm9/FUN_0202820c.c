// flags: -O4,p -noThumb
struct S5 {
    unsigned int f0;
    int pad[5];
    void *f18;
    int f1c;
    void *f20;
    int f24;
    short f28;
    short f2a;
    void *f2c;
};
extern char DAT_0210897c[];
extern struct S5 DAT_021088f4;
extern char D_021088f4[];
extern char DAT_0210890c[];
extern char DAT_02108914[];
extern unsigned int FUN_02027c18(const char *);
extern void FUN_020656b8(void *, int, int);
extern void FUN_0206bf18(void *, const char *, int);

void *FUN_0202820c(const char *param_1) {
    unsigned int ip = FUN_02027c18(param_1);
    if (ip == 0) {
        return 0;
    }
    FUN_020656b8(DAT_0210897c, 0, 0x101);
    FUN_0206bf18(DAT_0210897c, param_1, 0x101);
    DAT_021088f4.f20 = DAT_0210897c;
    DAT_021088f4.f24 = 0;
    DAT_021088f4.f28 = 2;
    DAT_021088f4.f2a = 4;
    DAT_021088f4.f2c = DAT_0210890c;
    DAT_021088f4.f18 = D_021088f4;
    DAT_021088f4.f1c = 0;
    DAT_021088f4.f0 = ((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00) | ((ip << 8) & 0xff0000) | ((ip << 24) & 0xff000000);
    return DAT_02108914;
}
