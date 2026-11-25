// flags: -O4,s
#pragma opt_common_subs off
typedef struct { int x, y, z; } Vec3;
typedef struct { int v[9]; } Mat33;
extern int DAT_0219d918[];
extern unsigned DAT_0219dc04;
extern Vec3 DAT_0219d924;
extern int FUN_overlay_23__0219a808(void *, Vec3 *, Mat33 *, int);
extern void *FUN_overlay_23__0219a628(void *);
#pragma thumb off
extern void FUN_0205b0f0(Vec3 *, Mat33 *, Vec3 *);
#pragma thumb on
extern int FUN_02074e9c(void *, int, int, int), FUN_02090c20(void);
extern void *FUN_02075040(void *, int);
extern void FUN_02075068(void *, int), FUN_02072724(void *, int), FUN_overlay_23__0219a48c(void *);
extern void FUN_02090f74(short *, int, Vec3 *, int), FUN_020c193c(int, int, int, int, int);
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
void FUN_overlay_23__0219a664(void *actor, int index)
{
    Vec3 position;
    Mat33 rotation;
    Vec3 axis;
    short screen[2];
    void *entry, *effect;
    int speed, handle;
    if (!FUN_overlay_23__0219a808(actor, &position, &rotation, index)) return;
    entry = FUN_overlay_23__0219a628(actor);
    if (!entry) return;
    V(entry, 0xc) = position;
    axis.x = 0; axis.y = 0; axis.z = 0x1000;
    V(entry, 0) = axis;
    FUN_0205b0f0(&V(entry, 0), &rotation, &V(entry, 0));
    speed = DAT_0219d918[1];
    I(entry, 0) = (int)(((long long)I(entry, 0) * speed + 0x800) >> 12);
    {
        long long s = speed;
        I(entry, 4) = (int)(((long long)I(entry, 4) * s + 0x800) >> 12);
        I(entry, 8) = (int)(((long long)I(entry, 8) * s + 0x800) >> 12);
    }
    I(entry, 0x1c) = FUN_02074e9c(actor, 4, 1, 0);
    effect = FUN_02075040(actor, I(entry, 0x1c));
    if (effect) {
        V(effect, 0x5c) = position;
        *(Mat33 *)((char *)effect + 0x70) = rotation;
    } else {
        FUN_02075068(actor, I(entry, 0x1c));
        FUN_02072724(actor, I(entry, 0x20));
        FUN_overlay_23__0219a48c(entry);
        return;
    }
    I(entry, 0x24) |= 1;
    handle = FUN_02074e9c(actor, 3, 0, 0);
    effect = FUN_02075040(actor, handle);
    if (effect) {
        V(effect, 0x5c) = position;
        if (!(DAT_0219dc04 & 1)) {
            DAT_0219d918[3] = 0xc00;
            DAT_0219d918[4] = 0xc00;
            DAT_0219d918[5] = 0xc00;
            DAT_0219dc04 |= 1;
        }
        V(effect, 0x50) = DAT_0219d924;
        I(effect, 0xe4) |= 0x10000;
    }
    FUN_02090f74(screen, FUN_02090c20(), &position, 0);
    FUN_020c193c(24, 3, screen[0], screen[1], 4);
}
