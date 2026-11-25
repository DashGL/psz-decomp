// flags: -O2,p -noThumb
typedef unsigned short u16;
typedef unsigned int u32;
extern int FUN_02052fe4(u32, ...);
extern u32 FUN_02053464(void), FUN_02053494(void), FUN_0205fc98(u32);
extern void FUN_0206557c(u32, void *, u32);
extern void FUN_020550b4(void *), FUN_02054fdc(void *), FUN_020551e0(void *);
extern int FUN_02053508(u32, void (*)(void *), void *);
extern int FUN_02054680(void (*)(void *), void *, void *, u32, u16, u16, u16);

int FUN_020549f8(char *p, u32 channel, u32 mask, u32 stride, int double_buffer) {
    u32 mode, unit; char *buffer; u32 peers = 1; int i, j, status;
    status = FUN_02052fe4(2, 9, 10);
    if (status) return status;
    if (!p) return 6;
    if (channel >= 16) return 6;
    if (!mask) return 6;
    mode = FUN_02053464();
    if (!mode) peers = FUN_02053494();
    FUN_0206557c(0, p, 0x820);
    *(u16 *)(p + 0x808) = 0;
    *(u16 *)(p + 0x80a) = 0;
    *(u16 *)(p + 0x80c) = 0;
    *(u16 *)(p + 0x810) = (u16)stride;
    *(u16 *)(p + 0x816) = (u16)channel;
    *(u16 *)(p + 0x80e) = 0;
    *(u16 *)(p + 0x818) = double_buffer ? 1 : 0;
    *(u16 *)(p + 0x80e) = (u16)(mask | (1u << mode));
    unit = FUN_0205fc98((u16)(mask | (1u << mode)));
    *(u16 *)(p + 0x812) = (u16)unit;
    *(u16 *)(p + 0x814) = (u16)(stride * unit);
    if (*(u16 *)(p + 0x814) > 508) {
        *(u16 *)(p + 0x80e) = 0;
        return 6;
    }
    *(u16 *)(p + 0x814) += 4;
    *(u16 *)(p + 0x81c) = 1;
    if (!mode) {
        { u32 m2 = peers | 1; j = 0;
        do {
            *(u16 *)(p + j * 512) = (u16)(*(u16 *)(p + 0x80e) & m2);
            j++;
        } while (j < 4); }
        FUN_02053508(channel, FUN_020550b4, p);
        buffer = p;
        for (i = 0; i < (*(u16 *)(p + 0x818) != 1 ? 1 : 2); i++) {
            *(u16 *)(p + 0x808) = (u16)((*(u16 *)(p + 0x808) + 1) & 3);
            status = FUN_02054680(FUN_02054fdc, p, buffer, *(u16 *)(p + 0x814), (u16)(*(u16 *)(p + 0x80e) & peers), *(u16 *)(p + 0x816), 1);
            if (status == 7) {
                *(u16 *)(p + 0x800 + 2 * i) = 65535;
                *(u16 *)(p + 0x80a) = (u16)((*(u16 *)(p + 0x80a) + 1) & 3);
            } else if (status != 0 && status != 2) {
                *(u16 *)(p + 0x81c) = 5;
                return 1;
            }
            buffer += 512;
        }
    } else {
        *(u16 *)(p + 0x80a) = 3;
        FUN_02053508(channel, FUN_020551e0, p);
    }
    return 0;
}
