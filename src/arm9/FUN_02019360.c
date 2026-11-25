// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void *FUN_0201d43c(void *, void *);
extern void FUN_02019280(u8 *, u8 *, u8 *, void *);

static inline void *get_name(u8 *base, u32 idx) {
    if (base != 0 && idx < base[1]) {
        u8 *p = base + *(u16 *)(base + 6);
        return p + *(u16 *)(p + 2) + idx * 0x10;
    }
    return 0;
}

static inline u8 *get_entry(u8 *base, u32 idx) {
    if (base != 0 && idx < base[1]) {
        u16 off = *(u16 *)(base + 6);
        u16 stride = *(u16 *)(base + off);
        return base + off + 4 + stride * idx;
    }
    return 0;
}

static inline u8 *get_sub(u8 *opt) {
    if (opt != 0) {
        u32 off = *(u32 *)(opt + 8);
        if (off != 0) return opt + off;
    }
    return 0;
}

int FUN_02019360(u8 *opt, u8 *ctx) {
    u8 *tbl;
    u32 i;
    int ok = 1;
    u8 *sub = get_sub(opt);
    tbl = sub + *(u16 *)(sub + 2);
    for (i = 0; i < *(volatile u8 *)(tbl + 1); i++) {
        void *name = get_name(tbl, i);
        void *found = (ctx != 0 && *(u16 *)(ctx + 0x34) != 0)
            ? FUN_0201d43c(ctx + *(u16 *)(ctx + 0x34), name)
            : 0;
        if (found != 0) {
            u8 *entry = get_entry(tbl, i);
            if (!(entry[3] & 1)) {
                FUN_02019280(sub, entry, ctx, found);
            }
        } else {
            ok = 0;
        }
    }
    return ok;
}
