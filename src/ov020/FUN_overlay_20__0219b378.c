// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
enum { E0 = 0, E1 = 1 };
extern int FUN_overlay_20__02199054(void *);
extern int FUN_overlay_20__02198f3c(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern int DAT_overlay_20__0219fb00[];
extern unsigned int DAT_overlay_20__0219ff58[];
extern const Vec3 DAT_overlay_20__0219fb3c;
extern const short DAT_020ed83c[];
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_overlay_20__02198f08(void *, int);
extern void FUN_overlay_20__021990b0(void *, unsigned short);
extern int FUN_02074e9c(void *, int, int, int);
extern void *FUN_02075040(void *, int);
extern void FUN_0204bf88(void *);
extern int FUN_02090c20(void);
extern void FUN_02090f74(short *, int, const Vec3 *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_overlay_20__0219b4fc(void *);

void FUN_overlay_20__0219b378(unsigned char *self)
{
    unsigned char *actor = *(unsigned char **)(self + 4);
    unsigned char *effect;
    int progress, angle, sine, handle;
    short screen[2];
    int scaled, difference;
    if (FUN_overlay_20__02199054(actor) != 0) {
        progress = FUN_overlay_20__02198f3c(actor);
        if (*(int *)(self + 0x10) == 0 && ((progress > 0x800) ? E1 : E0) != 0) {
            FUN_02040c0c(actor, 0, 20, 0x1000, 10);
            *(int *)(self + 0x10) = 1;
            *(int *)(self + 0x38) = FUN_02072650(actor, 0, 0, 0);
        }
        difference = DAT_overlay_20__0219fb00[13] - DAT_overlay_20__0219fb00[14];
        FUN_020bc5cc(&scaled, &difference, &progress);
        FUN_overlay_20__02198f08(actor, scaled + DAT_overlay_20__0219fb00[14]);
        angle = (int)(((long long)progress * 0x8000 + 0x800) >> 12);
        sine = DAT_020ed83c[(angle >> 4) * 2];
        FUN_overlay_20__021990b0(actor, (unsigned short)(((long long)sine * 0x1000 + 0x800) >> 12));
    } else {
        const Vec3 *actor_pos;
        FUN_overlay_20__021990b0(actor, 0);
        actor_pos = (const Vec3 *)(actor + 0x38);
        handle = FUN_02074e9c(actor, 7, 0, 0);
        effect = (unsigned char *)FUN_02075040(actor, handle);
        if (effect != 0) {
            *(Vec3 *)(effect + 0x5c) = *actor_pos;
            *(unsigned short *)(effect + 0x6a) = *(unsigned short *)(actor + 0x44);
            FUN_0204bf88(effect);
            if ((DAT_overlay_20__0219ff58[1] & 1) == 0) {
                DAT_overlay_20__0219fb00[11] = 0x1400;
                DAT_overlay_20__0219ff58[1] |= 1;
            }
            if ((DAT_overlay_20__0219ff58[2] & 1) == 0) {
                DAT_overlay_20__0219fb00[15] = DAT_overlay_20__0219fb00[11];
                DAT_overlay_20__0219fb00[16] = DAT_overlay_20__0219fb00[11];
                DAT_overlay_20__0219fb00[17] = DAT_overlay_20__0219fb00[11];
                DAT_overlay_20__0219ff58[2] |= 1;
            }
            *(Vec3 *)(effect + 0x50) = DAT_overlay_20__0219fb3c;
        }
        FUN_02090f74(screen, FUN_02090c20(), actor_pos, 1);
        FUN_020c193c(25, 3, screen[0], screen[1], 4);
        FUN_overlay_20__0219b4fc(self);
        *(int *)(self + 0xc) = 1;
    }
}
