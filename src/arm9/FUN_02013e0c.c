// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

enum { E0 = 0, E1 = 1 };

struct Elem {
    u32 f0, f4, f8, fc, f10, f14;
};

struct State {
    u32 f0, f4;
    u8 *f8;
    u32 fc;
};

struct D {
    u16 f0;
    u16 pad2;
    u32 f4;
    u32 f8, fc, f10, f14, f18, f1c;
};

struct Cache {
    u16 idx;
    u16 pad2;
    void *ptrs[256];
    u32 enabled;
};

struct Slot8 {
    u16 idx;
    u16 pad[3];
};

struct CacheElem {
    u32 w[8];
};

extern struct State DAT_02104754;
extern u32 DAT_02104764[];
extern struct Slot8 DAT_021047e4[];
extern struct Elem DAT_021048e4[];
extern struct CacheElem DAT_02104ee4[];
extern struct Cache DAT_021052e4;
extern struct D DAT_020f66d4;

extern void FUN_020138b0(void);
extern void FUN_020168a4(void *, void *);
extern void FUN_0201683c(void *);
extern void FUN_020168bc(void *, u32);
extern void FUN_020168c4(void *, void *);
extern void FUN_02016830(void *, u32, u32);
extern void FUN_020168f4(void *);
extern void FUN_02016b18(u32, u32);
extern void FUN_02016a64(u32);
extern void FUN_02016a00(void);

static inline void *GetCache(void) {
    void *extra = 0;
    if (((!DAT_02104754.f4 && DAT_020f66d4.f0 != 0xfffe) ? E1 : E0) != 0) {
        if (DAT_021052e4.enabled) {
            extra = DAT_021052e4.ptrs[DAT_021052e4.idx];
            if (!extra) {
                FUN_020138b0();
                extra = &DAT_02104ee4[DAT_021047e4[(u16)DAT_02104754.fc].idx];
                DAT_021052e4.ptrs[DAT_021052e4.idx] = extra;
            }
        } else {
            FUN_020138b0();
            extra = &DAT_02104ee4[DAT_021047e4[(u16)DAT_02104754.fc].idx];
        }
    }
    return extra;
}

static inline void *GetMtx(void) {
    if (DAT_02104754.f4 != 0) {
        DAT_020f66d4.f18 = DAT_021048e4[DAT_02104754.fc].f10;
        DAT_020f66d4.f1c = DAT_021048e4[DAT_02104754.fc].f14;
        return &DAT_020f66d4.f8;
    } else {
        return &DAT_021048e4[DAT_02104754.fc];
    }
}

static inline void Draw(u32 value) {
    u32 slot = DAT_020f66d4.f4;
    if (((slot != ~0u) ? E1 : E0) != 0) {
        FUN_02016b18(value, slot);
    } else {
        FUN_02016a64(value);
    }
}

void FUN_02013e0c(u32 value) {
    u8 *initial = DAT_02104754.f8;
    u8 *node = *(u8 **)(initial + 0x70);

    if (*(u32 *)(initial + 0x7c) & 2) {
        if (*(u32 *)(node + 0x14)) {
            void *extra = GetCache();
            void *mtx = GetMtx();
            FUN_020168a4(mtx, extra);
            Draw(value);
        } else {
            FUN_020168bc(initial, DAT_02104764[DAT_02104754.fc]);
            FUN_0201683c(GetMtx());
            Draw(value);
        }
        return;
    }

    while (node) {
        if (*(u32 *)(node + 0x10)) {
            if (*(u32 *)(node + 0x14)) {
                u8 *renderer = DAT_02104754.f8;
                *(u8 **)(renderer + 0x74) = node;
                FUN_020168c4(renderer, node);
                FUN_02016830(renderer, *(u32 *)(node + 0x28), *(u32 *)(node + 0x2c));
                FUN_020168f4(renderer);
                {
                    void *extra = GetCache();
                    void *mtx = GetMtx();
                    FUN_020168a4(mtx, extra);
                }
                Draw(value);
                *(u8 **)(DAT_02104754.f8 + 0x74) = 0;
                FUN_02016a00();
            } else {
                u8 *renderer = DAT_02104754.f8;
                *(u8 **)(renderer + 0x74) = node;
                FUN_020168c4(renderer, node);
                FUN_020168f4(renderer);
                FUN_020168bc(initial, DAT_02104764[DAT_02104754.fc]);
                FUN_0201683c(GetMtx());
                Draw(value);
                *(u8 **)(DAT_02104754.f8 + 0x74) = 0;
                FUN_02016a00();
            }
        }
        node = *(u8 **)(node + 0x30);
    }
}
