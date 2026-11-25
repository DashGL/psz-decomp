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
void FUN_02019468(u8 *resource) {
    u8 *base = get_mdlset(resource);
    u8 *table = base + *(u16 *)(base + 2);
    u32 i;
    for (i = 0; i < *(volatile u8 *)(table + 1); i++) {
        u8 *entry = (u8 *)get_dict_data(table, i);
        if (entry[3] & 1) entry[3] &= ~1u;
    }
}
