//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
struct Obj {
    int pad0[14];
    Vec pos;
    int pad1[36];
    int dx, dy, dz;
    const Vec &getPos() const { return pos; }
};
extern "C" void FUN_02035408(Vec *, int, int, int);
extern "C" void FUN_02036384(void *, const Vec *);
extern "C" void FUN_overlay_25__02199c68(Obj *p) {
    Vec v;
    const Vec &pos = p->getPos();
    FUN_02035408(&v, pos.x + p->dx, pos.y + p->dy, pos.z + p->dz);
    FUN_02036384(p, &v);
}
