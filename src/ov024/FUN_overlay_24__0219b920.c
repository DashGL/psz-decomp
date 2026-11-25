// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int FUN_overlay_24__0219ba78(void *);
extern int FUN_overlay_24__0219ba24(void *, const int *);
extern int FUN_overlay_24__0219ba58(void *, const int *);
extern void FUN_overlay_24__0219ba00(void *);
extern int FUN_020370b8(void *, int, Vec *);
extern void FUN_02037910(void *, int);

enum { E0 = 0, E1 = 1 };

void FUN_overlay_24__0219b920(char *self) {
    Vec direction;
    int distance;
    if (FUN_overlay_24__0219ba78(self) == 1) {
        return;
    }
    if (FUN_020370b8(*(void **)(self + 4), *(int *)(self + 0x4c), &direction) == 1) {
        int dy = direction.y;
        int dx = direction.x;
        int dz = direction.z;
        long long z2 = (long long)dz * dz;
        long long x2 = (long long)dx * dx;
        long long y2 = (long long)dy * dy;
        int rz = (int)((z2 + 2048) >> 12);
        int rx = (int)((x2 + 2048) >> 12);
        int ry = (int)((y2 + 2048) >> 12);
        distance = rz + (rx + ry);
        if (FUN_overlay_24__0219ba24(self, &distance) == 1) {
            FUN_02037910(self, *(int *)(self + 0x40));
            return;
        }
        if (FUN_overlay_24__0219ba58(self, &distance) == 1) {
            FUN_02037910(self, *(int *)(self + 0x3c));
            return;
        }
        FUN_02037910(self, *(int *)(self + 0x34));
    } else {
        int s;
        FUN_overlay_24__0219ba00(self);
        s = *(int *)(self + 0x38);
        if ((s == *(int *)(self + 8) ? E1 : E0) == 0) {
            FUN_02037910(self, s);
        }
    }
}
