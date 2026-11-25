// flags: -O4,s
typedef unsigned long long u64;
typedef struct { int v[9]; } Matrix;
typedef struct {
    unsigned char b[4];
    u64 p0;
    Matrix mat;
    int f30;
    int f34;
    int f38;
    u64 p1;
} Rec;

Rec *FUN_020abd28(Rec *s, const Rec *p) {
    s->b[0] = p->b[0];
    s->b[1] = p->b[1];
    s->b[2] = p->b[2];
    s->b[3] = p->b[3];
    s->p0 = p->p0;
    s->mat = p->mat;
    s->f30 = p->f30;
    s->f34 = p->f34;
    s->f38 = p->f38;
    s->p1 = p->p1;
    return s;
}
