// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219fb94[], DAT_0219fba4, DAT_020fc988;
extern unsigned DAT_0219ff68[];
extern short DAT_020ed83c[];
extern void *FUN_02036c88(void *, int);
extern int FUN_020424b4(void *, int), FUN_020866b4(int, Vec3 *), FUN_02036c34(void *);
extern void FUN_020bc658(int *, int *), FUN_020bc5cc(int *, int *, int *);
extern void FUN_overlay_20__02199070(void *, Vec3 *), FUN_overlay_20__02199010(void *, int), FUN_02037924(void *);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))

void FUN_overlay_20__0219ba80(void *self) {
    enum { E0 = 0, E1 = 1 };
    void *actor = P(self, 4), *owner = P(self, 8);
    Vec3 position = *(Vec3 *)((char *)actor + 0x38), target, velocity;
    int cosine, vertical, horizontal, dx, delta, scaled, absolute, adx, apx, px, vx, vy;
    unsigned short angle;

    if (((position.y < DAT_0219fb94[3]) ? E1 : E0) != 0) {
        angle = (unsigned short)((int)((unsigned)((FUN_020424b4(FUN_02036c88(actor, 0), 0) >> 12) - 22) << 15) / 30);
        cosine = DAT_020ed83c[(angle >> 4) * 2 + 1];
        FUN_020bc658(&absolute, &cosine);
        FUN_020bc5cc(&scaled, &DAT_0219fba4, &absolute);
        vertical = DAT_0219fb94[5] + scaled;
        horizontal = 0;
        if (FUN_020866b4(I(self, 0x10), &target)) {
            if (!(DAT_0219ff68[2] & 1)) { DAT_0219fb94[2] = 0x1000; DAT_0219ff68[2] |= 1; }
            if (!(DAT_0219ff68[1] & 1)) { DAT_0219fb94[6] = 0x5000; DAT_0219ff68[1] |= 1; }
            if (!(DAT_0219ff68[0] & 1)) { DAT_0219fb94[1] = 0x19a; DAT_0219ff68[0] |= 1; }
            int posx = *(volatile int *)&position.x; dx = target.x - posx;
            FUN_020bc658(&adx, &dx);
            if (((adx > DAT_0219fb94[2]) ? E1 : E0) != 0) {
                px = posx;
                FUN_020bc658(&apx, &px);
                if (((apx < DAT_0219fb94[6]) ? E1 : E0) != 0) {
                    if (((dx > DAT_020fc988) ? E1 : E0) != 0)
                        horizontal = DAT_0219fb94[1];
                    else
                        horizontal = -DAT_0219fb94[1];
                }
            }
        }
        delta = FUN_02036c34(actor);
        FUN_020bc5cc(&vy, &delta, &vertical);
        FUN_020bc5cc(&vx, &delta, &horizontal);
        velocity.x = vx;
        velocity.y = vy;
        velocity.z = DAT_020fc988;
        FUN_overlay_20__02199070(actor, &velocity);
    } else {
        FUN_overlay_20__02199010(actor, 0);
        FUN_02037924(P(self, 8));
    }
    if (--I(self, 0xc) <= 0)
        I(owner, 0x90) = 0;
}
