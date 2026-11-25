// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
static inline u8 *get_mdlset(u8 *res) {
    if (res && *(u32 *)(res + 8) != 0) return res + *(u32 *)(res + 8);
    return 0;
}
static inline void *get_dict_data(u8 *dict, u32 idx) {
    if (dict != 0 && idx < dict[1]) {
        u16 off = *(u16 *)(dict + 6);
        u16 stride = *(u16 *)(dict + off);
        return dict + off + 4 + stride * idx;
    }
    return 0;
}
static inline u8 *get_mdl(u8 *set, u32 idx) {
    if (set != 0) {
        u32 *e = (u32 *)get_dict_data(set + 4, idx);
        if (e != 0) return set + *e;
    }
    return 0;
}
void FUN_0201d290(u8 *resource, u32 index, u32 value) {
    u8 *mdl = get_mdl(get_mdlset(resource), index);
    if (value) *(u32 *)(mdl + 12) |= 0x8000u; else *(u32 *)(mdl + 12) &= ~0x8000u;
}
