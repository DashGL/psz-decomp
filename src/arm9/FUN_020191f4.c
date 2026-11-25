// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void FUN_0201903c(void *, void *);
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
void FUN_020191f4(u8 *self) {
    u8 *base = get_mdlset(self);
    u8 *dict = base + *(u16 *)base;
    u32 i;
    for (i = 0; i < *(volatile u8 *)(dict + 1); i++) {
        u8 *p = (u8 *)get_dict_data(dict, i);
        if (p[3] & 1) FUN_0201903c(base, p);
    }
}
