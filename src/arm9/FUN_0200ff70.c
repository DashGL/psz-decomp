// FUN_0200ff70 @ 0x0200ff70 (0xfc, arm) - ported from FUN_0202a600 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void *FUN_0200db90(void *, void *, u32);
extern u32 FUN_0200dcf8(void *, void *);
extern int FUN_0200f618(void *, int, u32, int, void **);
extern void FUN_0200dc28(void *);
extern int FUN_0200f534(void *, int, u32, int, u8 **);
extern void FUN_0200dc34(void *, void *, int, void *);
extern void FUN_0200d7ec(void *, u8);
extern void FUN_0200d82c(void *, u8);
extern void FUN_0200d88c(void *, void *);

int FUN_0200ff70(void *a0, void *a1, void *a2, u32 a3, u8 *a4, void *a5) {
    u8 *v8;
    void *v4;
    void *h = FUN_0200db90(a0, a1, a3);
    if (h == 0) {
        return 0;
    }
    u32 id = FUN_0200dcf8(a1, h);
    if (FUN_0200f618(a2, 6, id, 0, &v4) != 0) {
        FUN_0200dc28(h);
        return 0;
    }
    if (FUN_0200f534(a5, 1, id, 0, &v8) != 0) {
        FUN_0200dc28(h);
        return 0;
    }
    FUN_0200dc34(h, v8 + *(u32 *)(v8 + 0x18), 0, v4);
    FUN_0200d7ec(a0, a4[6]);
    FUN_0200d82c(a0, a4[7]);
    FUN_0200d88c(a0, a5);
    return 1;
}
