// FUN_0209cf8c @ 0x0209cf8c (0x1a, thumb) - ported from FUN_0204c520 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: reset two optional gameplay containers, in index order.
 * Banked state reset9ac7c supplies sub-container+2c. Read second pointer
 * after first reset call; do not clear either stored pointer. ROM passes
 * each nonnull pointer in r0 to5d3c0 despite Ghidra's omitted argument.
 * Evidence: scratch/draft-coverage/batch49/0204c520-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_0207f178(u32 *);
void FUN_0209cf8c(u32 **containers)
{
    if(containers[0]) FUN_0207f178(containers[0]);
    if(containers[1]) FUN_0207f178(containers[1]);
}
