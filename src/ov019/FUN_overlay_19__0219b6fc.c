//cpp
// flags: -O4,s
#pragma always_inline on
struct Vector {
    int v[3];
    inline Vector() { v[0] = 0; v[1] = 0; v[2] = 0; }
    inline Vector(int x, int y, int z) { v[0] = x; v[1] = y; v[2] = z; }
    inline Vector operator-(const Vector &o) const {
        return Vector(v[0] - o.v[0], v[1] - o.v[1], v[2] - o.v[2]);
    }
};
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(int x) : v(x) {}
    inline int operator>(const Fx &o) const { return (v > o.v) ? 1 : 0; }
};
struct Owner {
    char pad[0x38];
    Vector pos;
};
struct Player {
    char pad[0x9c];
    Vector pos;
};
struct Self {
    int f0;
    Owner *owner;
};
extern "C" {
extern void FUN_02036f7c(void *, Vector *);
extern Player *FUN_0208558c(int);
#pragma thumb off
extern int FUN_0205c7ac(const Vector *, const Vector *);
#pragma thumb on
int FUN_overlay_19__0219b6fc(Self *self, const Fx *threshold) {
    Owner *owner = self->owner;
    Vector forward;
    FUN_02036f7c(owner, &forward);
    for (int i = 0; i < 4; i++) {
        Player *player = FUN_0208558c(i);
        if (player) {
            const Vector &playerPos = player->pos;
            const Vector &ownerPos = owner->pos;
            Vector delta = playerPos - ownerPos;
            Fx dot(FUN_0205c7ac(&forward, &delta));
            if (dot > *threshold) {
                return 1;
            }
        }
    }
    return 0;
}
}
