// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int v[12]; } M43;
typedef struct { int v[9]; } M33;
typedef struct { int w[8]; } Body8;
typedef struct { int head; Body8 body; } Shape9;

#define I(p,o) (*(int *)((char *)(p) + (o)))
#define P(p,o) (*(void **)((char *)(p) + (o)))
#define H(p,o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p,o) (*(Vec *)((char *)(p) + (o)))

extern Vec DAT_0219bb60;
extern Vec DAT_0219c03c;
extern Vec DAT_0219c030;
extern Vec UNK_0219c030;
extern void *DAT_02108d5c;

extern void *FUN_02036c88(void *, int);
extern void *FUN_02075040(void *, int);
extern unsigned short *FUN_0203ffe8(void *, int, int);
extern void *FUN_02049f0c(void *, int);
extern long long FUN_0200a380(long long, long long);
extern int FUN_0204260c(void *, int, M43 *, M33 *);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02074f94(void *);
extern int FUN_0207f770(void *);
extern unsigned short FUN_0205c9e4(int, int);
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(const Vec *, const M43 *, Vec *);
extern void FUN_020345f0(Vec *, const Vec *);
extern void FUN_0205b0f0(const Vec *, const M33 *, Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_02036848(Vec *, const Vec *);
extern void FUN_0204bf88(void *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_020472cc(void *, int);
extern void FUN_020bf680(void *, const int *, int);
extern void FUN_020c0488(void *);
extern void FUN_020c0484(void *, int);
extern void FUN_020478ec(void *, const void *, const int *, const int *);
extern void FUN_02074fc4(void *, void *, int, int);

void FUN_overlay_28__02199114(void *self)
{
    int request[25];
    M43 matrix;
    M33 basis;
    Vec origin;
    Vec position;
    Vec axis;
    Vec direction;
    Vec offset;
    Vec spawn;
    int descriptor[13];
    int properties[3];
    Shape9 shape;
    Vec scaled;
    int key[2];
    int point[2];
    unsigned short yaw;
    unsigned short angle;
    unsigned short *resource;
    int slot;
    int i;
    void *effect;
    void *projectile;

    FUN_0204260c(FUN_02036c88(self, 0), 8, &matrix, &basis);
    FUN_0200c938(&origin, 12);
    FUN_0205b960(&origin, &matrix, &origin);
    FUN_020345f0(&position, &origin);

    axis = DAT_0219bb60;
    FUN_0205b0f0(&axis, &basis, &axis);
    axis.y = 0;
    FUN_020345f0(&direction, &axis);
    FUN_02036368(&direction);
    yaw = FUN_0205c9e4(direction.x, direction.z);

    offset = DAT_0219c03c;
    FUN_020bbfbc(&offset, yaw);
    FUN_02036848(&position, &offset);
    offset.y = 0;
    FUN_02036368(&offset);
    angle = FUN_0205c9e4(offset.x, offset.z);

    I(self, 0xd4) = FUN_02074e9c(self, 3, 0, 0);
    effect = FUN_02075040(self, I(self, 0xd4));
    if (effect) {
        V(effect, 0x5c) = position;
        I(effect, 0xe4) |= 2;
        H(effect, 0x6a) = yaw;
        FUN_0204bf88(effect);
    }

    slot = FUN_02074f94(self);
    if (slot == -1) {
        return;
    }

    ((unsigned short *)request)[0] = 65535;
    ((unsigned short *)request)[1] = 65535;
    for (i = 0; i < 5; i++) {
        ((unsigned short *)request)[i + 2] = 65535;
    }
    request[4] = -1;
    request[5] = -1;
    request[6] = 4096;
    request[7] = 0;
    FUN_02035408((Vec *)&request[8], 0, 0, 0);
    FUN_02035408((Vec *)&request[11], 4096, 4096, 4096);
    ((unsigned short *)request)[28] = 0;
    ((unsigned short *)request)[29] = 0;
    ((unsigned short *)request)[30] = 0;
    ((unsigned short *)request)[31] = 0;
    request[16] = -1;
    request[17] = -1;
    request[18] = -1;
    request[19] = -1;
    request[20] = 0;
    request[7] |= 2;
    request[21] = 149;
    request[22] = -1;
    request[23] = 0;
    request[24] = 0;

    spawn = position;
    {
        int scale = DAT_0219c030.z;
        long long px = FUN_0200a380((long long)offset.x, (long long)scale);
        long long py = FUN_0200a380((long long)offset.y, (long long)scale);
        long long pz = FUN_0200a380((long long)offset.z, (long long)scale);
        FUN_02035408(&scaled, (int)((px + 2048LL) >> 12), (int)((py + 2048LL) >> 12), (int)((pz + 2048LL) >> 12));
    }
    FUN_02036848(&spawn, &scaled);

    request[22] = I(self, 0xc);
    ((unsigned short *)request)[29] = angle;
    *(Vec *)&request[8] = spawn;
    *(Vec *)&request[11] = UNK_0219c030;
    request[20] = 2;
    request[21] = 56;
    request[24] = 2;

    resource = FUN_0203ffe8(DAT_02108d5c, *(signed char *)P(P(self, 0x14), 0), 1);
    ((unsigned short *)request)[0] = resource[0];
    ((unsigned short *)request)[1] = resource[1];
    for (i = 0; i < 5; i++) {
        ((unsigned short *)request)[i + 2] = resource[i + 2];
    }
    FUN_020472cc(request, 56);

    projectile = FUN_02049f0c(request, 7);
    if (!projectile) {
        return;
    }

    point[0] = position.x;
    point[1] = position.z;
    FUN_020bf680(&shape, point, 2048);
    FUN_020c0488(descriptor);
    descriptor[3] = shape.head;
    *(Body8 *)&descriptor[4] = shape.body;
    descriptor[2] = 4096;
    FUN_020c0484(descriptor, 8);

    properties[2] = 0;
    properties[0] = 2;
    if ((char *)self + 0x64 && FUN_0207f770((char *)self + 0x64) == 3) {
        properties[1] = 3;
    } else {
        properties[1] = 1;
    }
    key[0] = 0;
    key[1] = I(self, 0xc);
    FUN_020478ec(projectile, descriptor, properties, key);
    FUN_02074fc4(self, projectile, slot, 0);
}
