// FUN_0201231c @ 0x0201231c (0x5c, arm) - ported from FUN_02016e5c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0201231c - ring-buffer TAKE (ARM, recorded size 0x5c, body 0x58).
 * Align the head (r5 = (align-1 + head) & ~(align-1)), bounds-check
 * end = size + take against ring[1] (early return 0, cond-exec'd),
 * optionally zero-fill the taken span (flag byte at ring[-4], u8-cast
 * test) via FUN_02065510, advance ring[0] = end, return the aligned take.
 *
 * verified: FUN_0201231c @ 0x02016e5c - mwcc-strict 1.1/dsi, arm946e,
 *           -O4,p -interworking -noThumb; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_02065510(u32 v, u32 dst, u32 n);

u32 FUN_0201231c(u32 *ring, u32 size, u32 align)
{
    u32 *r4 = ring;
    u32 head = r4[0];
    u32 take = ~(align - 1) & ((align - 1) + head);
    u32 end = size + take;
    if (end > r4[1]) {
        return 0;
    }
    u32 span = end - head;         /* sub r2, r6, r3 FIRST */
    u32 flagbyte = (u32)(u8)*(u32 *)((u8 *)r4 - 4);
    if (flagbyte & 1) {
        FUN_02065510(0, head, span);
    }
    r4[0] = end;
    return take;
}
