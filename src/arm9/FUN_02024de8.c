// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);

extern struct {
    u8 pad00[0x50];
    u32 f50;
    u8 pad54[0x14];
    u64 f68;
    u64 f70;
    u64 f78;
} DAT_02107054;

extern u8 DAT_0210753c[];
extern u8 DAT_020f695c[];

static inline u16 bswap16(u16 x) {
    return (u16)((x >> 8) | (x << 8));
}

u8 *FUN_02024de8(u8 *r6, u8 r5, u32 *r4) {
    u32 r1;
    FUN_020656b8(r6, 0, 0xec);
    *(u16 *)(r6 + 0) = 0x101;
    r6[2] = 6;
    DAT_02107054.f68 = DAT_02107054.f70 * DAT_02107054.f68 + DAT_02107054.f78;
    r1 = (u32)(DAT_02107054.f68 >> 32);
    if (r4 != 0) {
        *r4 = r1;
    }
    *(u16 *)(r6 + 4) = bswap16((u16)(r1 >> 16));
    *(u16 *)(r6 + 6) = bswap16((u16)r1);
    *(u16 *)(r6 + 0xc) = bswap16((u16)(DAT_02107054.f50 >> 16));
    *(u16 *)(r6 + 0xe) = bswap16((u16)DAT_02107054.f50);
    FUN_02065774(DAT_0210753c, r6 + 0x1c, 6);
    *(u16 *)(r6 + 0xec) = 0x8263;
    *(u16 *)(r6 + 0xee) = 0x6353;
    *(u16 *)(r6 + 0xf0) = 0x135;
    r6[0xf2] = r5;
    r6[0xf3] = 0x3d;
    r6[0xf4] = 7;
    r6[0xf5] = 1;
    FUN_02065774(DAT_0210753c, r6 + 0xf6, 6);
    r6[0xfc] = 0xc;
    r6[0xfd] = 0xa;
    FUN_02065774(DAT_020f695c, r6 + 0xfe, 0xa);
    r6[0x108] = 0x37;
    r6[0x109] = 3;
    r6[0x10a] = 1;
    r6[0x10b] = 3;
    r6[0x10c] = 6;
    return r6 + 0x10d;
}
