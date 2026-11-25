// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x108, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Vec3_0205ba00 {
    int x, y, z;
};
struct Mat_0205ba00 {
    int m[12];
};
extern void FUN_0205c8cc(struct Vec3_0205ba00 *, struct Vec3_0205ba00 *);
extern void FUN_0205c7e8(struct Vec3_0205ba00 *, struct Vec3_0205ba00 *, struct Vec3_0205ba00 *);
extern int FUN_0205c7ac(struct Vec3_0205ba00 *, struct Vec3_0205ba00 *);

void FUN_0205ba00(struct Vec3_0205ba00 *arg0, struct Vec3_0205ba00 *arg1, struct Vec3_0205ba00 *arg2, struct Mat_0205ba00 *arg3) {
    struct Vec3_0205ba00 v18;
    struct Vec3_0205ba00 v0c;
    struct Vec3_0205ba00 v00;

    v18.x = arg0->x - arg2->x;
    v18.y = arg0->y - arg2->y;
    v18.z = arg0->z - arg2->z;
    FUN_0205c8cc(&v18, &v18);
    FUN_0205c7e8(arg1, &v18, &v0c);
    FUN_0205c8cc(&v0c, &v0c);
    FUN_0205c7e8(&v18, &v0c, &v00);
    arg3->m[0] = v0c.x;
    arg3->m[1] = v00.x;
    arg3->m[2] = v18.x;
    arg3->m[3] = v0c.y;
    arg3->m[4] = v00.y;
    arg3->m[5] = v18.y;
    arg3->m[6] = v0c.z;
    arg3->m[7] = v00.z;
    arg3->m[8] = v18.z;
    arg3->m[9] = -FUN_0205c7ac(arg0, &v0c);
    arg3->m[10] = -FUN_0205c7ac(arg0, &v00);
    arg3->m[11] = -FUN_0205c7ac(arg0, &v18);
}
