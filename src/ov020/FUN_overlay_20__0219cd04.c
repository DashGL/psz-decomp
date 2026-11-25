// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void *FUN_02035408(void *, int, int, int);
extern void FUN_overlay_20__02198e78(void *, void *, int);
extern void FUN_overlay_20__02198f08(void *, int);
extern void FUN_overlay_20__02198f20(void *, int);
extern void FUN_overlay_20__02198fc0(void *, int);
extern void FUN_overlay_20__02198ff0(void *, int);
extern void FUN_overlay_20__02199030(void *, int);
struct Self_0219cd04 {
    int f00;
    int *owner;
    int pad[4];
    Vec pos;
};
void FUN_overlay_20__0219cd04(struct Self_0219cd04 *self) {
    int *owner = self->owner;
    Vec points[2];
    Vec *p = &self->pos;
    points[0] = *(Vec *)(owner + 14);
    FUN_02035408(points + 1, self->pos.x, p->y + 0x5000, p->z);
    FUN_overlay_20__02198e78(owner, points, 2);
    FUN_overlay_20__02198f08(owner, 2048);
    FUN_overlay_20__02198f20(owner, 20);
    FUN_overlay_20__02198fc0(owner, 1);
    FUN_overlay_20__02198ff0(owner, 1);
    FUN_overlay_20__02199030(owner, 1);
}
