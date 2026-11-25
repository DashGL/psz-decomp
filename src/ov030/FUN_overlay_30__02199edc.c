// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern Vec DAT_020fc958;
extern unsigned int DAT_020fc988;
extern const float DAT_020ed0a0;
extern const float DAT_020ed09c;
typedef struct {
    Vec v;
    unsigned int f0c;
    unsigned int f10;
    unsigned short f14;
    unsigned short f16;
    unsigned int f18;
    int f1c;
    float f20;
    unsigned int f24;
    unsigned int f28;
    unsigned short f2c;
    unsigned short f2e;
    float f30;
    unsigned int f34;
    int f38;
} Obj;
void FUN_overlay_30__02199edc(Obj *p) {
    p->f38 = -1;
    p->v = DAT_020fc958;
    p->f0c = DAT_020fc988;
    p->f10 = DAT_020fc988;
    p->f24 = DAT_020fc988;
    p->f28 = 0;
    p->f2c = 0;
    p->f14 = 0;
    p->f16 = 0;
    p->f18 = 0;
    p->f1c = -1;
    p->f20 = DAT_020ed0a0;
    p->f34 = 0;
    p->f30 = DAT_020ed09c;
}
