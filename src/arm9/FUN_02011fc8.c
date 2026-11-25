// FUN_02011fc8 @ 0x02011fc8 (0xb0, arm) - ported from FUN_02016b08 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02011fc8 @ 0x02016b08, ARM, 0xb0. Best-fit free-list scan, align-down
 * twin of the banked FUN_02016a54: head slot p+0x28 (a54: +0x24), node link
 * +8 (a54: +0xc). Scores off = (size + base - len) & ~(align-1), base =
 * node + 0x10; wrap guard (int)(off - base) >= 0 lowers to subs+bmi and
 * rejects any node whose aligned tail underflows below base. Best-fit keeps
 * a node only when best > size (a54 folds the delta into len first); breaks
 * on the exact flag (halfword p+0x36 bit0 CLEAR) or size == len. Hit:
 * FUN_02011d94(p + 0x24, node, off, len, 1) — 5th stack arg 1 (a54 passes
 * 0) — returning the callee's r0; found==0 returns 0.
 * Match mechanisms (2026-10-02 recovery): align-down form spelled directly
 * (no named a1 temp), guard (int)(off - base) >= 0, best-vs-size compare
 * best-first. All 9 dsi + all 10 CW2.0 builds, one BL + zero ABS32 relocs.
 */

typedef unsigned short u16;
typedef unsigned int u32;

extern int FUN_02011d94(u32 *head, u32 *node, u32 off, u32 len, u32 flag);

int FUN_02011fc8(u32 *p, u32 len, u32 align)
{
    u16 flag = *(u16 *)((char *)p + 0x36);
    u32 *node = *(u32 **)((char *)p + 0x28);
    u16 m = flag & 1;
    int exact = m == 0;
    u32 *found = 0;
    int best = -1;
    u32 bestOff = 0;
    if (node != 0) {
        do {
            u32 base = (u32)node + 0x10;
            u32 size = *(u32 *)((char *)node + 4);
            u32 off = (size + base - len) & ~(align - 1);
            if ((int)(off - base) >= 0 && best > size) {
                found = node;
                best = size;
                bestOff = off;
                if (exact || size == len)
                    break;
            }
            node = *(u32 **)((char *)node + 8);
        } while (node != 0);
    }
    if (found == 0)
        return 0;
    return FUN_02011d94((u32 *)((char *)p + 0x24), found, bestOff, len, 1);
}
