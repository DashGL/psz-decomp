// FUN_020504a4 @ 0x020504a4 (0x18, thumb) - ported from FUN_02072010 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve unsigned index to a 14-byte binding record.
 * Descriptor resolver 7243c calls this for categories0/1. Optional row base
 * at subcontext+0x10; unsigned count at +0x14. Return null when absent or
 * out of range, otherwise row base plus 14*index. Exact row domain ???.
 * Evidence: scratch/draft-coverage/batch32/02072010-disassemble.txt.
 */
typedef unsigned int u32;
#define ROW_BYTES 14
u32 FUN_020504a4(u32 context,u32 index)
{
    u32 rows=*(u32 *)(context+0x10);
    if (rows && index<*(u32 *)(context+0x14)) return rows+index*ROW_BYTES;
    return 0;
}
