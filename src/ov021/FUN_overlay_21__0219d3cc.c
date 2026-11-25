// FUN_overlay_21__0219d3cc @ 0x0219d3cc (0x12, thumb) - ported from FUN_020460b4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Call47d7c(self).
 * Then deallocate self throughab578. Return original self after calls.
 * Livea53d8 constructs through46070/468b0; final tablese5830/e5a0c
 * reference these cleanup slots. Inventory entry exists but frozen-live
 * admission does not; no count credit or gameplay/promotion claim.
 * Detailed cleanup roles ???. Evidence: scratch/draft-coverage/batch182/.
 */
extern void FUN_02081c24(void *),FUN_020485c8(void *),FUN_overlay_21__0219b6e4(void *),FUN_020ba8ac(void *);
char *FUN_overlay_21__0219d3cc(char *self)
{
    FUN_overlay_21__0219b6e4(self);
    FUN_020ba8ac(self);
    return self;
}
