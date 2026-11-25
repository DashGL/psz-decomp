// FUN_02066378 @ 0x02066378 (0x34, arm) - ported from FUN_0202ca5c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02066378 - list pop-head, ARM, 0x34. Node = *headp; headp->head =
 * node->next (@+0x80); if next: next->prev(=node slot @+0x7c) = 0; else
 * headp->last (@+4) = 0 AND the popped node's queue handle (@+0x78) = 0.
 * (R56 correction: the header prose here had +0x78 labeled as the node's
 * 'next' - the body reads next at +0x80 and clears the +0x78 QUEUE HANDLE,
 * the node's back-pointer to its queue: c9e4/d02c's NODE_QUEUE_OFF.) Returns the removed node.
 * Branch-body ORDER was load-bearing: spelling the next!=0 arm FIRST (empty
 * list fallthrough as the else) reproduces the target's cond-code layout;
 * zero-store-first variants (moveq/streq order) grew to 0x3c. Verified
 * dsi/1.1 -noThumb -O4,p.
 */
typedef unsigned int u32;

int FUN_02066378(u32 *headp)
{
    u32 node = *headp;
    if (node != 0) {
        u32 next = *(u32 *)(node + 0x80);
        *headp = next;
        if (next != 0) {
            *(u32 *)(next + 0x7c) = 0;
        }
        else {
            headp[1] = 0;
            *(u32 *)(node + 0x78) = 0;
        }
    }
    return node;
}
