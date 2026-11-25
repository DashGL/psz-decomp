// FUN_020c4450 @ 0x020c4450 (0x1e, thumb) - ported from FUN_020a6e70 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x20, but the real body is 0x1e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1e.
 */
/*
 * FUN_020c4450 - 16-byte two-part block copy (Thumb). Recorded size 0x20;
 * true body 0x1e (trailing 2-byte inter-function pad `movs r0,r0` at
 * 0x020a6e8e; the next function's prologue starts at 0x020a6e90).
 *
 * 020a6e70  38b5       push {r3, r4, r5, lr}
 * 020a6e72  051c       adds r5, r0, #0
 * 020a6e74  0c1c       adds r4, r1, #0
 * 020a6e76  201c       adds r0, r4, #0      ; dst = arg1
 * 020a6e78  291c       adds r1, r5, #0      ; src = arg0
 * 020a6e7a  0222       movs r2, #2
 * 020a6e7c  6ef7a6ed   blx  0x020159cc      ; memcpy(dst, src, 2)
 * 020a6e80  a01c       adds r0, r4, #2
 * 020a6e82  a91c       adds r1, r5, #2
 * 020a6e84  0e22       movs r2, #0xe
 * 020a6e86  6ef7a2ed   blx  0x020159cc      ; memcpy(dst+2, src+2, 0xe)
 * 020a6e8a  281c       adds r0, r5, #0
 * 020a6e8c  38bd       pop  {r3, r4, r5, pc}
 *
 * Reads from the bytes: copies 16 bytes from arg0 to arg1 as TWO memcpys
 * (2 bytes then 14), and returns arg0. The 2/14 split with a byte-wide head
 * is the classic shape of a struct whose first member is a u8 or u16 tag
 * followed by a 14-byte tail; naming it memcpy() keeps the split.
 * arg0 lives across both calls, hence the r5 callee-save.
 * Restrict is load-bearing: the compiler must not assume the two buffers
 * overlap (which would let it merge or reorder the copies).
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_02065774(void *dst, const void *src, u32 count);

u8 *FUN_020c4450(u8 *restrict src, u8 *restrict dst)
{
    FUN_02065774(dst, src, 2);
    FUN_02065774(dst + 2, src + 2, 0xe);
    return src;
}
