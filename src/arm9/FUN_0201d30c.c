// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

static inline u8 *get_dict_data(u8 *dict, u32 idx) {
    if (dict != 0 && idx < *(u8 *)(dict + 1)) {
        u16 ofs = *(u16 *)(dict + 6);
        u16 sizeUnit = *(u16 *)(dict + ofs);
        return dict + ofs + 4 + sizeUnit * idx;
    }
    return 0;
}

static inline u8 *get_mdl_by_idx(u8 *base, u32 idx) {
    if (base != 0) {
        u8 *entry = get_dict_data(base + 4, idx);
        if (entry != 0) {
            return base + *(u32 *)entry;
        }
    }
    return 0;
}

u32 FUN_0201d30c(u8 *res, u32 idx) {
    u8 *base;
    u8 *mdl;
    if (res != 0 && *(u32 *)(res + 8) != 0) {
        base = res + *(u32 *)(res + 8);
    } else {
        base = 0;
    }
    mdl = get_mdl_by_idx(base, idx);
    return (*(u32 *)(mdl + 12) & 0x3f000000) >> 24;
}
