// FUN_02050420 @ 0x02050420 (0x1e, thumb) - ported from FUN_02071f90 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve descriptor category2 lookup to a 36-byte row.
 * 7243c reads returned row's signed byte20 to resolve binding data.
 * Optional table pointer at context+8, row base word0, unsigned count word1.
 * Index must be below both 255 and count. No row-base null check.
 * Exact row domain ???. Evidence: scratch/draft-coverage/batch32/02071f90-disassemble.txt.
 */
typedef unsigned int u32;
#define ROW_BYTES 0x24
u32 FUN_02050420(u32 context,u32 index)
{
    u32 table=*(u32 *)(context+8);
    if (table && index<255 && index<*(u32 *)(table+4))
        return *(u32 *)table+index*ROW_BYTES;
    return 0;
}
