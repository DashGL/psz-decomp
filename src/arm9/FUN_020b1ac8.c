// flags: -O4,s
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u32 x, y, z;
} Vec;

typedef struct {
    short x, y;
} ScreenPos;

extern void FUN_020345f0(Vec *, const void *);
extern int FUN_02090c20(void);
extern void FUN_02090f74(ScreenPos *, int, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, u32);
extern void FUN_020b0f2c(void *, int, void *);
extern void FUN_020b1df0(void *);

#define PLAY_SE(id, vol) do { \
    Vec pos; \
    ScreenPos sp; \
    FUN_020345f0(&pos, s + 0x34); \
    FUN_02090f74(&sp, FUN_02090c20(), &pos, 0); \
    FUN_020c193c((id), (vol), sp.x, sp.y, *(u32 *)(s + 0x2c)); \
} while (0)

void FUN_020b1ac8(char *s) {
    u8 type;
    if (*(u8 *)(s + 0x31) == 0) {
        if (*(u16 *)(s + 0x74) > 166) {
            *(u32 *)(s + 0x38) += 0x200;
        }
        if (*(u32 *)(s + 0x7c) != 0) {
            Vec pos;
            FUN_020345f0(&pos, s + 0x34);
            *(Vec *)(*(char **)(s + 0x7c) + 0x5c) = pos;
        }
        {
            u16 t = *(u16 *)(s + 0x74);
            if (t == 7) {
                PLAY_SE(0x3e, 1);
            } else if (t == 0x3c) {
                PLAY_SE(0x3e, 1);
            } else if (t >= 0x50 && t % 15 == 0) {
                PLAY_SE(0x3e, 1);
            }
        }
    } else {
        u16 t = *(u16 *)(s + 0x74);
        if (t == 7) {
            PLAY_SE(0x3d, 1);
        } else if (t == 0x44) {
            PLAY_SE(0x3d, 1);
        } else if (t == 0x62) {
            PLAY_SE(0x3d, 2);
        } else if (t == 0x8b) {
            PLAY_SE(0x3d, 0);
        }
    }
    type = *(u8 *)(s + 0x31);
    if (type == 1 && *(u16 *)(s + 0x74) == 0x8b) {
        FUN_020b0f2c(s, 0x49, s + 0x34);
    } else if (type == 0 && *(u16 *)(s + 0x74) > 0xba) {
        FUN_020b1df0(s);
        *(u32 *)(s + 0x70) = 4;
    } else if (type == 1 && *(u16 *)(s + 0x74) > 0xb5) {
        FUN_020b1df0(s);
        *(u32 *)(s + 0x70) = 4;
    }
    *(u16 *)(s + 0x74) = *(u16 *)(s + 0x74) + 1;
}
