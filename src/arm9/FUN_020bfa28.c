// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { int minx, miny, maxx, maxy; } Rect;
extern int FUN_020bf7d8(Pair *);
extern int FUN_0205c540(int);
extern int FUN_020c1334(int);
extern int FUN_0205c520(int, int);

int FUN_020bfa28(Rect *a, Rect *b, Pair *out) {
    Pair d;
    int aminx, aminy, amaxx, amaxy;
    int bminx, bminy, bmaxx, bmaxy;
    int ax, ay, bx, by, x, y, tx, ty;
    bminx = b->minx;
    amaxx = a->maxx;
    if (amaxx < bminx || (aminx = a->minx) > (bmaxx = b->maxx)) return 0;
    bminy = b->miny;
    amaxy = a->maxy;
    if (amaxy < bminy || (aminy = a->miny) > (bmaxy = b->maxy)) return 0;
    if (!out) return 1;
    d.x = (aminx + amaxx) / 2 - (bminx + bmaxx) / 2;
    d.y = (aminy + amaxy) / 2 - (bminy + bmaxy) / 2;
    if (FUN_020c1334(FUN_0205c540(FUN_020bf7d8(&d))) <= 4) {
        d.x = 4096;
        d.y = 0;
    }
    if (d.x >= 0 && d.y >= 0) {
        ax = a->minx; ay = a->miny; bx = b->maxx; by = b->maxy;
    } else if (d.x >= 0 && d.y < 0) {
        ax = a->minx; ay = a->maxy; bx = b->maxx; by = b->miny;
    } else if (d.x < 0 && d.y >= 0) {
        ax = a->maxx; ay = a->miny; bx = b->minx; by = b->maxy;
    } else {
        ax = a->maxx; ay = a->maxy; bx = b->minx; by = b->miny;
    }
    x = bx - ax;
    y = by - ay;
    if (FUN_020c1334(d.x) <= 4) {
        out->x = 0;
        out->y = y;
    } else if (FUN_020c1334(d.y) <= 4) {
        out->x = x;
        out->y = 0;
    } else {
        tx = FUN_0205c520(x, d.x);
        ty = FUN_0205c520(y, d.y);
        if (tx < ty) {
            out->x = x;
            out->y = (int)(((long long)d.y * tx + 2048) >> 12);
        } else {
            out->x = (int)(((long long)d.x * ty + 2048) >> 12);
            out->y = y;
        }
    }
    return 1;
}
