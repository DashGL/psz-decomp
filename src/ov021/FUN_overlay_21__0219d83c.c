//cpp
// flags: -O4,s
struct Comp {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22(int);
    virtual void v23();
    virtual void v24(int);
};

extern "C" {
extern char *DAT_02108c84;
extern unsigned short DAT_021a00a0[];
extern int DAT_021a1650[];
extern void FUN_overlay_21__0219afc4(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02043ea4(void *, int, int);

void FUN_overlay_21__0219d83c(char *self)
{
    char *owner = *(char **)(self + 4);
    char *records = *(char **)(owner + 0xec);
    char *component;
    int i;

    for (i = 0; i < 4; i++) {
        char *record = records + 188 * i;
        *(unsigned short *)(record + 0x4e) = DAT_021a00a0[i];
        *(unsigned short *)(record + 0x4c) = *(volatile unsigned short *)(record + 0x4e);
        *(int *)(record + 0x44) = DAT_021a1650[5];
        if (i < 2) {
            FUN_overlay_21__0219afc4(record, 1);
            *(int *)(record + 0x18) = 0;
            *(unsigned short *)(record + 0x54) = 0x4000;
            int value = 0;
            if (i == 0) {
                value = 1;
            } else if (i == 1) {
                value = 2;
            }
            *(int *)(record + 0x20) = value;
        }
    }
    component = DAT_02108c84;
    if (component) {
        Comp *c = *(Comp **)(component + 0x58);
        if (c) {
            c->v22(2);
            c->v24(*(unsigned short *)(owner + 0x108));
        }
    }
    FUN_02040c0c(owner, 6, 43, 4096, 0);
    FUN_02043ea4(owner, 6, 1);
    *(int *)(self + 12) = 0;
}
}
