// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u8 *DAT_02105980;

static inline void *get_dict_data(u8 *dict, u32 idx) {
    if (dict != 0 && idx < dict[1]) {
        u16 off = *(u16 *)(dict + 6);
        u16 stride = *(u16 *)(dict + off);
        return dict + off + 4 + stride * idx;
    }
    return 0;
}

static inline u8 *get_data(u8 *dict, u32 idx) {
    if (dict != 0) {
        u32 *e = (u32 *)get_dict_data(dict, idx);
        if (e != 0) {
            return dict + *e;
        }
    }
    return 0;
}

void FUN_0201d9c8(u8 *out) {
    u8 *state = DAT_02105980;
    u32 idx = (*(u8 **)state)[1];
    u8 *p = get_data(*(u8 **)(state + 0xc8), idx);
    if (*(u16 *)p & 1) {
        *(u32 *)out |= 4;
    } else {
        *(u32 *)(out + 0x4c) = *(u32 *)(p + 4);
        *(u32 *)(out + 0x50) = *(u32 *)(p + 8);
        *(u32 *)(out + 0x54) = *(u32 *)(p + 12);
    }
}
