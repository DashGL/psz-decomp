// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5e, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3_70810;
extern void FUN_020345f0(Vec3_70810 *, void *);
extern void FUN_02035408(Vec3_70810 *, int, int, int);
extern void FUN_0205c8cc(Vec3_70810 *, Vec3_70810 *);
extern unsigned short FUN_0205cc08(int);
unsigned short FUN_02070810(char *a, Vec3_70810 *b) {
    Vec3_70810 spc;
    Vec3_70810 sp0;
    FUN_020345f0(&spc, a + 0x9c);
    FUN_02035408(&sp0, b->x - spc.x, b->y - spc.y, b->z - spc.z);
    if (sp0.x != 0 || sp0.y != 0 || sp0.z != 0) {
        FUN_0205c8cc(&sp0, &sp0);
    }
    unsigned short r0 = FUN_0205cc08(sp0.z);
    if (sp0.x < 0) {
        r0 = 0x10000 - r0;
    }
    return r0;
}
