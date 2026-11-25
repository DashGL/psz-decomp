// FUN_020bf2bc @ 0x020bf2bc (0x1a, thumb) - ported from FUN_020ac830 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020bf2bc @ 0x020ac830 (0x1a Thumb; recorded 0x1c includes padding).
 * Push a node onto the interaction-result free list (release counterpart of
 * FUN_020ac810 acquire); caller FUN_020ac118 uses it to release both nodes on
 * partial allocation failure. Live: 55 entry hits @ ~2.2/s (bp census
 * 2026-09-17); post-release free-list walk (stub memory read) found the
 * released node at manager+0x24c0 head with the 0x4c-stride chain intact.
 * Match shape: node->active = 0 created BEFORE the slot web (dataflow order
 * feeds the allocator: zero -> pushed r4, offset -> r2 kept live across the
 * select); named Node **slot spelling; explicit both-arm if/else (the bare
 * ternary folds the select and drops the push).
 */
typedef unsigned char u8;
typedef struct Node { u8 active; u8 pad[3]; struct Node *next; } Node;
void FUN_020bf2bc(u8 *manager, Node *node)
{
    node->active = 0;
    Node **slot = (Node **)(manager + 0x24c0);
    if (*slot != 0) {
        node->next = *slot;
    } else {
        node->next = 0;
    }
    *slot = node;
}
