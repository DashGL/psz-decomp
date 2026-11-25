// FUN_02034b8c @ 0x02034b8c (0x1c, thumb) - ported from FUN_0206f074 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* Draft: forward a position query through the active context.
 * Banked 0208bc48 supplies a three-word position and value256. Obtain
 * context from 02034b78; absent context returns null without the query.
 * Otherwise forward original position and value to 0203515c, returning
 * its pointer result. Meaning of the query's halfword value is ???.
 * ROM preserves both inputs across the getter; Ghidra drops its inputs.
 * Evidence: scratch/draft-coverage/batch5/0206f074-asm.txt and callee listing.
 */
extern void *FUN_02034b78(void);
extern void *FUN_0203515c(void *,void *,unsigned int);
void *FUN_02034b8c(void *position,unsigned int value)
{
    void *context=FUN_02034b78();
    if (context) return FUN_0203515c(context,position,value);
    return 0;
}
