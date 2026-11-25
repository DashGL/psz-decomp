// FUN_02040204 @ 0x02040204 (0x12, thumb) - ported from FUN_0205c470 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve selected gameplay row by context and row index.
 * Banked weighted selector577ac supplies chosen rowID and context.
 * Follow owner+20 -> context*8+c -> word0 row base; row stride12.
 * No bounds/null checks in ROM. Row field domains ???.
 * Evidence: scratch/draft-coverage/batch46/0205c470-disassemble.txt.
 */
typedef unsigned int u32;
u32 FUN_02040204(u32 owner,u32 row,u32 context)
{
    u32 tables=*(u32 *)(owner+0x20);
    u32 entry=*(u32 *)(tables+context*8+0xc);
    return *(u32 *)entry+row*12;
}
