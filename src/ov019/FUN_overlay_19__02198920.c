//cpp
// flags: -O4,s
struct Vec { int x, y, z; };
struct Obj { int pad[14]; Vec pos; const Vec &getPos() const { return pos; } };
extern "C" int FUN_02036f7c(void *, Vec *);
extern "C" void FUN_overlay_19__02198920(Vec *out, Obj *p) {
    out->x = 0;
    out->y = 0;
    out->z = 0;
    FUN_02036f7c(p, out);
    const Vec &pos = p->getPos();
    out->x += pos.x;
    out->y += pos.y;
    out->z += pos.z;
}
