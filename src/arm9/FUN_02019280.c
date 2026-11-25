// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

static inline u32 get_pltt_key_addr(u32 key) {
    return (u32)((key & 0x0000FFFFu) << 3);
}

static inline void *get_dict_data(u8 *dict, u32 idx) {
    if (dict != 0 && idx < dict[1]) {
        u16 off = *(u16 *)(dict + 6);
        u16 stride = *(u16 *)(dict + off);
        return dict + off + 4 + stride * idx;
    }
    return 0;
}

static inline u8 *get_mat_data(u8 *base, u32 idx) {
    if (base != 0) {
        u32 *entry = (u32 *)get_dict_data(base + 4, idx);
        if (entry != 0) {
            return base + *entry;
        }
    }
    return 0;
}

void FUN_02019280(u8 *base, u8 *desc, u8 *ctx, u8 *settings) {
    u32 offset;
    u32 plttBase;
    u8 *indices;
    u32 i;
    indices = base + *(u16 *)desc;
    plttBase = (u16)(get_pltt_key_addr(*(u32 *)(ctx + 0x2c)) >> 3);
    offset = *(u16 *)settings;
    if (!(*(u16 *)(settings + 2) & 1)) {
        offset = (u16)(offset >> 1);
        plttBase = (u16)(plttBase >> 1);
    }
    for (i = 0; i < desc[2]; i++) {
        u8 *mat = get_mat_data(base, indices[i]);
        *(u16 *)(mat + 0x1c) = (u16)(offset + plttBase);
    }
    desc[3] |= 1;
}
