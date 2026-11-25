// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef int s32;
typedef void (*Hook)(void *);

extern u32 UNK_020f6794[];
extern u32 UNK_020f67a0[];
extern u32 UNK_0210571c[];
extern u32 UNK_02105768[];
extern u32 UNK_021057d8[];
extern void FUN_0201c9d4(u32, const void *, u32);
extern void FUN_0201cab8(int, void *);

#define W(a, o) (*(u32 *)((u32)(a) + (o)))
#define H(a, o) (*(u16 *)((u32)(a) + (o)))
#define B(a, o) (*(u8 *)((u32)(a) + (o)))

static inline void G3dGeMtxMode(u32 mode) {
    FUN_0201c9d4(0x10, &mode, 1);
}

static inline void G3dGeScale(s32 x, s32 y, s32 z) {
    s32 vec[3];
    vec[0] = x;
    vec[1] = y;
    vec[2] = z;
    FUN_0201c9d4(0x1b, vec, 3);
}

static inline void G3dGeTexCoord(s32 s, s32 t) {
    u32 param = (u32)(u16)(s16)(s >> 8) | ((u32)(u16)(s16)(t >> 8) << 16);
    FUN_0201c9d4(0x22, &param, 1);
}

static inline int CheckCallback(char *rs, int timing) {
    if (W(rs, 0x3c)) {
        return B(rs, 0x98);
    }
    return 0;
}

static inline int ExecCallback(char *rs, int *pTiming, int target) {
    if (*pTiming == target) {
        W(rs, 8) &= ~0x40;
        ((Hook)W(rs, 0x3c))(rs);
        if (target != 3) {
            *pTiming = W(rs, 0x3c) ? B(rs, 0x98) : 0;
        }
        return W(rs, 8) & 0x40;
    }
    return 0;
}

static inline u32 GetMatDataByIdx(u32 resMat, u32 idx) {
    if (resMat) {
        u32 dict = resMat + 4;
        u32 entry;
        if (dict && idx < B(resMat, 5)) {
            u32 unit = dict + H(resMat, 10);
            entry = (unit + 4) + H(unit, 0) * idx;
        } else {
            entry = 0;
        }
        if (entry) {
            return resMat + W(entry, 0);
        }
    }
    return 0;
}

void FUN_0201bf0c(char *self) {
    if (!(W(self, 8) & 0x200) && (W(self, 8) & 1)) {
        u32 descriptor = W(self, 0xb0);
        int stage;
        int skip;

        if ((W(descriptor, 0x10) & 0xc0000000) != 0x80000000) {
            W(descriptor, 0x10) &= ~0xc0000000;
            W(W(self, 0xb0), 0x10) |= 0x80000000;
            UNK_020f6794[3] = W(W(self, 0xb0), 0x10);
            FUN_0201c9d4(UNK_020f6794[2], UNK_020f67a0, 1);
        }

        G3dGeMtxMode(3);

        stage = W(self, 0x3c) ? B(self, 0x98) : 0;
        skip = ExecCallback(self, &stage, 1);
        if (!skip) {
            u32 mat = W(self, 0xb0);
            s32 width = H(mat, 0x2c);
            s32 height = H(mat, 0x2e);
            G3dGeScale(width << 15, -height << 15, 0x10000);
            G3dGeTexCoord(width << 11, height << 11);
        }

        skip = ExecCallback(self, &stage, 2);
        if (!skip) {
            u32 index = B(W(self, 0), 1);
            u32 res = GetMatDataByIdx(W(self, 0xcc), index);
            u16 flags = H(res, 0x1e);
            if (flags & 0x2000) {
                u32 p = res + 0x2c;
                if (!(flags & 2)) p += 8;
                if (!(flags & 4)) p += 4;
                if (!(flags & 8)) p += 8;
                FUN_0201c9d4(0x18, (void *)p, 16);
            }
        }

        skip = ExecCallback(self, &stage, 3);
        if (!skip) {
            s32 matrix[9];
            u32 flags;
            G3dGeMtxMode(2);
            FUN_0201cab8(0, matrix);
            G3dGeMtxMode(3);
            flags = UNK_0210571c[0x3f];
            if (flags & 1) {
                FUN_0201c9d4(0x1a, UNK_02105768, 9);
                FUN_0201c9d4(0x1a, UNK_021057d8, 9);
                FUN_0201c9d4(0x1a, matrix, 9);
            } else if (flags & 2) {
                FUN_0201c9d4(0x1a, UNK_02105768, 9);
                FUN_0201c9d4(0x1a, matrix, 9);
            } else {
                FUN_0201c9d4(0x1a, matrix, 9);
            }
        }

        G3dGeMtxMode(2);
    }
    W(self, 0) += 3;
}
