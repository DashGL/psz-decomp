// FUN_0201f974 @ 0x0201f974 (0x74, arm) - ported from FUN_020250b0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *FUN_0201d868(void *, u16, u16);
extern void *FUN_0201d810(void *, u8);
extern void FUN_0201f834(void *, void *, void *);
extern void *FUN_0201d83c(void *, u8);
extern void FUN_0201f90c(void *, void *, void *);

struct S_020250b0 {
    int f0;
    int f4;
    void *f8;
    int fc;
    int f10;
    void *f14;
};

void FUN_0201f974(void *a0, struct S_020250b0 *a1, int a2) {
    void *f8 = a1->f8;
    u8 *p = FUN_0201d868(f8, (u16)a2, (u16)(a1->f0 >> 12));
    void *r1 = FUN_0201d810(f8, p[2]);
    FUN_0201f834(a1->f14, r1, a0);
    if (p[3] != 0xff) {
        void *r2 = FUN_0201d83c(f8, p[3]);
        FUN_0201f90c(a1->f14, r2, a0);
    }
}
