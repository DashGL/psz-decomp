// flags: -O4,s
typedef struct {
    int v;
} Fx;

typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    char pad0[0x24];
    Fx x;
    Fx z;
} SubFx;

extern unsigned int DAT_0219ff48;
extern Vec3 DAT_0219f9d4;
extern Vec3 DAT_0219f9e0;
extern Vec3 DAT_0219f9ec;
extern Vec3 DAT_0219f9f8;
extern Vec3 DAT_0219fa04;
extern Vec3 DAT_0219fa10;

extern void FUN_overlay_20__02198ff0(void *owner, int flag);
extern void FUN_overlay_20__02199010(void *owner, int flag);
extern void FUN_overlay_20__02199030(void *owner, int flag);
extern void FUN_overlay_20__02198fc0(void *owner, int flag);
extern void FUN_overlay_20__02198fe0(void *owner, int val);
extern void FUN_overlay_20__02198fe8(void *owner, int val);
extern void FUN_overlay_20__02198e78(void *owner, Vec3 *waypoints, int count);
extern void FUN_overlay_20__02198f10(void *owner, int val);
extern void FUN_overlay_20__02198f20(void *owner, int val);
extern void FUN_02040c0c(void *owner, int a1, int anim_id, int speed, int a4);
extern void FUN_02044570(void *owner, int idx, int flag);

void FUN_overlay_20__0219a874(char *self) {
    char *owner = *(char **)(self + 4);

    *(unsigned int *)(owner + 0xec) |= 0x10;
    FUN_overlay_20__02198ff0(owner, 1);
    FUN_overlay_20__02199010(owner, 1);
    FUN_overlay_20__02199030(owner, 1);
    FUN_overlay_20__02198fc0(owner, 1);
    FUN_overlay_20__02198fe0(owner, 0x2800);
    FUN_overlay_20__02198fe8(owner, 0xa000);

    if (!(DAT_0219ff48 & 1)) {
        DAT_0219f9d4.x = 0x1e000;
        DAT_0219f9d4.y = 0xa000;
        DAT_0219f9d4.z = 0;

        DAT_0219f9e0.x = 0x1e000;
        DAT_0219f9e0.y = 0xa000;
        DAT_0219f9e0.z = -0x14000;

        DAT_0219f9ec.x = 0x14000;
        DAT_0219f9ec.y = 0xa000;
        DAT_0219f9ec.z = -0x28000;

        DAT_0219f9f8.x = 0xa000;
        DAT_0219f9f8.y = 0xa000;
        DAT_0219f9f8.z = -0x28000;

        DAT_0219fa04.x = 0;
        DAT_0219fa04.y = 0xa000;
        DAT_0219fa04.z = -0x14000;

        DAT_0219fa10.x = 0;
        DAT_0219fa10.y = 0xa000;
        DAT_0219fa10.z = -0xa000;

        DAT_0219ff48 |= 1;
    }

    *(Vec3 *)(owner + 0x38) = DAT_0219f9d4;
    *(unsigned short *)(owner + 0x44) = 0x8000;
    FUN_overlay_20__02198e78(owner, &DAT_0219f9d4, 6);
    FUN_overlay_20__02198f10(owner, 0x800);
    FUN_overlay_20__02198f20(owner, 0xcd);
    FUN_02040c0c(owner, 0, 0x12, 0x1000, 0);

    {
        Fx *src = (Fx *)&DAT_0219fa10;
        SubFx *sub = (SubFx *)(*(char **)(self + 8) + 0x30);
        sub->x = src[0];
        sub->z = src[2];
    }

    FUN_02044570(owner, 0, 0);
    FUN_02044570(owner, 1, 0);
    FUN_02044570(owner, 2, 0);
    FUN_02044570(owner, 3, 0);

    *(unsigned int *)(owner + 0xec) &= ~0x100u;
}
