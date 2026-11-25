// FUN_02094190 @ 0x02094190 (0x20, thumb) - ported from FUN_0209b244 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve an indexed two-word record unless descriptor category8.
 * Used by0209b208/0209b318 in banked state updater0209dae8's call tree.
 * Descriptor words: category, table pointer, signed count. Reject category8
 * or signed index outside0..count-1; otherwise table+index*8, no table-null
 * guard. Category/table identities remain ???.
 * Evidence: scratch/draft-coverage/batch20/0209b244-asm.txt.
 */
typedef unsigned int u32;
u32 FUN_02094190(u32 *descriptor,int index)
{
    if (descriptor[0]==8) return 0;
    if (index>=0 && index<(int)descriptor[2]) return descriptor[1]+index*8;
    return 0;
}
