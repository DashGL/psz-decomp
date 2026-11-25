// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern unsigned DAT_0219c960[];
extern int DAT_0219c494[];
extern int FUN_overlay_24__02199804(void *, Vec3 *);
extern int FUN_0205c520(int, int);
extern int FUN_02036c34(void *);
extern void FUN_0205c8cc(Vec3 *, Vec3 *);
extern void FUN_overlay_24__02198fbc(void *, Vec3 *, int, unsigned short);
extern unsigned short FUN_0205cc08(int);

void FUN_overlay_24__02199a28(void *self)
{
    Vec3 target, difference, normal;
    void *actor = *(void **)((char *)self + 4);
    int speed, distance, root, scaled, delta;
    unsigned short turn;
    if (!FUN_overlay_24__02199804(*(void **)((char *)self + 8), &target)) return;
    {
        const Vec3 *ap = (const Vec3 *)((char *)actor + 0x38);
        int dx = target.x - *(int *)((char *)actor + 0x38);
        int dy = target.y - ap->y;
        int dz = target.z - ap->z;
        difference.x = dx;
        difference.y = dy;
        difference.z = dz;
        distance = (int)(((long long)dz * dz + 0x800) >> 12) +
                   ((int)(((long long)dx * dx + 0x800) >> 12) +
                    (int)(((long long)dy * dy + 0x800) >> 12));
    }
    normal = difference;
    if (normal.x || normal.y || normal.z) FUN_0205c8cc(&normal, &normal);
    FUN_0205cc08(normal.z);
    speed = 205;
    turn = 63;
    if (!(DAT_0219c960[1] & 1)) {
        DAT_0219c494[1] = 0x64000;
        DAT_0219c960[1] |= 1;
    }
    if (distance < DAT_0219c494[1]) {
        root = FUN_0205c520(DAT_0219c494[1] - distance, DAT_0219c494[1]);
        scaled = (int)(((long long)root * 0x4000 + 0x800) >> 12) + 0x1000;
        turn = (unsigned short)(((long long)scaled * 63 + 0x800) >> 12);
    }
    if (!(DAT_0219c960[0] & 1)) {
        DAT_0219c494[0] = 0x10000;
        DAT_0219c960[0] |= 1;
    }
    if (distance < DAT_0219c494[0]) {
        root = FUN_0205c520(DAT_0219c494[0] - distance, DAT_0219c494[0]);
        scaled = 0x1000 - (int)(((long long)root * 0x555 + 0x800) >> 12);
        speed = (int)(((long long)scaled * 205 + 0x800) >> 12);
    }
    delta = FUN_02036c34(actor);
    FUN_overlay_24__02198fbc(
        actor, &target,
        (int)(((long long)speed * delta + 0x800) >> 12),
        (unsigned short)(((long long)turn * delta + 0x800) >> 12)
    );
}
