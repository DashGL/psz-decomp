// flags: -O4,s
#pragma opt_propagation off
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    int kind;
    int id;
    Vec3 pos;
    Vec3 vel;
    int scale;
} EffectDesc;

extern const short DAT_020ed83c[];
extern unsigned char DAT_020fc958[];
extern int FUN_overlay_22__0219a9a8(void *, int, Vec3 *, unsigned short *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_02035408(Vec3 *, int, int, int);
extern int FUN_overlay_22__0219fc38(void *, const EffectDesc *);

void FUN_overlay_22__0219af60(unsigned char *self, int index, int id) {
    Vec3 pos;
    Vec3 vel;
    EffectDesc desc;
    unsigned short angle;
    int idx1, idx2, cos1;
    if (FUN_overlay_22__0219a9a8(self, index, &pos, &angle) == 1) {
        idx1 = ((int)(unsigned short)(FUN_02035b60(0x444) + 0x2d8) >> 4) << 1;
        vel = *(const Vec3 *)DAT_020fc958;
        idx2 = ((int)*(unsigned short *)(self + 0x2a) >> 4) << 1;
        cos1 = (int)((((long long)DAT_020ed83c[idx1 + 1] << 12) + 0x800) >> 12);
        vel.x = (int)(((long long)cos1 * DAT_020ed83c[idx2] + 0x800) >> 12);
        vel.y = -(int)((((long long)DAT_020ed83c[idx1] << 12) + 0x800) >> 12);
        vel.z = (int)(((long long)cos1 * DAT_020ed83c[idx2 + 1] + 0x800) >> 12);
        desc.kind = 2;
        desc.id = -1;
        FUN_02035408(&desc.pos, 0, 0, 0);
        FUN_02035408(&desc.vel, 0, 0, 0);
        desc.scale = 0;
        {
            const Vec3 *pp = &pos;
            desc.kind = 0;
            desc.id = id;
            desc.pos = *pp;
            desc.vel = vel;
            desc.scale = 0x3000;
        }
        FUN_overlay_22__0219fc38(*(void **)(self + 4), &desc);
    }
}
