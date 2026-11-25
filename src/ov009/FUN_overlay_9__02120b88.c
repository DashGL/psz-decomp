// FUN_overlay_9__02120b88 @ 0x02120b88 (0x14, thumb) - ported from FUN_020468e8 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Clean subobject+b0 through81c24, then485c8(self).
 * No self deallocation at this layer. Return original self after calls.
 * Livea53d8 constructs through46070/468b0; final tablese5830/e5a0c
 * reference these cleanup slots. Inventory entry exists but frozen-live
 * admission does not; no count credit or gameplay/promotion claim.
 * Detailed cleanup roles ???. Evidence: scratch/draft-coverage/batch182/.
 */
extern void FUN_020b3074(void *),FUN_020b2194(void *),FUN_02047d7c(void *),FUN_020ab578(void *);
char *FUN_overlay_9__02120b88(char *self)
{
    FUN_020b3074(self+0x70);
    FUN_020b2194(self);
    return self;
}
