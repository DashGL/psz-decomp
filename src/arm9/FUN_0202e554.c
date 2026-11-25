// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x198, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u8 *DAT_02108c0c;
extern const u8 DAT_020ec174[];
extern const char DAT_020ec17c[];

extern void FUN_0202e388(int);
extern int FUN_0202e70c(int);
extern u16 FUN_02053980(void);
extern void FUN_02065774(const void *, void *, int);

void FUN_0202e554(const void *r5, const u8 *r4, int r2) {
    u8 *base;
    int sh;
    int i;
    u16 v;
    FUN_0202e388(r2);
    base = DAT_02108c0c;
    *(u8 **)(base + 0x2288) = base + 0x1500;
    *(u16 *)(DAT_02108c0c + 0x228c) = 0x400;
    sh = FUN_0202e70c(0);
    *(u16 *)(DAT_02108c0c + 0x228e) = (u16)((1 << sh) >> 1);
    v = *(u16 *)(DAT_02108c0c + 0x2268);
    if (v == 0) {
        v = FUN_02053980();
    }
    base = DAT_02108c0c;
    *(u16 *)(base + 0x2290) = v;
    base = DAT_02108c0c;
    *(u16 *)(base + 0x2298) = ((*(u32 *)(base + 0x2264) & 0x300000) != 0x300000);
    if (r5 == 0) {
        FUN_02065774(DAT_020ec174, DAT_02108c0c + 0x2292, 6);
    } else {
        FUN_02065774(r5, DAT_02108c0c + 0x2292, 6);
    }
    if (r4 == 0 || r4 == (const u8 *)DAT_020ec17c) {
        FUN_02065774(DAT_020ec17c, DAT_02108c0c + 0x229c, 0x20);
        *(u16 *)(DAT_02108c0c + 0x229a) = 0;
    } else {
        FUN_02065774(r4, DAT_02108c0c + 0x229c, 0x20);
        for (i = 0; i < 0x20; i++, r4++) {
            if (*r4 == 0) {
                break;
            }
        }
        *(u16 *)(DAT_02108c0c + 0x229a) = (u16)i;
    }
    *(u32 *)(DAT_02108c0c + 0x2284) = 0;
}
