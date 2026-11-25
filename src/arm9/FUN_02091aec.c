//cpp
// flags: -O4,s
struct Vec3 {
    int x, y, z;
};

extern "C" {
extern Vec3 FUN_02035408(int, int, int);
extern int FUN_0205c86c(Vec3 *);
extern int FUN_02009c84(int);
extern int FUN_0200923c(int, int);
extern int FUN_02009f00(int, int);
extern int FUN_02009c50(int);
extern void FUN_020bc610(int *, int *, int *);
extern Vec3 DAT_020fc958;
}

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual int v2();
    int f04;
    Vec3 *pts;
    int f0c;
    int count;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
};

extern "C" int FUN_02091aec(Obj *a0) {
    int sp0c;
    int sp08;
    int sp04;
    if (a0->count <= 0 || a0->pts == 0 || a0->f14 <= 0 || a0->f0c == 0) {
        return 0;
    }
    if (a0->f14 > 0) {
        sp0c = 0;
        Vec3 *r3 = &DAT_020fc958;
        for (int r4 = 0; r4 < a0->count; r4++) {
            Vec3 *r7 = &a0->pts[r4];
            Vec3 sp1c = FUN_02035408(r7->x - r3->x, r7->y - r3->y, r7->z - r3->z);
            sp0c += FUN_0205c86c(&sp1c);
            r3 = &a0->pts[r4];
        }
        sp04 = FUN_02009c50(a0->f14 > 0
            ? FUN_0200923c(0x3f000000, FUN_02009c84(a0->f14 << 12))
            : FUN_02009f00(FUN_02009c84(a0->f14 << 12), 0x3f000000));
        FUN_020bc610(&sp08, &sp0c, &sp04);
        a0->f24 = sp08;
    }
    a0->f18 = a0->v2();
    return a0->f18;
}
