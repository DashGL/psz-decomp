// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_020fc988;
extern unsigned char *DAT_02108d04;
extern void FUN_0205c8cc(const Vec *, Vec *);
extern unsigned short FUN_0205cc08(int);

void FUN_overlay_23__0219af6c(unsigned char *self) {
    unsigned char *owner = *(unsigned char **)(self + 4);
    unsigned char *target;
    Vec delta;
    unsigned short angle;
    *(int *)(self + 24) = DAT_020fc988;
    *(unsigned short *)(self + 20) = *(unsigned short *)(owner + 68);
    target = DAT_02108d04;
    if (target) {
        const Vec *op=(const Vec *)(owner+0x38); const Vec *tp=(const Vec *)(target+0x9c);
        int x = tp->x - op->x; int z = tp->z - op->z; int y = tp->y - op->y;
        delta.x = x; delta.y = y; delta.z = z;
        delta.y = 0;
        if (delta.x != 0 || delta.y != 0 || delta.z != 0) {
            FUN_0205c8cc(&delta, &delta);
        }
        angle = FUN_0205cc08(delta.z);
        if (delta.x < 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        *(unsigned short *)(self + 22) = angle;
    } else {
        *(unsigned short *)(self + 22) = *(unsigned short *)(self + 20);
    }
}
