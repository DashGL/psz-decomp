// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
typedef struct Desc {
    int distance;
    Vec offset;
    Vec position;
    Vec scale;
    int kind, a44, a48, fallback, a56, a60;
} Desc;

extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_020bbfbc(Vec *, unsigned);
extern char *FUN_overlay_19__02198500(void *, int);
extern int FUN_overlay_19__02198418(void *);
extern int FUN_overlay_19__02198438(void *, void *);
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_19__0219933c(void *, const Desc *);

void FUN_overlay_19__0219bc10(char *self) {
    char *owner = *(char **)(self + 4);
    char *target;
    Desc d;
    Vec forward, result, scaled, rotated;
    void *object;

    d.distance = 0;
    FUN_02035408(&d.offset, 0, 0, 0);
    FUN_02035408(&d.position, 0, 0, 0);
    FUN_02035408(&d.scale, 4096, 4096, 4096);
    d.kind = -1;
    d.a44 = 0;
    d.a48 = 0;
    d.fallback = 0;
    d.a56 = 0;
    d.a60 = 0;

    d.distance = 204800;
    d.a56 = 1;
    d.a48 = 1;
    d.kind = 3;

    target = FUN_overlay_19__02198500(owner, *(int *)(self + 16));
    if (target) {
        d.position = *(Vec *)(target + 12);
    } else {
        unsigned short angle;
        Vec *pos;
        long long x, y, z;
        forward.x = 0;
        forward.y = 0;
        forward.z = 4096;
        angle = *(unsigned short *)(owner + 0x44);
        pos = (Vec *)(owner + 0x38);
        rotated = forward;
        FUN_020bbfbc(&rotated, angle);
        x = (long long)rotated.x * 102400;
        y = (long long)rotated.y * 102400;
        z = (long long)rotated.z * 102400;
        FUN_02035408(&scaled, (int)((x + 2048) >> 12), (int)((y + 2048) >> 12), (int)((z + 2048) >> 12));
        FUN_02035408(&result, scaled.x + *(int *)(owner + 0x38), scaled.y + pos->y, scaled.z + pos->z);
        d.position = result;
        d.fallback = 1;
    }
    if (FUN_overlay_19__02198418(owner) == 1) {
        object = FUN_020ba894(124);
        if (object) {
            object = FUN_overlay_19__0219933c(object, &d);
        }
        FUN_overlay_19__02198438(owner, object);
    }
}
