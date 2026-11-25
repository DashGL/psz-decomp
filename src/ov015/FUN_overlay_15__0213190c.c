// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x118, exact bytes and relocation targets.
// check: exact
// target: FUN_overlay_15__0213190c @ 0x0213190c (size 0x118, ov015)

extern unsigned char *data_0213e8c4;
extern void FUN_020656b8(void *, int, int);
extern int FUN_overlay_15__02137084(const unsigned char *, int);
extern int FUN_overlay_15__021320f8(unsigned char);
extern void FUN_02065774(const void *, void *, int);

void FUN_overlay_15__0213190c(const unsigned char *str)
{
    int i;
    int len;

    FUN_020656b8(data_0213e8c4 + 0x480, 0, 16);
    len = FUN_overlay_15__02137084(str, 32);

    switch (len) {
    case 0:
    case 10:
    case 26:
    case 32: {
        unsigned char *dst;
        data_0213e8c4[0x4e6] &= ~0xfc;
        dst = data_0213e8c4 + 0x480;
        for (i = 0; i < len; i += 2, dst++) {
            int hi = FUN_overlay_15__021320f8(str[i]);
            int lo = FUN_overlay_15__021320f8(str[i + 1]);
            *dst = (unsigned char)((hi << 4) + lo);
        }
        break;
    }
    default:
        data_0213e8c4[0x4e6] = (unsigned char)((data_0213e8c4[0x4e6] & ~0xfc) | 4);
        FUN_02065774(str, data_0213e8c4 + 0x480, 16);
        break;
    }

    switch (len) {
    case 0:
        data_0213e8c4[0x4e6] &= ~3;
        break;
    case 5:
    case 10:
        data_0213e8c4[0x4e6] = (unsigned char)((data_0213e8c4[0x4e6] & ~3) | 1);
        break;
    case 13:
    case 26:
        data_0213e8c4[0x4e6] = (unsigned char)((data_0213e8c4[0x4e6] & ~3) | 2);
        break;
    default:
        data_0213e8c4[0x4e6] = (unsigned char)((data_0213e8c4[0x4e6] & ~3) | 3);
        break;
    }
}
