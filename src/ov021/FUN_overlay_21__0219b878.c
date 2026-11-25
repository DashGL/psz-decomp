// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int target, min, max; Vec3 position; unsigned short yaw, span; unsigned flags; } Query;
extern Vec3 DAT_020fc958;
extern void FUN_overlay_21__0219b324(void *);
extern int FUN_overlay_21__0219b5e4(void *), FUN_020868f0(Vec3 *), FUN_020866b4(int, Vec3 *), FUN_020865fc(Query *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_21__0219b878(void *self)
{
    void *owner = P(self, 8), *actor;
    switch (I(self, 0x14)) {
    case 0:
        actor = P(self, 4);
        if (*(short *)((char *)actor + 0x18) / 5 < I(owner, 0x78) && I(owner, 0x84) == 0) { I(owner, 0x18) = 12; break; }
        if (I(owner, 0x1c) == 1) { I(owner, 0x24) = 1; I(self, 0x14) = 2; break; }
        if (I(self, 0x18) == 0) {
            if (U(self, 0xc) >= U(self, 0x10)) {
                FUN_overlay_21__0219b324(owner);
                if (I(owner, 0x7c) != -1) { I(owner, 0x18) = 6; break; }
                if (U(self, 0xc) < 90) break;
                if (H(owner, 0x4c) != H(owner, 0x4e)) I(self, 0x14) = 1;
                I(self, 0xc) = 0;
            }
        } else if (I(self, 0x18) == 1) {
            if (U(self, 0xc) >= U(self, 0x10)) {
                Vec3 origin = V(actor, 0xfc);
                int yaw = H(actor, 0x108) + 0x8000;
                Query query;
                int target_id;
                Vec3 targetpos;
                query.target = -1;
                query.min = 0;
                query.max = 0;
                query.position = DAT_020fc958;
                query.yaw = 0;
                query.span = 0;
                query.flags = 0;
                query.position = origin;
                query.yaw = (unsigned short)yaw;
                query.span = 0x1000;
                query.flags |= 4;
                query.min = 0;
                query.flags |= 1;
                query.max = 0x190000;
                query.flags |= 2;
                target_id = FUN_020868f0(&V(actor, 0x38));
                targetpos = DAT_020fc958;
                if (!FUN_020866b4(target_id, &targetpos)) break;
                query.target = target_id;
                if (FUN_020865fc(&query)) { I(owner, 0x18) = 7; break; }
                FUN_overlay_21__0219b324(owner);
                if (I(owner, 0x7c) != -1) { I(owner, 0x18) = 8; break; }
                U(self, 0xc) >>= 1;
            }
        }
        break;
    case 1:
        if (FUN_overlay_21__0219b5e4(owner)) { H(owner, 0x52) = 0; I(self, 0x14) = 0; I(self, 0xc) = 0; }
        break;
    case 2:
        if (I(owner, 0x24) == 0) { I(self, 0x14) = 0; I(self, 0xc) = 0; }
        break;
    }
    ++I(self, 0xc);
}
