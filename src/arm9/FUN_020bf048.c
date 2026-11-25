// FUN_020bf048 @ 0x020bf048 (0x18, thumb) - ported from FUN_020ac5d0 [banked], verified via tools/match.py (word compare + verify_relocs).
/* Verified byte-exact with dsi/1.1; strict relocated-byte check passed.
 * FUN_020bf048 @ 0x020ac5d0 (0x18 Thumb).
 * Unlink slot from its doubly linked category list and clear both links.
 * A predecessor (possibly a list sentinel) is required; successor may be null.
 * slots is an unused incoming ABI argument, not a second node.
 */
typedef struct Slot {
    unsigned char state[0x10];
    struct Slot *prev;
    struct Slot *next;
} Slot;
void FUN_020bf048(void *slots, Slot *slot)
{
    slot->prev->next = slot->next;
    if (slot->next != 0) {
        slot->next->prev = slot->prev;
    }
    slot->next = 0;
    slot->prev = 0;
}
