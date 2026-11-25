// Verified 2026-11-13: full 408-byte body, pinned 2.0/sp2p3, exact bytes and every relocation; restored consumed arguments.
// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u8 *DAT_021180ac;
extern u8 DAT_020f96e8;

extern void FUN_020656b8(void *, int, int);
extern void *FUN_02064ac8(void *, void *);
extern void FUN_02065774(const void *, void *, int);
extern unsigned int FUN_02061f90(unsigned int, unsigned int, unsigned int);

int FUN_02060b94(void) {
    u8 sp00[6];
    u8 sp06[0x10];
    int r4 = -1;
    u16 r5 = 0;
    u16 i;
    u8 idx;
    u8 k;
    u8 *r1;
    void *dst;
    FUN_020656b8(sp06, 0, 0x10);
    r1 = DAT_021180ac;
    for (i = 1; i <= 0xf; i++) {
        if (*(u32 *)(r1 + i * 4 + 0x14e4) == 5) {
            s8 c = *(s8 *)(r1 + i + 0x1525);
            sp06[c]++;
        }
    }
    idx = DAT_020f96e8;
    for (k = 0; k < 0x10; k++) {
        idx = (u8)((idx + 1) % 16);
        if (r1[idx * 0x5d4 + 0x1d52] != 0 && sp06[idx] != 0) {
            r4 = (s8)idx;
            break;
        }
    }
    if (r4 == -1) {
        return 0x15;
    }
    DAT_020f96e8 = (u8)r4;
    for (i = 1; i <= 0xf; i++) {
        if (*(u32 *)(r1 + i * 4 + 0x14e4) == 5 && *(s8 *)(r1 + i + 0x1525) == r4) {
            r5 = (u16)(r5 | (1 << i));
        }
    }
    sp00[0] = 3;
    *(u16 *)(sp00 + 2) = (u16)r4;
    dst = FUN_02064ac8(sp00, r1);
    if (dst != 0) {
        FUN_02065774(DAT_021180ac + 0x1788 + r4 * 0x5d4, dst, 0xe4);
    }
    return FUN_02061f90(0xea, r5, (unsigned int)DAT_021180ac);
}
