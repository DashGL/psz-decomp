// FUN_0206e6c0 @ 0x0206e6c0 (0x16, thumb) - ported from FUN_020708bc [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_0206e6c0 @ 0x020708bc (0x16 true, 0x18 recorded, Thumb) — linked-list
 * append: walk to the node whose +12 link is still null, then store the new
 * item at that node's +12 and the node back at the item's +16. When the link is
 * already populated it RECURSES on it.
 *
 * Bytes (real Thumb decode):
 *   push {r3, lr} ; ldr r2, [r0, #12] ; cmp r2, #0 ; bne 0x206e6ce ;
 *   str r1, [r0, #12] ; str r0, [r1, #16] ; pop {r3, pc} ;
 *   adds r0, r2, #0 ; bl 0x020708bc ; pop {r3, pc} ; (0000)
 *
 * Verified against the disassembly, not the decompile. The recursion is REAL
 * and is the thing the decompile gets wrong: it renders the tail call as a
 * 1-argument `FUN_0206e6c0(*(int *)(param_1 + 12))`, but the bytes show
 * `adds r0, r2, #0` followed by `bl` with r1 NEVER rewritten -- the item
 * argument is still live in r1 from the incoming call, so this is a genuine
 * 2-argument self-call whose second argument happens to already be in place.
 * Both readings emit the same bytes, since r1 needs no copy.
 *
 * The link test is `cmp r2, #0 / bne`, so the NULL arm is the one that falls
 * through into the two stores. The recursion arm therefore needs its own
 * `pop {r3, pc}` rather than a shared tail.
 *
 * Size: 0x16 of code ending in `pop {r3, pc}` at +0x14, then a 2-byte 0000
 * pad at +0x16 -- the inter-function pad class, so the true size is 2 short of
 * the recorded 0x18.
 */
typedef unsigned int u32;
typedef unsigned char u8;

/* The parameters are spelled as PLAIN WORDS, not pointers, and every pointer
 * use is an explicit cast. That is deliberate: with `u32 *` parameters the
 * recursive argument `*(u32 *)((u8 *)node + 12)` is a u32 handed to a u32 *
 * parameter, which dsi and 2.0 accept as a warning but the whole 1.2/* family
 * REJECTS with "illegal implicit conversion from 'unsigned int' to
 * 'unsigned int *'" (BRIEF 16 -- a real type bug, not family noise). Adding
 * the cast silences 1.2 but costs 2 bytes (an extra register shuffle), so the
 * parameters are typed as the integers they are passed as.
 */
void FUN_0206e6c0(u32 node, u32 item)
{
    if (*(u32 *)((u8 *)node + 12) == 0) {
        *(u32 *)((u8 *)node + 12) = item;
        *(u32 *)((u8 *)item + 16) = node;
    } else {
        FUN_0206e6c0(*(u32 *)((u8 *)node + 12), item);
    }
}
