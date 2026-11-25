// FUN_02011f14 @ 0x02011f14 (0xb4, arm) - ported from FUN_02016a54 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02011f14 @ 0x02016a54, ARM, 0xb4. Best-fit block search on the
 * free list: walks +0xc links from the +0x24 head, scores candidates
 * by (size, exact-match flag = halfword +0x36 bit0 CLEAR), first-fit
 * tie-break via size==len; splits through FUN_02011d94 (5 args, 5th on
 * stack). Returns 0 when nothing fits, else the callee's result.
 * Scan 0920: 0.7 hits/s — heap allocator core.
 * Match mechanisms (2026-09-20): (1) off = (base + (align - 1)) &
 * ~(align - 1) with a NAMED align-1 temp spelled (a1 + base) — the
 * named-temp-left order reproduces the target's add operand order
 * (scaled-temp lever); (2) conditions spelled size-first
 * (size >= len+delta && best > size). All 9 dsi + all 10 CW2.0
 * builds; 1.2/* 999 sentinel class.
 */
typedef unsigned short u16;
typedef unsigned int u32;
extern int FUN_02011d94(u32 *head, u32 *node, u32 off, u32 len, u32 zero);

int FUN_02011f14(u32 *p, u32 len, u32 align)
{
    u32 *node = *(u32 **)((char *)p + 0x24);
    u16 flag = *(u16 *)((char *)p + 0x36);
    u16 m = flag & 1;
    int exact = m == 0;
    u32 *found = 0;
    int best = -1;
    u32 bestOff = 0;
    if (node != 0) {
        do {
            u32 base = (u32)node + 0x10;
            u32 a1 = align - 1;
            u32 off = (a1 + base) & ~a1;
            u32 delta = off - base;
            u32 size = *(u32 *)((char *)node + 4);
            if (size >= len + delta && best > size) {
                found = node;
                best = size;
                bestOff = off;
                if (exact || size == len)
                    break;
            }
            node = *(u32 **)((char *)node + 0xc);
        } while (node != 0);
    }
    if (found == 0)
        return 0;
    return FUN_02011d94((u32 *)((char *)p + 0x24), found, bestOff, len, 0);
}
