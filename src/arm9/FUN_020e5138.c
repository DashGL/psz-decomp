// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
#define W(p,o) (*(u32 *)((p)+(o)))
#define H(p,o) (*(u16 *)((p)+(o)))
extern u8 *FUN_020e961c(void);
extern u32 FUN_020e0b68(u32);
#pragma thumb off
extern void FUN_02065510(u32, void *, u32), FUN_020654b4(u32, void *, u32), FUN_020656b8(void *, u32, u32);
#pragma thumb on
extern void FUN_020e9628(u32), FUN_020e16f8(void);
static inline void clr32(void *d, u32 s) { FUN_02065510(0, d, s); }
static inline void clr16(void *d, u32 s) { FUN_020654b4(0, d, s); }

void FUN_020e5138(int mode)
{
    u8 *p;
    FUN_020e961c()[12] = 0;
    FUN_020e961c()[0x17c] = 0;
    p = FUN_020e961c(); H(p, 0x17e) = FUN_020e0b68(0x10000);
    W(FUN_020e961c(), 0x180) = 0;
    p = FUN_020e961c(); W(p, 0x184) = 0; W(p, 0x188) = 0;
    p = FUN_020e961c(); W(p, 0x18c) = 0; W(p, 0x190) = 0;
    FUN_020e961c()[0x1a4] = 0;
    FUN_020e961c()[0x1a9] = 0;
    FUN_020e961c()[0x1aa] = 0;
    FUN_020e961c()[0x1ab] = 0;
    FUN_020e961c()[0x1ac] = 0;
    FUN_020e961c()[0x1a7] = 0;
    FUN_020e961c()[0x1a8] = 0;
    H(FUN_020e961c(), 0x1b2) = 0;
    H(FUN_020e961c(), 0x1b4) = 0;
    W(FUN_020e961c(), 0x1b8) = 0;
    p = FUN_020e961c(); W(p, 0x1e0) = 0; W(p, 0x1e4) = 0;
    p = FUN_020e961c(); W(p, 0x1f0) = 0; W(p, 0x1f4) = 0;
    clr32(FUN_020e961c() + 0x3cc, 0x98);
    if (mode == 2) {
        p = FUN_020e961c(); p[0x14] = FUN_020e961c()[13];
        if (FUN_020e961c()[0x15] == 3) FUN_020e9628(1);
        else if (FUN_020e961c()[0x15] == 2) FUN_020e9628(10);
        return;
    }
    FUN_020e961c()[13] = 0;
    FUN_020e961c()[14] = 0;
    FUN_020e961c()[0x14] = 0;
    FUN_020e961c()[0x17] = 0;
    W(FUN_020e961c(), 0x20) = 0;
    W(FUN_020e961c(), 0xe8) = 0;
    FUN_020e961c()[0x1a5] = 0;
    H(FUN_020e961c(), 0x1b0) = 0;
    W(FUN_020e961c(), 0x1bc) = 0;
    p = FUN_020e961c(); W(p, 0x1c0) = 0; W(p, 0x1c4) = 0;
    W(FUN_020e961c(), 0x1c8) = 0;
    p = FUN_020e961c(); W(p, 0x1cc) = 0; W(p, 0x1d0) = 0;
    W(FUN_020e961c(), 0x1d4) = 0;
    W(FUN_020e961c(), 0x204) = 0;
    W(FUN_020e961c(), 0x208) = 0;
    W(FUN_020e961c(), 0x2f0) = 0;
    FUN_020e16f8();
    clr32(FUN_020e961c() + 0x24, 0x80);
    clr16(FUN_020e961c() + 0xa4, 0x40);
    clr32(FUN_020e961c() + 0xf4, 0x80);
    clr32(FUN_020e961c() + 0x194, 12);
    clr32(FUN_020e961c() + 0x210, 0x80);
    clr16(FUN_020e961c() + 0x290, 0x40);
    FUN_020656b8(FUN_020e961c() + 0x2d0, 0, 0x20);
    clr32(FUN_020e961c() + 0x348, 0x84);
    if (mode == 1) {
        if (FUN_020e961c()[0x15] == 0) FUN_020e9628(3);
        else if (FUN_020e961c()[0x15] == 1) FUN_020e9628(4);
        return;
    }
    FUN_020e961c()[0x15] = 0;
    FUN_020e961c()[0x16] = 0;
    FUN_020e961c()[0x18] = 0;
    W(FUN_020e961c(), 0x20c) = 0;
    FUN_020e961c()[0x1a6] = 0;
    FUN_020e961c()[0x1ae] = 0;
    FUN_020e961c()[0x1ad] = 0;
    p = FUN_020e961c(); W(p, 0x1f8) = 0; W(p, 0x1fc) = 0;
    W(FUN_020e961c(), 0x46c) = 0;
    W(FUN_020e961c(), 0x470) = 0;
}
