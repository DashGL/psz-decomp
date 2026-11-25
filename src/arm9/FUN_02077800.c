// flags: -O4,s
typedef struct {
    int active;
    int id;
} Slot;

typedef struct {
    char pad0[0x24];
    char sub[0xb0];
    int f_d4;
    Slot slots[2][3];
    int f_108;
    int f_10c;
    int f_110;
    int f_114;
    int f_118;
    int f_11c;
    int f_120;
    int f_124;
    int f_128;
    int f_12c;
    int f_130;
    int f_134;
    int f_138;
} Obj77800;

typedef struct {
    char pad[0xcfc];
    Slot slots[2][3];
} Profile77800;

typedef struct {
    int ids[2][3];
} Defaults;

extern const Defaults DAT_020f28ac;
extern void FUN_0207775c(void *);
extern void FUN_02077794(void *);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern Profile77800 *FUN_020870c4(void *);

void *FUN_02077800(Obj77800 *s) {
    Slot *p;
    int i, j;
    Profile77800 *profile;
    Defaults defaults;

    FUN_0207775c(s);
    FUN_02077794(s->sub);
    s->f_d4 = 0;
    p = &s->slots[0][0];
    do {
        p->active = 0;
        p->id = -1;
        ++p;
    } while (p < &s->slots[2][0]);
    s->f_108 = 0;
    s->f_10c = 3;
    s->f_110 = 0;
    s->f_114 = 0;
    s->f_118 = 0;
    s->f_11c = 0;
    s->f_120 = 0;
    s->f_124 = 0;
    s->f_128 = 0;
    s->f_12c = 0;
    s->f_130 = 0;
    s->f_134 = 0;
    s->f_138 = 1;
    if (FUN_02087138(FUN_02086e3c()) == 1) {
        profile = FUN_020870c4(FUN_02086e3c());
        for (i = 0; i < 2; ++i) {
            for (j = 0; j < 3; ++j) {
                s->slots[i][j].id = profile->slots[i][j].active;
                if (s->slots[i][j].id != -1) {
                    s->slots[i][j].active = 1;
                } else {
                    s->slots[i][j].active = 0;
                }
            }
        }
    } else {
        int a, b;
        defaults = DAT_020f28ac;
        for (a = 0; a < 2; ++a) {
            for (b = 0; b < 3; ++b) {
                s->slots[a][b].id = defaults.ids[a][b];
                s->slots[a][b].active = 1;
            }
        }
    }
    return s;
}
