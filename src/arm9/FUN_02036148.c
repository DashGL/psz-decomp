// flags: -O4,s
//cpp
extern "C" {
extern unsigned char DAT_0211a51c[];
extern void FUN_020369c8(void *, int, int, int);
extern void FUN_02037930(void *, void *, void *);
extern void FUN_0207f540(void *, void *);
extern void FUN_020362ec(void *, unsigned int, unsigned int, unsigned int);
extern void FUN_020368b0(void *, int, int, int, int);
extern char *FUN_0203686c(void *, int);
extern int FUN_020b9a2c(void *, int);
extern unsigned int FUN_02084cc0(void *);
extern int FUN_02000ec4(int);
}

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(void *, void *, int);
    unsigned int f4, f8, fC;
};

struct Damage {
    short delta;
    unsigned char pad[6];
    short flags;
    signed char a;
    signed char code;
    unsigned char pad2[7];
    signed char f13;
    signed char f14;
};

struct Context {
    unsigned int id;
    unsigned char pad[5];
    signed char index;
    signed char flag;
};

extern "C" void FUN_02036148(char *s, char *packet) {
    Context *context = (Context *)(packet + 32);
    char *data = *(char **)(s + 20);
    Damage *damage = (Damage *)(packet + 8);
    int index = context->index;
    int maxCount = *(int *)(data + 20);
    int delta;
    if (index < 0 || maxCount <= index) return;
    delta = damage->delta;
    if (delta > 0) {
        *(int *)(s + 52) += delta;
        if (*(int *)(s + 52) > *(short *)(s + 24)) *(int *)(s + 52) = *(short *)(s + 24);
        FUN_020369c8(s, delta, 3, context->index);
        return;
    }
    *(int *)(s + 52) += delta;
    if (*(int *)(s + 52) <= 0) *(int *)(s + 52) = 1;
    {
        int pattern = -1;
        unsigned int extra = 0;
        int code = damage->code;
        char *record = FUN_0203686c(s, *(signed char *)(*(char **)(data + 16) + 24 * index + 1));
        int a = damage->a;
        if (a > 0 && a < 4 && FUN_020b9a2c(s, a)) {
            a = damage->a;
            pattern = *(signed char *)(record + 20 + a);
            extra = *(unsigned int *)(record + 24 + 4 * a);
        }
        FUN_02037930(*(void **)(s + 16), damage, context);
        {
            Obj *obj = *(Obj **)(s + 16);
            unsigned int old = obj->fC;
            obj->v4(damage, context, pattern);
            if (old != (*(Obj **)(s + 16))->fC) code = 0;
        }
        FUN_0207f540(s + 100, damage);
        if ((*(int *)(s + 144) == 3 ? 1 : 0) == 0) FUN_020362ec(s, context->id, extra, code);
        if ((context->flag == 1 ? 1 : 0) != 0) {
            int x = damage->f13;
            int y = damage->f14;
            unsigned int cur = FUN_02084cc0(DAT_0211a51c);
            FUN_020368b0(s, context->index, x, y, context->id == cur ? 1 : 0);
        }
        if (((damage->flags & 1024) ? 1 : 0) != 0) {
            FUN_020369c8(s, FUN_02000ec4(damage->delta), 2, context->index);
        }
    }
}
