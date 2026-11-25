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

void FUN_0201da60(u8 *out) {
    u8 *state = DAT_02105980;
    u8 *c = *(u8 **)state;
    u32 idx = c[1];
    u8 *p = get_data(*(u8 **)(state + 0xc8), idx);
    u16 flag = *(u16 *)p;
    p += 4;
    if (!(flag & 1)) {
        p += 0xc;
    }
    if (!(flag & 2)) {
        if (flag & 8) {
            p += 4;
        } else {
            p += 0x10;
        }
    }
    (*(void (**)(u8 *, u8 *, u8 *, u32))(state + 0xdc))(out, p, c, flag);
}
