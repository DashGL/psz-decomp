// FUN_0200fef0 @ 0x0200fef0 (0x80, arm) - ported from FUN_0202a580 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fef0 @ 0x0202a580 (0x80, ARM), verified dsi/1.1. */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern int *FUN_0200ebec(u32);
extern int FUN_0200efe0(int);
extern int FUN_02011890(int, u32);
extern int FUN_0201006c(u32, u8, u16, u8, int, int, u32, u32);

int FUN_0200fef0(u32 a0, u32 a1, u32 a2) {
    int *p0 = FUN_0200ebec(a1);
    if (p0 == 0) {
        return 0;
    }
    int p1 = FUN_0200efe0(*p0);
    if (p1 == 0) {
        return 0;
    }
    int p2 = FUN_02011890(p1, a2);
    if (p2 == 0) {
        return 0;
    }
    return FUN_0201006c(a0, *(u8 *)(p2 + 9), *(u16 *)(p2 + 4), *(u8 *)(p2 + 8), p2, p1, a1, a2);
}
