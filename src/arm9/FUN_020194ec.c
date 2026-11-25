// FUN_020194ec @ 0x020194ec (0xb0, arm) - ported from FUN_0201ebac [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern int FUN_020190f4(void *, void *);
extern int FUN_02019360(void *, void *);

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
        u32 *e = (u32 *)get_entry(base + 8, idx);
        if (e != 0) {
            return base + *e;
        }
    }
    return 0;
}

int FUN_020194ec(u8 *base, void *arg) {
    u32 i; int ok = 1; for (i = 0; i < *(volatile u8 *)(base + 9); i++) {
        void *p = resolve_ptr(base, i);
        ok &= FUN_020190f4(p, arg);
        ok &= FUN_02019360(p, arg);
    }
    return ok;
}
