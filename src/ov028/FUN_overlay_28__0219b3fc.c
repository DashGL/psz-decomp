// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int FUN_020370b8(void *, int, Vec *);
extern int FUN_overlay_28__0219b514(void *, const int *);
extern int FUN_overlay_28__0219b58c(void *, const int *);
extern int FUN_overlay_28__0219b534(void *);
extern void FUN_overlay_28__0219b4f0(void *);
extern void FUN_02037910(void *, int);

void FUN_overlay_28__0219b3fc(char *self) {
    Vec direction;
    long long y, x, z;
    int distance;
    unsigned ok = (*(int *)(self + 8) == *(int *)(self + 16));
    if (!ok) return;
    if (FUN_020370b8(*(void **)(self + 4), *(int *)(self + 0x50), &direction) == 1) {
        x = (long long)direction.x * direction.x;
        y = (long long)direction.y * direction.y;
        z = (long long)direction.z * direction.z;
        distance = (unsigned)((x + 2048) >> 12) + (unsigned)((y + 2048) >> 12) + (unsigned)((z + 2048) >> 12);
        if (FUN_overlay_28__0219b514(self, &distance) == 1) {
            FUN_02037910(self, *(int *)(self + 0x40));
            return;
        }
        if (FUN_overlay_28__0219b58c(self, &distance) == 1) {
            if (FUN_overlay_28__0219b534(self) == 1) {
                FUN_02037910(self, *(int *)(self + 0x44));
            } else {
                FUN_02037910(self, *(int *)(self + 0x48));
            }
            return;
        }
        FUN_02037910(self, *(int *)(self + 0x34));
        *(int *)(self + 0x58) = 0;
    } else {
        FUN_overlay_28__0219b4f0(self);
        FUN_02037910(self, *(int *)(self + 0x4c));
        *(int *)(self + 0x58) = 0;
    }
}
