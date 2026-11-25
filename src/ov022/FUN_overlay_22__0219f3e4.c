// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { unsigned long long state, multiplier, increment; } Random;
typedef struct { signed char x, y; unsigned char z; signed char w; } Coords;
enum { E0 = 0, E1 = 1 };
extern Random DAT_0211c844;
extern const Vec3 DAT_020fc958;
extern unsigned char DAT_0211a51c[];
extern void FUN_overlay_22__0219f544(void *);
extern void *FUN_overlay_22__0219f13c(void *);
extern void *FUN_overlay_22__0219f1f0(void *);
extern void FUN_overlay_22__021a05a8(void *, signed char *, signed char *);
extern void FUN_overlay_22__0219c880(void *, int, int);
extern void FUN_overlay_22__0219ed94(void *, int, int);
extern void FUN_overlay_22__0219f12c(void *);
extern void *FUN_overlay_22__0219f14c(void *, unsigned char, int);
extern void FUN_overlay_22__0219f164(void *, const void *);
extern void FUN_overlay_22__0219f200(void *, const void *);
extern void FUN_020bce3c(void *);
extern int FUN_02084bd4(void *);
extern int FUN_02084d00(void *);
extern void FUN_overlay_22__0219f550(void *, const void *);

void FUN_overlay_22__0219f3e4(unsigned char *self, int mode)
{
    Vec3 pos;
    unsigned char packet[24];
    Coords coords;
    unsigned char param1[4], param2[4];
    unsigned char *owner;
    int local;
    FUN_overlay_22__0219f544(&coords);
    FUN_overlay_22__0219f13c(param1);
    FUN_overlay_22__0219f1f0(param2);
    switch (mode) {
    case 1:
        if (*(void **)(self + 0x10) != 0) FUN_overlay_22__021a05a8(*(void **)(self + 0x10), &coords.x, &coords.y);
        DAT_0211c844.state = DAT_0211c844.multiplier * DAT_0211c844.state + DAT_0211c844.increment;
        coords.z = (unsigned char)(((unsigned long long)(unsigned int)(DAT_0211c844.state >> 32) * 256) >> 32);
        FUN_overlay_22__0219c880(param1, 5, -1);
        FUN_overlay_22__0219ed94(param2, 5, -1);
        break;
    case 2:
        pos = DAT_020fc958;
        owner = *(unsigned char **)(self + 0x10);
        if (owner != 0 && *(int *)(owner + 0x34) != 0) pos = *(const Vec3 *)(*(unsigned char **)(owner + 0x38) + 0x10);
        local = (int)((unsigned)pos.x + 0x800u);
        coords.x = local / 4096;
        local = (int)((unsigned)pos.z + 0x800u);
        coords.y = local / 4096;
        coords.z = 0;
        FUN_overlay_22__0219c880(param1, 7, -1);
        FUN_overlay_22__0219ed94(param2, 8, -1);
        break;
    case 3:
        break;
    }
    FUN_overlay_22__0219f12c(packet);
    FUN_overlay_22__0219f544(packet + 12);
    FUN_overlay_22__0219f13c(packet + 16);
    FUN_overlay_22__0219f1f0(packet + 20);
    FUN_overlay_22__0219f14c(packet, 5, 24);
    *(int *)(packet + 4) = *(int *)(self + 0xc);
    packet[12] = coords.x;
    packet[13] = coords.y;
    packet[14] = coords.z;
    packet[15] = coords.w;
    FUN_overlay_22__0219f164(packet + 16, param1);
    FUN_overlay_22__0219f200(packet + 20, param2);
    FUN_020bce3c(packet);
    if ((((FUN_02084bd4(DAT_0211a51c) == 1 && FUN_02084d00(DAT_0211a51c) == 1) ? E1 : E0)) == 1)
        FUN_overlay_22__0219f550(self, packet);
}
