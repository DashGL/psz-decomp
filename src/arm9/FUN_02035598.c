// flags: -O4,s
//cpp
struct StatRec {
    short s[12];
    int w;
};
struct SubObj {
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual SubObj *v8();
    int pad[3];
    SubObj *sub;
    struct {
        char pad0[0x30];
        StatRec *recs;
    } *info;
    short s[12];
    int w;
    int hp_copy;
    char pad1[0x90 - 0x38];
    int f90;
    unsigned int f94;

    int is_boss() { return f90 == 3; }
    int has_flag10() { return (f94 & 0x10) != 0; }
};

extern "C" {
extern signed char DAT_0211a3c4[];
extern char *FUN_0200d16c(void);
extern void *FUN_02031a74(void);
extern unsigned short *FUN_020320c8(void *, bool);
extern void FUN_02074dbc(void *);
extern void FUN_02036c94(void *);

void FUN_02035598(Obj *s) {
    int selector = DAT_0211a3c4[0xd];
    StatRec *rec = &s->info->recs[selector];
    s->s[0] = rec->s[0];
    s->s[1] = rec->s[1];
    s->s[2] = rec->s[2];
    s->s[3] = rec->s[3];
    s->s[4] = rec->s[4];
    s->s[5] = rec->s[5];
    s->s[6] = rec->s[6];
    s->s[7] = rec->s[7];
    s->s[8] = rec->s[8];
    s->s[9] = rec->s[9];
    s->s[10] = rec->s[10];
    s->s[11] = rec->s[11];
    s->w = rec->w;
    if (*(int *)(FUN_0200d16c() + 12) == 1) {
        unsigned short *scale = FUN_020320c8(FUN_02031a74(), s->is_boss() ? true : false);
        if (scale) {
            s->s[0] = (s->s[0] * scale[0]) / 100;
            s->s[1] = (s->s[1] * scale[1]) / 100;
            s->s[2] = (s->s[2] * scale[1]) / 100;
            s->s[3] = (s->s[3] * scale[2]) / 100;
            s->s[4] = (s->s[4] * scale[1]) / 100;
            s->s[5] = (s->s[5] * scale[1]) / 100;
            s->s[6] = (s->s[6] * scale[3]) / 100;
            s->s[7] = (s->s[7] * scale[4]) / 100;
            s->s[8] = (s->s[8] * scale[5]) / 100;
            s->s[9] = (s->s[9] * scale[6]) / 100;
            s->s[10] = (s->s[10] * scale[8]) / 100;
            s->w = (s->w * scale[9]) / 100;
        }
    }
    if (s->has_flag10()) {
        s->s[0] = (s->s[0] * 250) / 100;
        s->s[1] = (s->s[1] * 120) / 100;
        s->s[2] = (s->s[2] * 120) / 100;
        s->s[3] = (s->s[3] * 120) / 100;
        s->s[4] = (s->s[4] * 120) / 100;
        s->s[5] = (s->s[5] * 120) / 100;
        s->s[6] = (s->s[6] * 150) / 100;
        s->s[7] = (s->s[7] * 100) / 100;
        s->s[8] = (s->s[8] * 130) / 100;
        s->s[9] = (s->s[9] * 300) / 100;
        s->s[10] = (s->s[10] * 250) / 100;
        s->w = (s->w * 110) / 100;
    }
    s->hp_copy = s->s[0];
    FUN_02074dbc(s);
    FUN_02036c94(s);
    s->sub = s->v8();
    s->sub->v2(s);
}
}
