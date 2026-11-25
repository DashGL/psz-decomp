// FUN_02067350 @ 0x02067350 (0x24, arm) - ported from FUN_0202d848 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02067350 - doubly-linked-list unlink. ARM 0x24. Unlinks node from parent-anchored list: next@+0x10 prev@+0x14; node==last -> parent+0x8c=prev, node==first -> parent+0x88=next. Verified dsi/1.1 -noThumb -O4,p.
 */
typedef unsigned int u32;

void FUN_02067350(u32 obj, u32 node)
{
    u32 next = *(u32 *)(node + 0x10);
    u32 prev = *(u32 *)(node + 0x14);

    if (next == 0) {
        *(u32 *)(obj + 0x8c) = prev;
    }
    else {
        *(u32 *)(next + 0x14) = prev;
    }
    if (prev == 0) {
        *(u32 *)(obj + 0x88) = next;
    }
    else {
        *(u32 *)(prev + 0x10) = next;
    }
}
