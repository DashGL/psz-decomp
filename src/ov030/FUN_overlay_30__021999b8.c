//cpp
// flags: -O4,p
struct Vec { int x, y, z; };
extern "C" {
extern int DAT_0219aff0[];
#pragma thumb off
extern int FUN_02000ec4(int);
#pragma thumb on
extern int FUN_020866b4(int, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
}

extern "C" void FUN_overlay_30__021999b8(char *self, const short *amount, const signed char *event) {
    Vec player, difference;
    int increment, distance;
    char *origin;
    const Vec *d;
    if ((event[10] == 1 ? 1 : 0) == 0) return;
    increment = FUN_02000ec4(*amount);
    origin = *(char **)(self + 4) + 0x38;
    if (!FUN_020866b4(*(int *)(self + 0x50), &player)) return;
    FUN_02036348(&difference, &player, (Vec *)origin);
    d = (const Vec *)((unsigned long long)(unsigned int)&difference & 0xFFFFFFFFFFFFFFFFULL);
    distance = (int)(((long long)d->z * d->z + 0x800) >> 12)
             + ((int)(((long long)d->x * d->x + 0x800) >> 12)
              + (int)(((long long)d->y * d->y + 0x800) >> 12));
    if ((distance >= DAT_0219aff0[2] ? 1 : 0) != 0) *(int *)(self + 0x74) += increment;
    if ((distance <= DAT_0219aff0[4] ? 1 : 0) != 0) *(int *)(self + 0x70) += increment;
}
