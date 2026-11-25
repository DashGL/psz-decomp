// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int w[8]; } Body8;
typedef struct { int head; Body8 body; } Shape9;
extern const int DAT_0219cd04[];
extern const short DAT_020ed83c[];
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern void *DAT_02108d5c;
extern void *FUN_0203ffe8(void *, int, int);
extern void FUN_020472cc(void *, int);
extern int FUN_02074f94(void *);
extern void *FUN_02049f0c(void *, int);
extern void FUN_020bf680(void *, const int *, int);
extern void FUN_020c0488(void *);
extern void FUN_020c0484(void *, int);
extern void FUN_020478ec(void *, const void *, const int *, const int *);
extern void FUN_02074fc4(void *, void *, int, int);

void FUN_overlay_31__02199dd8(unsigned char *actor, unsigned short offset)
{
    int request[25];
    Vec3 pos, ahead;
    int collision[13];
    int params[3];
    Shape9 shape;
    int extra[2], center[2];
    unsigned short yaw;
    unsigned short *definition;
    unsigned char *effect;
    signed char **kind;
    int slot, index, i;
    pos = *(const Vec3 *)(actor + 0x38);
    pos.y += DAT_0219cd04[4];
    yaw = (unsigned short)(offset + *(unsigned short *)(actor + 0x44));
    FUN_0203666c(request);
    request[21] = 49;
    request[22] = *(int *)(actor + 0xc);
    *(Vec3 *)((unsigned char *)request + 0x20) = pos;
    *(unsigned short *)((unsigned char *)request + 0x3a) = yaw;
    FUN_02046d94(request, 0, 3);
    ahead = pos;
    index = (yaw >> 4) << 1;
    ahead.x += DAT_020ed83c[index];
    ahead.z += DAT_020ed83c[index + 1];
    *(Vec3 *)((unsigned char *)request + 0x20) = ahead;
    request[21] = 56;
    if ((*(unsigned int *)(actor + 0xd4) & 1 ? 1 : 0) == 1) request[24] = 3;
    else request[24] = 2;
    kind = *(signed char ***)(actor + 0x14);
    definition = FUN_0203ffe8(DAT_02108d5c, (*kind)[0], 2);
    ((unsigned short *)request)[0] = definition[0];
    ((unsigned short *)request)[1] = definition[1];
    for (i = 0; i < 5; i++) ((unsigned short *)request)[i + 2] = definition[i + 2];
    FUN_020472cc(request, 56);
    request[23] >>= 1;
    slot = FUN_02074f94(actor);
    if (slot != -1) {
        effect = FUN_02049f0c(request, 7);
        if (effect != 0) {
            *(int *)(effect + 0xac) = 0;
            center[0] = pos.x;
            center[1] = pos.z;
            FUN_020bf680(&shape, center, 0x2000);
            FUN_020c0488(collision);
            collision[3] = shape.head;
            *(Body8 *)&collision[4] = shape.body;
            collision[2] = 0x1000;
            FUN_020c0484(collision, 8);
            params[2] = 0;
            params[0] = 2;
            extra[0] = 0;
            params[1] = 1;
            extra[1] = *(int *)(actor + 0xc);
            FUN_020478ec(effect, collision, params, extra);
            FUN_02074fc4(actor, effect, slot, 0);
        }
    }
}
