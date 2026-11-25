// FUN_02032e5c @ 0x02032e5c (0x1a, thumb) - ported from FUN_0209c0a4 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: signed-index lookup in inline52-byte active-game records.
 * Count at object+0x410; require0<=index<count. Used by0209c078 from
 * record consumer020573b0. Object base itself is record0, not a table ptr.
 * Unsigned arithmetic preserves machine address wrap. No null guard.
 * Evidence: scratch/draft-coverage/batch71/0209c0a4.disassemble.txt.
 */
typedef unsigned int u32;
u32 FUN_02032e5c(u32 object,int index)
{
    if (index>=0 && index<*(int *)(object+0x410))
        return object+(u32)index*52;
    return 0;
}
