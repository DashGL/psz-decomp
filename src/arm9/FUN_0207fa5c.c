// FUN_0207fa5c @ 0x0207fa5c (0x1a, thumb) - ported from FUN_020468fc [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Clean subobject+b0 through81c24, then485c8(self).
 * Then deallocate self throughab578. Return original self after calls.
 * Livea53d8 constructs through46070/468b0; final tablese5830/e5a0c
 * reference these cleanup slots. Inventory entry exists but frozen-live
 * admission does not; no count credit or gameplay/promotion claim.
 * Detailed cleanup roles ???. Evidence: scratch/draft-coverage/batch182/.
 */
extern void FUN_020765f8(void *),FUN_020303bc(void *),FUN_02047d7c(void *),FUN_020ba8ac(void *);
char *FUN_0207fa5c(char *self)
{
    FUN_020765f8(self+0x30);
    FUN_020303bc(self);
    FUN_020ba8ac(self);
    return self;
}
