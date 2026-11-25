// flags: -O4,s
//cpp
#pragma opt_dead_assignments off
struct Obj_439ac {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *, void *);
};
struct Ctx_439ac {
    unsigned int a;
    unsigned int b;
    signed char c[4];
};
struct Dmg_439ac {
    unsigned int w0;
    unsigned int w1;
    short flags;
    short pad;
    unsigned int rest[3];
};
extern "C" {
extern void *DAT_02108cf4;
int FUN_02078188(unsigned int);
int FUN_02078198(unsigned int);
void *FUN_020352a4(void *, unsigned int);
Obj_439ac *FUN_0206e748(void *);
void FUN_020360cc(void *);
void FUN_020439ac(unsigned int id);
}

void FUN_020439ac(unsigned int id) {
    if (FUN_02078188(id) || FUN_02078198(id)) {
        Obj_439ac *obj = FUN_0206e748(FUN_020352a4(DAT_02108cf4, id));
        if (obj) {
            Ctx_439ac context;
            Dmg_439ac damage;
            context.a = ~0u;
            context.b = ~0u;
            context.c[0] = -1;
            context.c[1] = -1;
            context.c[2] = -1;
            context.c[3] = -1;
            context.a = id;
            context.b = id;
            context.c[0] = 0;
            context.c[1] = 0;
            context.c[2] = 0;
            context.c[3] = 0;
            FUN_020360cc(&damage);
            FUN_020360cc(&damage);
            damage.flags |= 2;
            obj->v4(&damage, &context);
        }
    }
}
