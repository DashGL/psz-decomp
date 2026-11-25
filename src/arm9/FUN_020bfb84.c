// flags: -O4,s
typedef struct { int x, y; } Vec;
typedef struct { int x0, y0, x1, y1; } Rect;
typedef struct { int x, y, radius; } Circle;

extern void FUN_020c03d0(void *, Rect, void *);
extern void FUN_02034e8c(void *, void *);
extern void FUN_020bfa04(void *);
extern void FUN_020bf584(void *, void *, void *, void *);
extern int FUN_020bf7d8(void *);
extern int FUN_020c1334(int);
#pragma thumb off
extern int FUN_0205c540(int);
extern int FUN_0205c520(int, int);
#pragma thumb reset

int FUN_020bfb84(Circle *circle, Rect *rect, Vec *out) {
    Circle rounded;
    Vec closest;
    Vec direction;
    Vec corner;
    Vec point;
    Vec normal;
    int radius, dx, dy, boundX, boundY, intersectionX, intersectionY;

    FUN_020c03d0(circle, *rect, &closest);
    radius = circle->radius;
    { long long r64 = radius;
    dy = circle->y - closest.y;
    dx = circle->x - closest.x;
    if ((int)(((long long)dx * dx + 2048) >> 12) + (int)(((long long)dy * dy + 2048) >> 12) >
        (int)((r64 * r64 + 2048) >> 12)) {
        return 0;
    }
    }
    if (!out) {
        return 1;
    }
    {
        int cy = (rect->y0 + rect->y1) / 2;
        int cx = (rect->x0 + rect->x1) / 2;
        direction.x = ((volatile Circle *)circle)->x - cx;
        direction.y = circle->y - cy;
    }
    if (FUN_020c1334(FUN_0205c540(FUN_020bf7d8(&direction))) <= 4) {
        direction.x = 4096;
        direction.y = 0;
    }
    if (direction.x >= 0 && direction.y >= 0) {
        boundX = rect->x1 + radius;
        boundY = rect->y1 + radius;
        FUN_02034e8c(&corner, &rect->x1);
    } else if (direction.x >= 0 && direction.y < 0) {
        boundX = rect->x1 + radius;
        boundY = rect->y0 - radius;
        corner.x = rect->x1;
        corner.y = rect->y0;
    } else if (direction.x < 0 && direction.y >= 0) {
        boundX = rect->x0 - radius;
        boundY = rect->y1 + radius;
        corner.x = rect->x0;
        corner.y = rect->y1;
    } else {
        boundX = rect->x0 - radius;
        boundY = rect->y0 - radius;
        corner.x = rect->x0;
        corner.y = rect->y0;
    }
    if (FUN_020c1334(direction.x) <= 4) {
        point.x = circle->x;
        point.y = boundY;
    } else if (FUN_020c1334(direction.y) <= 4) {
        point.x = boundX;
        point.y = circle->y;
    } else {
        intersectionY = circle->y + FUN_0205c520((int)(((long long)direction.y * (boundX - circle->x) + 2048) >> 12), direction.x);
        intersectionX = circle->x + FUN_0205c520((int)(((long long)direction.x * (boundY - circle->y) + 2048) >> 12), direction.y);
        if (rect->x0 <= intersectionX && intersectionX <= rect->x1) {
            point.x = intersectionX;
            point.y = boundY;
        } else if (rect->y0 <= intersectionY && intersectionY <= rect->y1) {
            point.x = boundX;
            point.y = intersectionY;
        } else {
            normal = direction;
            FUN_020bfa04(&normal);
            rounded.x = corner.x;
            rounded.y = corner.y;
            rounded.radius = circle->radius;
            FUN_020bf584(circle, &normal, &rounded, &point);
        }
    }
    out->x = point.x - circle->x;
    out->y = point.y - circle->y;
    return 1;
}
