// flags: -O4,s
typedef struct { int x, y, z; } Vec3;

extern int DAT_0219fc1c[];
extern int DAT_020fc988;
extern void FUN_overlay_20__0219ca7c(void *, Vec3 *);
extern void FUN_overlay_20__02198e78(void *, Vec3 *, int);
extern void FUN_020bc658(int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_0203647c(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_02083d30(Vec3 *, const int *, const Vec3 *);

void FUN_overlay_20__0219c868(void *self) {
    Vec3 *p2; Vec3 *pos; char *actor;
    Vec3 path[6];
    Vec3 target;
    Vec3 dir;
    Vec3 res1, scaled1;
    Vec3 res2, scaled2;
    Vec3 res3, scaled3;
    int delta, abs1, neg1, abs2, neg2, half_delta, half, side1, side2;
    int scale1, range1, abs_x, px, abs_dx1, dx1;
    int scale2, abs_dx2, dx2;
    int scale3, range3, abs_dx3, dx3;
    unsigned b;

    actor = *(char **)((char *)self + 4);
    pos = (Vec3 *)(actor + 0x38);
    FUN_overlay_20__0219ca7c(self, &target);
    delta = target.z - pos->z;
    FUN_020bc658(&abs1, &delta);
    b = (abs1 < DAT_0219fc1c[5]);
    if (b != 0) {
        const int *p;
        b = (delta > DAT_020fc988);
        if (b != 0) {
            p = &DAT_0219fc1c[5];
        } else {
            neg1 = -DAT_0219fc1c[5];
            p = &neg1;
        }
        delta = *p;
    } else {
        FUN_020bc658(&abs2, &delta);
        b = (abs2 < DAT_0219fc1c[6]);
        if (b != 0) {
            const int *p;
            b = (delta > DAT_020fc988);
            if (b != 0) {
                p = &DAT_0219fc1c[6];
            } else {
                neg2 = -DAT_0219fc1c[6];
                p = &neg2;
            }
            delta = *p;
        }
    }
    path[0] = *pos;
    path[1] = *pos;
    half = 0x800;
    FUN_020bc5cc(&half_delta, &delta, &half);
    path[1].z += half_delta;
    b = (pos->x > DAT_020fc988);
    if (b != 0) {
        FUN_020bc658(&side1, &delta);
        path[1].x += side1;
    } else {
        FUN_020bc658(&side2, &delta);
        path[1].x -= side2;
    }
    path[2] = *pos; p2 = &path[2];
    path[2].z += delta;
    FUN_02036348(&dir, &target, p2);
    dir.y = DAT_020fc988;
    FUN_02036368(&dir);

    dx1 = dir.x;
    px = p2->x;
    FUN_020bc658(&abs_x, &px);
    range1 = abs_x - DAT_0219fc1c[14];
    FUN_020bc658(&abs_dx1, &dx1);
    FUN_020bc610(&scale1, &range1, &abs_dx1);
    FUN_02083d30(&scaled1, &scale1, &dir);
    FUN_0203647c(&res1, p2, &scaled1);
    path[3] = res1;
    path[3].y = DAT_0219fc1c[11];

    dx2 = dir.x;
    FUN_020bc658(&abs_dx2, &dx2);
    FUN_020bc610(&scale2, &DAT_0219fc1c[15], &abs_dx2);
    FUN_02083d30(&scaled2, &scale2, &dir);
    FUN_0203647c(&res2, &path[3], &scaled2);
    path[4] = res2;

    dx3 = dir.x;
    range3 = DAT_0219fc1c[10] - DAT_0219fc1c[14];
    FUN_020bc658(&abs_dx3, &dx3);
    FUN_020bc610(&scale3, &range3, &abs_dx3);
    FUN_02083d30(&scaled3, &scale3, &dir);
    FUN_0203647c(&res3, &path[4], &scaled3);
    path[5] = res3;
    path[5].y = DAT_0219fc1c[9];

    FUN_overlay_20__02198e78(actor, path, 6);
}
