// FUN_0201cb44 @ 0x0201cb44 (0xac, arm) - ported from FUN_02022280 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void FUN_0201c9d4(int, u32 *, int);
extern void FUN_0201cab8(void *, void *);

static inline void *get_entry(u8 *base, u32 idx) {
    if (base != 0 && idx < base[1]) {
        u16 off = *(u16 *)(base + 6);
        u16 stride = *(u16 *)(base + off);
        return base + off + 4 + stride * idx;
    }
    return 0;
}

static inline void *resolve_ptr(u8 *base, u32 idx) {
    if (base != 0) {
        u32 *e = (u32 *)get_entry(base, idx);
        if (e != 0) {
            return base + *e;
        }
    }
    return 0;
}

int FUN_0201cb44(u32 *ctx, void *a1, void *a2, u32 idx) {
    u16 *p = (u16 *)resolve_ptr((u8 *)(ctx[1] + 0x40), idx);
    u32 val = (*p & 0xf800u) >> 11;
    if (val != 0x1f) {
        u32 tmp = val;
        FUN_0201c9d4(0x14, &tmp, 1);
        if (a1 != 0 || a2 != 0) {
            FUN_0201cab8(a1, a2);
        }
        return 1;
    }
    return 0;
}
