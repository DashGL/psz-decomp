//cpp
// flags: -O4,s
struct Vec3 { union { struct { int x, y, z; }; int w[3]; }; };
struct Query {
    int id, field4, field8;
    Vec3 position;
    unsigned short yaw, angle;
    unsigned flags;
};

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))

extern "C" {
extern int DAT_020fc988;
extern int DAT_overlay_30__0219aff0[];
extern const short DAT_020ed83c[];
extern void FUN_overlay_30__02199cd8(Query *);
extern void FUN_overlay_30__02199d04(Query *, int);
extern void FUN_overlay_30__02199d30(Query *, int);
extern int FUN_020865fc(Query *);
extern int FUN_overlay_30__0219a36c(void *);
extern void FUN_02037910(void *, void *);
extern void FUN_02036348(Vec3 *, Vec3 *, Vec3 *);
}

extern "C" int FUN_overlay_30__02199ac0(void *self) {
    void *actor = P(self, 4);
    unsigned short yaw = H(actor, 0x44);
    Vec3 *position = (Vec3 *)((char *)actor + 0x38);
    Query query;
    Vec3 offset, shifted;
    int index;

    if ((I(self, 0x6c) <= DAT_020fc988) ? 1 : 0) {
        FUN_overlay_30__02199cd8(&query);
        query.position = *position;
        query.yaw = yaw;
        query.angle = 0x11c7;
        query.flags |= 4;
        FUN_overlay_30__02199d04(&query, 0x7000);
        FUN_overlay_30__02199d30(&query, 0x19000);
        query.id = I(self, 0x50);
        if (FUN_020865fc(&query) && FUN_overlay_30__0219a36c(actor)) {
            FUN_02037910(self, P(self, 0x40));
            I(self, 0x6c) = DAT_overlay_30__0219aff0[8];
            return 1;
        }
    }
    if ((I(self, 0x64) <= DAT_020fc988) ? 1 : 0) {
        FUN_overlay_30__02199cd8(&query);
        query.position = *position;
        query.yaw = yaw;
        query.angle = 0xf1c;
        query.flags |= 4;
        FUN_overlay_30__02199d04(&query, 0x4000);
        FUN_overlay_30__02199d30(&query, 0x8000);
        query.id = I(self, 0x50);
        if (FUN_020865fc(&query)) {
            I(self, 0x5c) = 1;
            if (FUN_overlay_30__0219a36c(actor) && ((I(self, 0x60) <= DAT_020fc988) ? 1 : 0)) {
                FUN_02037910(self, P(self, 0x38));
                I(self, 0x64) = DAT_overlay_30__0219aff0[10];
                return 1;
            }
        }
    }
    if ((I(self, 0x68) <= DAT_020fc988) ? 1 : 0) {
        index = (yaw >> 4) * 2;
        offset.x = DAT_020ed83c[index];
        offset.y = 0;
        offset.z = DAT_020ed83c[index + 1];
        offset.x = (int)(((long long)offset.x * 0x4000 + 0x800) >> 12);
        offset.y = (int)(((long long)offset.y * 0x4000 + 0x800) >> 12);
        offset.z = (int)(((long long)offset.z * 0x4000 + 0x800) >> 12);
        FUN_overlay_30__02199cd8(&query);
        FUN_02036348(&shifted, position, &offset);
        query.position = shifted;
        query.yaw = yaw;
        query.angle = 0x1000;
        query.flags |= 4;
        FUN_overlay_30__02199d04(&query, 0x4000);
        FUN_overlay_30__02199d30(&query, 0x7000);
        query.id = I(self, 0x50);
        if (FUN_020865fc(&query)) {
            I(self, 0x5c) = 1;
            if ((I(self, 0x60) <= DAT_020fc988) ? 1 : 0) {
                FUN_02037910(self, P(self, 0x3c));
                I(self, 0x68) = DAT_overlay_30__0219aff0[9];
                return 1;
            }
        }
    }
    return 0;
}
