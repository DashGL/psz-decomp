// flags: -O4,p
struct S16_b {
    int pad[9];
    int f24;
};
struct S16_a {
    int pad[5];
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    void (*f28)(struct S16_a *, struct S16_b *, unsigned int, unsigned short, int, unsigned char *, int);
    void (*f2c)(struct S16_a *, struct S16_b *, unsigned int, unsigned short, int, unsigned char *, int);
};
extern const char DAT_020fe9cc[];
extern const char DAT_020fe9d4[];
extern const char DAT_020fe8d8[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d4d60(struct S16_a *);

int FUN_020d3030(struct S16_a *param_1, struct S16_b *param_2, unsigned int param_3, unsigned short param_4, int param_5, unsigned char *param_6, int param_7, int param_8) {
    void (*fn)(struct S16_a *, struct S16_b *, unsigned int, unsigned short, int, unsigned char *, int);
    if (param_1 == 0) {
        FUN_02000edc(DAT_020fe9cc, DAT_020fe9d4, DAT_020fe8d8, 0x160);
    }
    if (param_1 == 0) {
        return 1;
    }
    fn = param_8 ? param_1->f28 : param_1->f2c;
    if (fn == 0) {
        return 1;
    }
    if (param_7 == 0 || param_6 == 0) {
        param_6 = 0;
        param_7 = 0;
    }
    param_1->f1c++;
    if (param_2 != 0) {
        param_2->f24++;
    }
    fn(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    param_1->f1c--;
    if (param_2 != 0) {
        param_2->f24--;
    }
    if (param_1->f14 != 0 && param_1->f1c == 0) {
        FUN_020d4d60(param_1);
        return 0;
    }
    return 1;
}
