// FUN_020bc628 @ 0x020bc628 (0xe, thumb) - ported from FUN_020aa664 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Banked spatial constructor54ebc passes converted input and reciprocal
 * output fields. Load input before service call, store returned word into
 * output afterward. SDK/hardware reciprocal service remains external.
 * Evidence: scratch/draft-coverage/batch139/.
 */
typedef unsigned int u32;
extern u32 FUN_0205c540(u32 value);
void FUN_020bc628(u32 *output,const u32 *input)
{
    *output=FUN_0205c540(*input);
}
