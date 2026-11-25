// FUN_overlay_22__02199f90 @ 0x02199f90 (0x6, thumb) - ported from FUN_020a1838 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: write the two selector words of a game descriptor.
 *0209b208 uses this for selected-record values and the(-1,-1) failure pair;
 * banked state updater0209dae8 reaches that constructor. Store first then
 * second with no guards; selector category names are ???.
 * Evidence: scratch/draft-coverage/batch20/020a1838-asm.txt.
 */
void FUN_overlay_22__02199f90(unsigned int *output,unsigned int first,unsigned int second)
{
    output[0]=first;output[1]=second;
}
