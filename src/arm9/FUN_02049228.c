// flags: -O4,s
typedef struct {
    int x, y, z;
} Vector;

typedef struct Obj_02049228 Obj_02049228;
struct Obj_02049228 {
    unsigned char pad0[0x50];
    Vector vec;
    unsigned char pad1[0xe4 - 0x5c];
    unsigned int flags;
    unsigned char pad2[0x104 - 0xe8];
    int f104;
    int f108;
    Obj_02049228 *child;
    void *extra;
    unsigned char pad3[0x118 - 0x114];
    int f118;
};

extern void FUN_020492e8(void *, int);
extern void FUN_0204b3c0(void *, int);
extern void FUN_0204adbc(void *);

void FUN_02049228(Obj_02049228 *s) {
    Vector v, w;
    Obj_02049228 *p;
    s->f118 = 0;
    s->f104 = 0;
    s->f108 = 0;
    v.x = 4096;
    v.y = 4096;
    v.z = 4096;
    s->vec = v;
    FUN_020492e8(s, 4096);
    s->flags &= ~0x04000000u;
    FUN_0204b3c0(s, 5);
    p = s->child;
    if (p != 0) {
        p->f104 = 0;
        p->f108 = 0;
        w.x = 4096;
        w.y = 4096;
        w.z = 4096;
        s->child->vec = w;
        FUN_020492e8(s->child, 4096);
        s->child->flags &= ~0x04000000u;
        FUN_0204b3c0(s->child, 5);
    }
    if (s->extra != 0) {
        if (s->extra != 0) {
            FUN_0204adbc(s->extra);
            s->extra = 0;
        }
    }
}
