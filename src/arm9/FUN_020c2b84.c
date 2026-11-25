// FUN_020c2b84 @ 0x020c2b84 (0x76, thumb) - ported from FUN_020a844c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2b84 @ 0x020a844c (0x76, Thumb), verified dsi/1.1. */
typedef unsigned int u32;
extern void FUN_020c2b30(void *);
extern u32 FUN_020c1fc8(void);
extern void FUN_020c26a0(u32, void *, u32);
extern void FUN_02015c1c(u32, int, int, u32, u32, u32, u32, u32);
extern void FUN_020c2974(u32, void *);

void FUN_020c2b84(int *self, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 buf[14];
    FUN_020c2b30(buf);
    FUN_020c26a0(FUN_020c1fc8(), buf, a1);
    *(u32 *)(*self + 0x48) = a3;
    *(u32 *)(*self + 0x4c) = a4;
    FUN_02015c1c(a2, (int)buf[5], (int)buf[4], buf[3], buf[6], buf[7], *(u32 *)(*self + 0x48), *(u32 *)(*self + 0x4c));
    *(u32 *)(*self + 0x50) = *(u32 *)(buf[5] + 8);
    *(u32 *)(*self + 0x54) = *(u32 *)(buf[4] + 0x10);
    FUN_020c2974(FUN_020c1fc8(), buf);
    *(u32 *)(*self + 4) = 1;
    *(u32 *)(*self + 8) = *(u32 *)(*self + 4);
    *(u32 *)(*self) = *(u32 *)(*self + 8);
}
