// flags: -O4,p
typedef struct {
    int x, y, z;
} Vec;
typedef struct {
    int unk0;
    int unk4;
    int minY;
    int maxY;
} Bounds;
extern Bounds DAT_0219d468;
extern void FUN_overlay_19__021981f4(void *, Vec *);

void FUN_overlay_19__0219c38c(unsigned char *self) {
    unsigned char *owner = *(unsigned char **)(self + 4);
    Vec pos = *(Vec *)(owner + 0x38);
    Vec delta;
    int py = pos.y;
    int dir = *(int *)(self + 12);
    int y;
    const int *p;
    unsigned b;
    p = (dir < 0) ? &DAT_0219d468.minY : &DAT_0219d468.maxY;
    y = py + *p;
    b = (y > DAT_0219d468.minY);
    p = b ? &y : &DAT_0219d468.minY;
    y = *p;
    b = (y < DAT_0219d468.maxY);
    p = b ? &y : &DAT_0219d468.maxY;
    y = *p;
    delta.x = 0;
    delta.y = y - py;
    delta.z = 0;
    FUN_overlay_19__021981f4(owner, &delta);
}
