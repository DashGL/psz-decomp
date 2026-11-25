//cpp
// flags: -O4,s
struct Record {
    unsigned int w[5];
    unsigned int Get() const { return w[0]; }
};
struct Vector {
    int v[3];
    Vector() {}
    Vector(int x, int y, int z) { v[0] = x; v[1] = y; v[2] = z; }
    Vector operator-(const Vector &o) const {
        return Vector(v[0] - o.v[0], v[1] - o.v[1], v[2] - o.v[2]);
    }
};
struct Obj {
    char pad[0x9c];
    Vector pos;
};
extern "C" {
extern Obj *DAT_02108d04;
extern Record FUN_02032dfc(void *);
extern int FUN_0206d45c(const Record &);
extern int FUN_0205c86c(const Vector &);
}
static inline int IsZero(char *s) { return (*(signed char *)(s + 0x14) == 0) ? 1 : 0; }
static inline int IsOne(char *s) { return (*(signed char *)(s + 0x14) == 1) ? 1 : 0; }
#pragma always_inline on
static inline int GetPos(char *s, Vector *out) {
    if (*(int *)(s + 0x68)) {
        *out = *(Vector *)(s + 0x5c);
        return 1;
    }
    out->v[2] = 0;
    out->v[1] = 0;
    out->v[0] = 0;
    return 0;
}
extern "C" int FUN_02032d40(char *s) {
    if (IsZero(s)) return 0;
    if (FUN_0206d45c(FUN_02032dfc(s))) return 0;
    if (FUN_02032dfc(s).Get() == 8) return 0;
    if (IsOne(s)) {
        Vector saved;
        if (GetPos(s, &saved)) {
            Obj *m = DAT_02108d04;
            if (m) {
                const Vector &p = m->pos;
                if (FUN_0205c86c(p - saved) <= 0xa000) return 0;
            }
        }
    }
    return 1;
}
