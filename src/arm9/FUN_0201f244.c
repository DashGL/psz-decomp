// FUN_0201f244 @ 0x0201f244 (0xf0, arm) - ported from FUN_02024980 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 FUN_0201ef1c(u8 *, u32, int);
extern u32 FUN_0201f084(u8 *, u32, int);

static inline u32 *get_entry(u8 *base, int idx) {
    if (base != 0 && (u32)(u16)idx < (u32)base[1]) {
        u16 off = *(u16 *)(base + 6);
        u16 stride = *(u16 *)(base + off);
        return (u32 *)(base + off + 4 + stride * (u16)idx);
    }
    return 0;
}

void FUN_0201f244(u32 *out, int *ctx, int idx) {
    u8 *res = (u8 *)ctx[2];
    int frame = ctx[0] >> 12;
    u32 *entry = get_entry(res + 8, idx);
    u32 v0 = FUN_0201ef1c(res, entry[0], frame);
    u32 v1 = FUN_0201ef1c(res, entry[1], frame);
    out[1] = v0 | (v1 << 16) | (((out[1] & 0x8000) ? 1 : 0) << 15);
    u32 v3 = FUN_0201ef1c(res, entry[3], frame);
    u32 v2 = FUN_0201ef1c(res, entry[2], frame);
    out[2] = v2 | (v3 << 16) | (((out[2] & 0x8000) ? 1 : 0) << 15);
    u32 v4 = FUN_0201f084(res, entry[4], frame);
    out[3] = (out[3] & ~0x1f0000) | (v4 << 16);
}
