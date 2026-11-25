// FUN_020bf680 @ 0x020bf680 (0x14, thumb) - ported from FUN_020acbf4 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

extern void FUN_02034e8c(u32 dst, u32 *src, u32 len);

void FUN_020bf680(u32 dst, u32 *src, u32 len) {
    *(u32 *)dst = 0;
    FUN_02034e8c(dst + 4, src, len);
    *(u32 *)(dst + 0xc) = len;
}
