// FUN_0200145c @ 0x0200145c (0x78, arm) - ported from FUN_020370ec [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200145c @ 0x020370ec (0x78, ARM), verified dsi/1.1. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern int FUN_02001440(u8 *, u16);
extern void FUN_02003d54(u8 *, u8 *, int);

u32 FUN_0200145c(u8 *a0, u16 *a1, u32 a2) {
    u8 buf[4];
    u32 len = 0;
    if (a0 == 0 || a1 == 0) {
        return 0;
    }
    do {
        u16 c = *a1;
        if (c == 0) {
            a0[len] = 0;
            break;
        }
        a1++;
        int n = FUN_02001440(buf, c);
        if (len + n > a2) {
            break;
        }
        FUN_02003d54(a0 + len, buf, n);
        len += n;
    } while (len <= a2);
    return len;
}
