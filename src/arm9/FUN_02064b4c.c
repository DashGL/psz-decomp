// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x11c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct State64b4c {
    int f0;
    int f4;
    int f8;
    int fc;
};
extern struct State64b4c DAT_021180e4;
extern int FUN_02064cf4(unsigned char *);
extern void FUN_02065774(const void *, void *, int);
extern unsigned char *FUN_02064c68(unsigned char *, unsigned char *);

unsigned char *FUN_02064b4c(unsigned char *src, unsigned char *dst, unsigned char *arg2) {
    switch (*dst = *src) {
    case 7:
        if (FUN_02064cf4(arg2) != 0) {
            return (unsigned char *)(DAT_021180e4.f4 + (((int)arg2 - 1) << 5));
        }
        dst[2] = src[1];
        if ((int)dst[2] > DAT_021180e4.fc) {
            return 0;
        }
        FUN_02065774(src + 2, dst + 3, DAT_021180e4.f8);
        arg2 = FUN_02064c68(dst, arg2);
        break;
    case 8:
        arg2 = src + 3;
        *(unsigned short *)(dst + 2) = src[1];
        *(unsigned short *)(dst + 2) |= (src[2] << 8) & 0xff00;
        break;
    case 9:
        arg2 = src + 3;
        *(unsigned short *)(dst + 2) = src[1];
        *(unsigned short *)(dst + 2) |= (src[2] << 8) & 0xff00;
        FUN_02065774(arg2, dst + 4, DAT_021180e4.f8);
        arg2 += DAT_021180e4.f8;
        break;
    default:
        return 0;
    }
    return arg2;
}
