// FUN_020190f4 @ 0x020190f4 (0x100, arm) - ported from FUN_0201e7b4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void *FUN_0201d43c(void *, void *);
extern void FUN_02018f0c(u8 *, u8 *, u8 *, void *);

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

int FUN_020190f4(u8 *opt, u8 *ctx) {
    u8 *tbl;
    u32 i;
    int ok = 1;
    u8 *sub = get_sub(opt);
    tbl = sub + *(u16 *)sub;
    for (i = 0; i < *(volatile u8 *)(tbl + 1); i++) {
        void *name = get_name(tbl, i);
        void *found = (ctx == 0) ? 0 : FUN_0201d43c(ctx + 0x3c, name);
        if (found != 0) {
            u8 *entry = get_entry(tbl, i);
            if (!(entry[3] & 1)) {
                FUN_02018f0c(sub, entry, ctx, found);
            }
        } else {
            ok = 0;
        }
    }
    return ok;
}
