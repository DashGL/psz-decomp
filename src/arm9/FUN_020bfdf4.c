// flags: -O4,s
typedef unsigned int U;
typedef struct { int x, y; } V;
typedef struct { V center, axis[2]; int extent[2]; } Frame;
typedef struct { V center; int radius; } Circle;

extern void FUN_020c0408(const V *, Frame, V *);
extern void FUN_020bf618(V *, const V *, const V *);
extern void FUN_020bf66c(V *, const V *, const V *);
extern U FUN_020bf7d8(const V *);
extern int FUN_020bf62c(const V *, const V *);
extern int FUN_020c1334(int);
extern void FUN_020bfa04(V *);
extern void FUN_02034e98(V *, int);
extern void FUN_02034e8c(V *, const V *);
extern void FUN_020c020c(V *, const V *, int);
extern void FUN_020bf584(const V *, V *, const Circle *, V *);
#pragma thumb off
extern int FUN_0205c540(U);
extern int FUN_0205c520(int, int);
#pragma thumb reset

int FUN_020bfdf4(const Circle *circle, const Frame *frame, V *out)
{
    V centers[2];
    V axis[2];
    Circle corner;
    V point;
    V dir;
    int extent[2];
    V tmp;
    V tmp2;
    int radius, dx, dy, p, q, s, t, i, found;
    V *cp, *ap;
    long long a1, b1;
    int c1;
    long long a2, b2, c2;

    FUN_020c0408(&circle->center, *frame, &point);
    radius = circle->radius;
    {
        long long r64 = radius;
        dy = circle->center.y - point.y;
        dx = circle->center.x - point.x;
        if ((int)(((long long)dx * dx + 2048) >> 12) + (int)(((long long)dy * dy + 2048) >> 12) >
            (int)((r64 * r64 + 2048) >> 12)) {
            return 0;
        }
    }
    if (!out) {
        return 1;
    }
    FUN_020bf618(&dir, &circle->center, &frame->center);
    if (FUN_020c1334(FUN_0205c540(FUN_020bf7d8(&dir))) <= 4) {
        dir.x = 4096;
        dir.y = 0;
    }
    p = FUN_020bf62c(&dir, &frame->axis[0]);
    q = FUN_020bf62c(&dir, &frame->axis[1]);
    if (FUN_020c1334(p) <= 4) {
        FUN_020bfa04(&dir);
        FUN_02034e98(&dir, frame->extent[1] + radius);
        FUN_020bf66c(&point, &frame->center, &dir);
    } else if (FUN_020c1334(q) <= 4) {
        FUN_020bfa04(&dir);
        FUN_02034e98(&dir, frame->extent[0] + radius);
        FUN_020bf66c(&point, &frame->center, &dir);
    } else {
        if (p > 0 && q > 0) {
            s = 1; t = 1;
        } else if (p > 0 && q < 0) {
            s = 1; t = -1;
        } else if (p < 0 && q > 0) {
            s = -1; t = 1;
        } else {
            s = -1; t = -1;
        }
        FUN_02034e8c(&axis[0], &frame->axis[0]);
        FUN_020c020c(&tmp, &frame->axis[1], (frame->extent[1] + circle->radius) * t);
        FUN_020bf66c(&centers[0], &frame->center, &tmp);
        extent[0] = frame->extent[0];
        FUN_02034e8c(&axis[1], &frame->axis[1]);
        FUN_020c020c(&tmp, &frame->axis[0], (frame->extent[0] + circle->radius) * s);
        FUN_020bf66c(&centers[1], &frame->center, &tmp);
        extent[1] = frame->extent[1];
        FUN_020c020c(&tmp, &frame->axis[0], s * frame->extent[0]);
        FUN_020c020c(&tmp2, &frame->axis[1], t * frame->extent[1]);
        FUN_020bf66c(&corner.center, &tmp, &tmp2);
        corner.center.x += frame->center.x;
        corner.center.y += frame->center.y;
        corner.radius = circle->radius;

        found = 0;
        a1 = dir.y;
        b1 = -dir.x;
        c1 = -((int)((a1 * frame->center.x + 2048) >> 12) +
               (int)((b1 * frame->center.y + 2048) >> 12));
        for (i = 0; i < 2; i++) {
            cp = &centers[i];
            ap = &axis[i];
            a2 = ap->y;
            b2 = -ap->x;
            c2 = -((int)((a2 * cp->x + 2048) >> 12) +
                   (int)((b2 * cp->y + 2048) >> 12));
            point.x = FUN_0205c520((int)(((long long)c1 * b2 + 2048) >> 12) - (int)((c2 * b1 + 2048) >> 12), (int)((b1 * a2 + 2048) >> 12) - (int)((b2 * a1 + 2048) >> 12));
            point.y = FUN_0205c520((int)((a1 * c2 + 2048) >> 12) - (int)((a2 * c1 + 2048) >> 12), (int)((b1 * a2 + 2048) >> 12) - (int)((b2 * a1 + 2048) >> 12));
            FUN_020bf618(&tmp, &point, &frame->center);
            if (FUN_020c1334(FUN_020bf62c(&tmp, ap)) <= extent[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            tmp.x = dir.x; tmp.y = dir.y;
            FUN_020bfa04(&tmp);
            FUN_020bf584(&frame->center, &tmp, &corner, &point);
        }
    }
    FUN_020bf618(out, &point, &circle->center);
    return 1;
}
