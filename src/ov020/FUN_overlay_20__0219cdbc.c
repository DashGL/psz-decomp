// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec { int x, y, z; } Vec;
extern volatile int DAT_overlay_20__0219fc78[];
extern int DAT_020fc988;
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);
extern Vec *FUN_overlay_20__02199068(void *);
extern void FUN_overlay_20__02199070(void *, const Vec *);
extern void FUN_overlay_20__02199084(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
void FUN_overlay_20__0219cdbc(int *self) {
    char *owner = (char *)self[1];
    Vec record, position;
    int delta, velocity, negative, limit;
    delta = FUN_02036c34(owner);
    self[4] = (unsigned)self[4] + (unsigned)DAT_overlay_20__0219fc78[0];
    if (((self[4] > DAT_overlay_20__0219fc78[1]) ? E1 : E0) != 0) self[4] = DAT_overlay_20__0219fc78[1];
    record = *FUN_overlay_20__02199068(owner);
    negative = 0u - (unsigned)self[4];
    FUN_020bc5cc(&velocity, &negative, &delta);
    record.y = velocity;
    FUN_overlay_20__02199070(owner, &record);
    position = *(Vec *)(owner + 56);
    limit = (int)((0u - (unsigned)record.y) * 40u);
    if (self[5] == 0 && ((position.y < limit) ? E1 : E0) != 0) {
        FUN_02040c0c(owner, 0, 8, 4096, 10);
        self[5] = 1;
    }
    if (((position.y <= DAT_020fc988) ? E1 : E0) != 0) position.y = DAT_020fc988;
    *(Vec *)(owner + 56) = position;
    if (FUN_02040d2c(owner, 0)) {
        FUN_overlay_20__02199084(owner);
        *(unsigned *)(owner + 0xec) &= ~16u;
        FUN_02040c0c(owner, 0, 4, 4096, 10);
        FUN_02037924((void *)self[2]);
    }
}
