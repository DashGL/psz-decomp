// flags: -O4,s
typedef unsigned short u16;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

extern void *DAT_020f8be8[];
extern const s16 DAT_020ed83c[];
extern void *FUN_02034690(void *);

typedef struct {
    void *vtable;
    u32 pad04[5];
    s32 posX;     // 0x18
    s32 posY;     // 0x1c
    s32 posZ;     // 0x20
    s32 targetX;  // 0x24
    s32 targetY;  // 0x28
    s32 targetZ;  // 0x2c
    s32 upX;      // 0x30
    s32 upY;      // 0x34
    s32 upZ;      // 0x38
    u32 pad3c[12];
    s32 f6c;      // 0x6c
    s32 f70;      // 0x70
    s32 f74;      // 0x74
    s32 f78;      // 0x78
    s32 dist;     // 0x7c
    u16 rotX;     // 0x80
    u16 rotY;     // 0x82
    u16 rotZ;     // 0x84
    u16 f86;      // 0x86
} Cam;

void *FUN_020408f0(Cam *s) {
    s32 idxX, idxY, idxZ;
    s32 sinY, cosY, cosX, sinX, sinZ;

    FUN_02034690(s);
    s->vtable = DAT_020f8be8;
    s->f78 = 0;
    s->rotX = 0x800;
    s->rotY = 0;
    s->rotZ = 0;
    s->dist = 0x5000;
    s->f6c = 0;
    s->f70 = 0;
    s->f74 = 0;
    s->f86 = 0;

    idxX = (s->rotX >> 4) * 2;
    idxY = (s->rotY >> 4) * 2;
    sinY = DAT_020ed83c[idxY];
    cosY = DAT_020ed83c[idxY + 1];
    idxZ = (s->rotZ >> 4) * 2;
    cosX = DAT_020ed83c[idxX + 1];
    s->posX = (cosX * s->dist) >> 12;
    sinX = DAT_020ed83c[idxX];
    s->posY = (sinX * s->dist) >> 12;
    s->posZ = (cosX * s->dist) >> 12;
    s->posX = (s->targetX + s->posX * sinY) >> 12;
    s->posY = s->posY + s->targetY;
    s->posZ = (s->targetZ + s->posZ * cosY) >> 12;
    sinZ = DAT_020ed83c[idxZ];
    s->upX = (s32)(((long long)sinZ * cosY + 0x800) >> 12);
    s->upY = DAT_020ed83c[idxZ + 1];
    s->upZ = -(s32)(((long long)sinZ * sinY + 0x800) >> 12);
    s->targetX = s->f6c;
    s->targetZ = s->f74;
    s->posX += s->f6c;
    s->posY += s->f70;
    s->posZ += s->f74;
    return s;
}
