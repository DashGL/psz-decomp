// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { int x, y, z; } Vec;
typedef struct {
    int f0;
    int id;
    int f2;
    Vec pos;
    int f6, f7, f8;
    unsigned short heading;
    unsigned short pad26;
    int f10;
    int value;
    unsigned short dur;
    unsigned short pad32;
    int f13;
    int f14;
    int active;
    int kind;
    int f17;
} Rec_20;
extern const int DAT_0219fbe8[];
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);

void FUN_overlay_20__0219c23c(int *p, void *position, unsigned short heading, int value, int kind) {
    int i;
    for (i = 0; i < 6; i++) {
        Rec_20 *r = &((Rec_20 *)p[54])[i];
        if ((r->active != 0) ? E1 : E0) continue;
        if (kind) {
            r->kind = 1;
            r->id = FUN_02074e9c(p, 1, 1, 0);
            r->f10 = DAT_0219fbe8[3];
            r->dur = 318;
        } else {
            r->kind = 0;
            r->id = FUN_02074e9c(p, 0, 1, 0);
            r->f10 = DAT_0219fbe8[4];
            r->dur = 45;
        }
        r->active = 1;
        r->pos = *(Vec *)position;
        r->heading = heading;
        r->value = value;
        r->f13 = 1;
        {
            int *effect = (int *)FUN_02075040(p, r->id);
            if (effect) *(Vec *)(effect + 23) = r->pos;
        }
        return;
    }
}
