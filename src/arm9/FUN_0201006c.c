// FUN_0201006c @ 0x0201006c (0xc4, arm) - ported from FUN_0202a6fc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void *FUN_0200db90(void *, void *, u32);
extern u32 FUN_0200dcf8(void *, void *);
extern int FUN_0200f618(void *, int, u32, int, u32 *);
extern void FUN_0200dc28(void *);
extern void FUN_0200dc34(void *, u8 *, u32, u32);
extern void FUN_0200d7ec(void *, u8);
extern void FUN_0200d82c(void *, u8);
extern void FUN_0200d8b0(void *, u32, u32);

struct Info {
    u32 f0;
    u8 pad[2];
    u8 f6;
    u8 f7;
};
struct Base {
    u8 pad[0x18];
    u32 f18;
};

int FUN_0201006c(void *a0, void *a1, void *a2, u32 a3, struct Info *info, struct Base *base, u32 a6, u32 a7) {
    u32 out;
    void *h = FUN_0200db90(a0, a1, a3);
    if (h == 0) {
        return 0;
    }
    u32 v = FUN_0200dcf8(a1, h);
    if (FUN_0200f618(a2, 6, v, 0, &out) != 0) {
        FUN_0200dc28(h);
        return 0;
    }
    FUN_0200dc34(h, (u8 *)base + base->f18, info->f0, out);
    FUN_0200d7ec(a0, info->f6);
    FUN_0200d82c(a0, info->f7);
    FUN_0200d8b0(a0, a6, a7);
    return 1;
}
