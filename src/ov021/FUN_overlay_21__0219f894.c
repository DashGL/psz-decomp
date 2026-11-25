// flags: -O3,s
typedef struct { unsigned int x, y, z; } Vec;
typedef struct { unsigned char pad[0xa8]; unsigned int f_a8; Vec v; } Child;
typedef struct { unsigned int f0, f4; Child *child; unsigned int f0c; Vec v; unsigned int f1c; } Obj;
static inline Vec get_v(Obj *p) { return p->v; }
void FUN_overlay_21__0219f894(Obj *p) {
    Child *c = p->child;
    c->f_a8 = p->f1c;
    c->v = get_v(p);
}
