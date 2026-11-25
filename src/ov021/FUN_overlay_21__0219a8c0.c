//cpp
// flags: -O4,s
#pragma always_inline on
struct Vec3 {
    int x, y, z;
    inline void Set(int a, int b, int c) { x = a; y = b; z = c; }
};
struct Fx {
    int v;
    inline Fx() {}
    inline Fx(int x) : v(x) {}
    inline int operator>(const Fx &o) const { return (v > o.v) ? 1 : 0; }
};
struct Owner {
    char pad0[0x44];
    unsigned short yaw;
    char pad1[0xfc - 0x46];
    Vec3 pos;
};
struct Player {
    char pad0[0x9c];
    Vec3 pos;
};
struct Self {
    int f0;
    Owner *owner;
    char pad[0x8c - 8];
    int targetIdx;
};
extern "C" {
extern short DAT_020edd7c[];
extern void *DAT_02108cf4;
extern short DAT_020ed83c[];
extern Fx DAT_020fc988;
extern void *FUN_020352a4(void *, int);
extern Player *FUN_02039200(void *);
extern int FUN_0203ae60(void *);
extern int FUN_0203bf3c(void *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
#pragma thumb off
extern int FUN_0205c7ac(const Vec3 *, const Vec3 *);
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on

static inline int SinIdx(int idx) { return DAT_020ed83c[(idx >> 4) * 2]; }
static inline int CosIdx(int idx) { return DAT_020ed83c[(idx >> 4) * 2 + 1]; }

int FUN_overlay_21__0219a8c0(Self *self) {
    Owner *owner = self->owner;
    Vec3 origin = owner->pos;
    int result = -1;
    int i = 0;
    int threshold = DAT_020edd7c[10];
    for (; i <= 3; i++) {
        Player *player = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
        if (player && !FUN_0203ae60(player) && FUN_0203bf3c(player)) {
            const Vec3 &p = player->pos;
            Vec3 target;
            target.x = p.x;
            target.y = p.y;
            target.z = p.z;
            Vec3 diff;
            FUN_02036348(&diff, &target, &origin);
            FUN_02036368(&diff);
            unsigned short yaw = owner->yaw;
            int back = (unsigned short)(yaw + 0x8000);
            Vec3 dir1;
            dir1.Set(SinIdx(back), 0, CosIdx(back));
            if (FUN_0205c7ac(&diff, &dir1) > threshold) {
                return -1;
            }
            Vec3 dir2;
            dir2.Set(SinIdx(yaw), 0, CosIdx(yaw));
            Fx dot(FUN_0205c7ac(&diff, &dir2));
            if (dot > DAT_020fc988) {
                self->targetIdx = i;
                unsigned short angle = FUN_0205c9e4(diff.x, diff.z);
                result = (int)(((unsigned int)(unsigned short)(angle + 0x9000)) >> 13) % 8;
            }
        }
    }
    return result;
}
}
