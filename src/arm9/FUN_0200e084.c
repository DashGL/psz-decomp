// FUN_0200e084 @ 0x0200e084 (0x60, arm) - ported from FUN_020286b4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e084 @ 0x020286b4 (0x60, ARM), verified dsi/1.1. */
typedef unsigned char u8;
typedef unsigned int u32;
extern int FUN_0200d568(u32);

int FUN_0200e084(u8 *self, int count, u8 *src) {
    u32 mask = 0;
    int i;
    for (i = 0; i < count; i++) {
        self[0x4c + i] = src[i];
        mask |= 1 << src[i];
    }
    if (!FUN_0200d568(mask)) {
        return 0;
    }
    *(int *)(self + 0x48) = count;
    *(u32 *)(self + 0x44) = mask;
    return 1;
}
