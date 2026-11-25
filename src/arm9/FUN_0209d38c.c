// flags: -O3,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    int x, y, z;
} Vec3;

typedef struct {
    u16 h0;      /* 0x00 */
    u16 h2;      /* 0x02 */
    u16 h4[5];   /* 0x04..0x0d */
    u16 pad0e;   /* 0x0e */
    int w10;     /* 0x10 */
    int w14;     /* 0x14 */
    int w18;     /* 0x18 */
    int flags;   /* 0x1c */
    Vec3 pos;    /* 0x20 */
    Vec3 scale;  /* 0x2c */
    u16 rot[4];  /* 0x38 */
    int w40;     /* 0x40 */
    int w44;     /* 0x44 */
    int w48;     /* 0x48 */
    int w4c;     /* 0x4c */
    int w50;     /* 0x50 */
    int w54;     /* 0x54 */
    int w58;     /* 0x58 */
    int w5c;     /* 0x5c */
    int w60;     /* 0x60 */
} Desc;

typedef struct {
    u8 pad00[0x1c];
    Vec3 pos;          /* 0x1c */
    u8 pad28[0x06];
    u8 state;          /* 0x2e */
    u8 pad2f[0x1d];
    u8 *flagPtr;       /* 0x4c */
    u8 sub50[0xe8];    /* 0x50 */
    u8 sub138[0x08];   /* 0x138 */
    u8 sub140[0x08];   /* 0x140 */
    int flags;         /* 0x148 */
    u16 timer;         /* 0x14c */
    u16 count;         /* 0x14e */
} Obj;

extern u8 DAT_0211c844[];
extern s16 DAT_020ed83c[];

extern int FUN_02030700(void *);
extern int FUN_0205c520(int, int);
extern u32 FUN_0209d630(void *, u32);
extern void FUN_02030da8(void *, void *);
extern void FUN_0209d5f8(void *, void *, int);
extern void FUN_020bce3c(void *);
extern void FUN_02030808(void *, int, int);
extern void FUN_02035408(void *, int, int, int);
extern void FUN_02046d94(void *, int, int);
extern void FUN_02099f50(void *);
extern void FUN_02033658(int, int, void *);
extern void FUN_0203041c(void *);

static inline int FX_Mul(int a, int b)
{
    return (int)(((long long)a * b + 0x800LL) >> 12);
}

void FUN_0209d38c(Obj *s)
{
    Desc desc;
    u8 packet[12];
    Vec3 base;
    Vec3 pos;
    Vec3 scale;
    Vec3 sound;
    u8 key[4];
    u16 angle;
    int x;
    int y;
    int z;

    if (s->state == 1) {
        if (FUN_02030700(s->sub140)) {
            int flag = 1;
            if ((*s->flagPtr & 1) == 0) {
                flag = 0;
            }
            if (flag == 0) {
                if ((s->flags & 1) == 0) {
                    FUN_02030da8(key, s);
                    FUN_0209d5f8(packet, key, 0);
                    FUN_020bce3c(packet);
                    s->flags |= 1;
                    FUN_02030808(s->sub138, 1, 0);
                }
            }
        }
    } else if (s->state == 2) {
        if (s->count < 3) {
            s->timer++;
            if (s->timer > 2) {
                int i;
                int index;
                int dx, dz;
                s->timer -= FUN_0209d630(DAT_0211c844, 4) + 1;
                angle = (u16)FUN_0209d630(DAT_0211c844, 0);
                x = FUN_0205c520(FUN_0209d630(DAT_0211c844, 0xfff), 0x5000) + 0x1ccd;
                y = FUN_0205c520(FUN_0209d630(DAT_0211c844, 0xfff), 0x5000) + 0x1ccd;
                z = FUN_0205c520(FUN_0209d630(DAT_0211c844, 0xfff), 0x5000) + 0x1ccd;

                desc.h0 = 0xffff;
                desc.h2 = 0xffff;
                for (i = 0; i < 5; i++) {
                    desc.h4[i] = 0xffff;
                }
                desc.w10 = -1;
                desc.w14 = -1;
                desc.w18 = 0x1000;
                desc.flags = 0;
                FUN_02035408(&desc.pos, 0, 0, 0);
                FUN_02035408(&desc.scale, 0x1000, 0x1000, 0x1000);
                desc.rot[0] = 0;
                desc.rot[1] = 0;
                desc.rot[2] = 0;
                desc.rot[3] = 0;
                desc.w40 = -1;
                desc.w44 = -1;
                desc.w48 = -1;
                desc.w4c = -1;
                desc.w50 = 0;
                desc.flags |= 2;
                desc.w54 = 0x95;
                desc.w58 = -1;
                desc.w5c = 0;
                desc.w60 = 0;
                desc.w54 = 0x28;

                base = s->pos;
                index = (u16)((s->count + 1) * 0x5555) >> 4;
                dx = FX_Mul(DAT_020ed83c[index * 2 + 1], 0x2333);
                dz = FX_Mul(DAT_020ed83c[index * 2], 0x2333);
                FUN_02035408(&pos, base.x + dx, base.y + 0x2000, base.z + dz);
                desc.pos = pos;
                scale.x = x;
                scale.y = y;
                scale.z = z;
                desc.scale = scale;
                desc.rot[2] = angle;
                FUN_02046d94(&desc, 0, 0);
                s->count++;
            }
            FUN_02099f50(s->sub50);
        } else if ((s->flags & 2) == 0) {
            sound = s->pos;
            FUN_02033658(4, 8, &sound);
            s->flags |= 2;
        }
    }
    FUN_0203041c(s);
}
