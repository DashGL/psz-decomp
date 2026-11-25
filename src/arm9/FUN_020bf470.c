// flags: -O4,s
typedef struct { int x, y; } Vec2;
typedef struct { Vec2 pos; int r; } Circle;
#pragma thumb off
extern int FUN_0205c540(int);
extern int FUN_0205c520(int, int);
#pragma thumb reset

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

int FUN_020bf470(Circle *out, Circle *a, Circle *b) {
    Vec2 d;
    const Vec2 *vp = &d;
    int dist;
    d.x = b->pos.x - a->pos.x;
    d.y = b->pos.y - a->pos.y;
    dist = FUN_0205c540(fx_mul(vp->x, vp->x) + fx_mul(vp->y, vp->y));
    if (a->r >= b->r) {
        if (a->r >= dist + b->r) {
            out->pos = a->pos;
            out->r = a->r;
            return 1;
        }
    } else if (b->r >= dist + a->r) {
        out->pos = b->pos;
        out->r = b->r;
        return 1;
    }
    if (dist <= 0) return 0;
    {
        Circle tmp;
        int ratio;
        tmp.r = (dist + a->r + b->r) / 2;
        ratio = FUN_0205c520(tmp.r - a->r, dist);
        tmp.pos.x = a->pos.x + fx_mul(d.x, ratio);
        tmp.pos.y = a->pos.y + fx_mul(d.y, ratio);
        out->pos = tmp.pos;
        out->r = tmp.r;
    }
    return 1;
}
