// flags: -O4,s
typedef struct { int v[3]; } Vec;
extern Vec DAT_020fc958;
extern void FUN_02040c0c(void *, int, int, int, int);
typedef struct { int pad0[10]; int val; char pad1[0x26]; short f52; char pad2[8]; int f5c; } Parent;
typedef struct { int f00; void *child; Parent *parent; int f0c; int f10; int pad[2]; Vec v1; Vec v2; } Obj;
void FUN_overlay_21__0219bff8(Obj *p) {
    void *child = p->child;
    Parent *parent = p->parent;
    p->f10 = parent->val;
    p->v1 = DAT_020fc958;
    p->v2 = DAT_020fc958;
    parent->f52 = 0;
    parent->f5c = 0;
    FUN_02040c0c(child, p->f10, 28, 4096, 10);
    p->f0c = 0;
}
