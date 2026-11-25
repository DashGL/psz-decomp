// FUN_02094154 @ 0x02094154 (0x3a, thumb) - ported from FUN_0209b208 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: construct two-word state descriptor from category and indexed row.
 * Reached through0209b30c by banked0209dae8. Category8 delegates to0209da78
 * using index. Other categories resolve an8-byte row; success re-reads
 * category after lookup and uses row word0, failure writes(-1,-1).
 * Only three inputs are consumed; Ghidra's extra arguments are incidental.
 * Domain names remain ???. Evidence: scratch/draft-coverage/batch20/0209b208-asm.txt.
 */
typedef unsigned int u32;
extern void FUN_02083244(u32 *,int),FUN_0206d0c4(u32 *,u32,u32);
extern u32 *FUN_02094190(u32 *,int);
void FUN_02094154(u32 *output,u32 *descriptor,int index)
{
    u32 *record;
    if (descriptor[0]==8) {FUN_02083244(output,index);return;}
    record=FUN_02094190(descriptor,index);
    if (record) {FUN_0206d0c4(output,descriptor[0],record[0]);return;}
    FUN_0206d0c4(output,~0u,~0u);
}
