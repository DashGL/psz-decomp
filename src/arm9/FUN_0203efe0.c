// flags: -O4,s
struct S {
    char pad0[0x20];
    unsigned short flag;
    char pad1[0x43e];
    void *objs[4];
    char pad2[0x30];
    char kinds[4];
    char pad3[0x3c];
    unsigned int vals[4];
};

extern void *DAT_020f7210[];
extern void *DAT_020f7220[];
extern void *DAT_02108d0c[];
extern void FUN_0203f078(void *, int);
extern void FUN_020bc418(void *, void *, void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020bc2dc(void *, void *, int);
extern int FUN_020bc548(void *, void *);

void FUN_0203efe0(struct S *s, int index, int kind) {
    void *obj;
    int k;
    if (index >= 0 && index < 4 && kind >= 1 && kind < 5) {
        k = kind - 1;
        FUN_0203f078(s, index);
        obj = FUN_020ba894(132);
        if (obj) {
            obj = FUN_020bc2dc(obj, DAT_020f7210[index], 0);
        }
        s->objs[index] = obj;
        if (FUN_020bc548(s->objs[index], DAT_020f7220[k]) <= 65536) {
            FUN_020bc418(s->objs[index], DAT_020f7220[k], DAT_02108d0c[index]);
        }
        s->kinds[index] = (char)kind;
        s->vals[index] = 0;
        s->flag = 1;
    }
}
