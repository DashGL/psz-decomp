//cpp
// flags: -O4,s
struct Vec3 {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

extern "C" {
extern Vec3 DAT_020fc958;
extern signed char DAT_0211a3c4[];
extern short DAT_020ed83c[];
extern int FUN_overlay_22__0219a9a8(void *, int, Vec3 *, unsigned short *);
extern unsigned char *FUN_overlay_22__0219a638(int, int);
extern int FUN_02035b60(int);
extern unsigned short FUN_0205c9e4(int, int);
extern int FUN_overlay_22__0219a408(unsigned short, unsigned short);
extern int FUN_0205c540(int);
extern int FUN_0205c86c(Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_02092654(Vec3 *, int *);
extern void FUN_02035408(Vec3 *, int, int, int);
extern void FUN_overlay_22__0219f7ac(void *, void *);
void FUN_overlay_22__02198b54(unsigned char *self, int slot, int id);
}

struct Request {
    int kind;
    int id;
    Vec3 position;
    Vec3 direction;
    int count;
    int scale;
};

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_22__02198b54(unsigned char *self, int slot, int id) {
    Vec3 position;
    unsigned short angle;
    if (FUN_overlay_22__0219a9a8(self, slot, &position, &angle) != 1) {
        return;
    }
    Vec3 direction = DAT_020fc958;
    unsigned char *target = FUN_overlay_22__0219a638(*(signed char *)(self + 0x14d), 1);
    if (target) {
        int tx = 0;
        int tz = 0;
        switch (DAT_0211a3c4[13]) {
        case 0:
            tx = *(int *)(target + 0x9c);
            tz = *(int *)(target + 0xa4);
            break;
        case 1:
            tx = (*(int *)(target + 0x9c) + *(int *)(target + 0xb4)) / 2;
            tz = (*(int *)(target + 0xa4) + *(int *)(target + 0xbc)) / 2;
            break;
        case 2:
            tx = *(int *)(target + 0xb4);
            tz = *(int *)(target + 0xbc);
            break;
        }
        int jx = FUN_02035b60(0x4000) - 0x2000;
        int jz = FUN_02035b60(0x4000) - 0x2000;
        direction.x = jx + (tx - position.x);
        direction.y = -position.y;
        direction.z = jz + (tz - position.z);
        unsigned short aim = FUN_0205c9e4(direction.x, direction.z);
        int turn = FUN_overlay_22__0219a408(*(unsigned short *)(self + 0x2a), aim);
        int clamp;
        if (turn < -0x2000) {
            clamp = -0x2000;
        } else if (turn > 0x2000) {
            clamp = 0x2000;
        } else {
            clamp = 0;
        }
        if (clamp != 0) {
            int length = FUN_0205c540(fx_mul(direction.x, direction.x) + fx_mul(direction.z, direction.z));
            int idx = ((unsigned short)(*(unsigned short *)(self + 0x2a) + clamp) >> 4) * 2;
            direction.x = fx_mul(length, DAT_020ed83c[idx]);
            direction.z = fx_mul(length, DAT_020ed83c[idx + 1]);
        }
    }
    if (FUN_0205c86c(&direction) <= 41) {
        int idx = (*(unsigned short *)(self + 0x2a) >> 4) * 2;
        direction.x = fx_mul(DAT_020ed83c[idx], 0xf000);
        direction.y = -position.y;
        idx = (*(unsigned short *)(self + 0x2a) >> 4) * 2;
        direction.z = fx_mul(DAT_020ed83c[idx + 1], 0xf000);
    }
    FUN_02036368(&direction);
    int scale = 0x1000;
    FUN_02092654(&direction, &scale);
    Request request;
    request.kind = 2;
    request.id = -1;
    FUN_02035408(&request.position, 0, 0, 0);
    FUN_02035408(&request.direction, 0, 0, 0);
    request.count = 10;
    request.scale = 0;
    if (id != 9 && id == 10) {
        request.kind = 0;
    } else {
        request.kind = 1;
    }
    request.id = id;
    request.position = position;
    request.direction = direction;
    request.scale = 0x3000;
    FUN_overlay_22__0219f7ac(*(void **)(self + 4), &request);
}
