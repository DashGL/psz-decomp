// FUN_02030560 @ 0x02030560 (0x14, thumb) - ported from FUN_02071a58 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: resolve current entry from entity table ID and entry index.
 * Used by transition selection 73408; table helper 73478 handles fallback.
 * Table ID is word+0x28; reload unsigned byte+0x2e after the first call.
 * Return the second call's r0 (Ghidra's void return annotation is wrong).
 * Evidence: scratch/draft-coverage/batch32/02071a58-disassemble.txt.
 */
typedef unsigned int u32;
extern u32 FUN_02034a70(u32),FUN_02030574(u32,u32);
u32 FUN_02030560(u32 entity)
{
    u32 table=FUN_02034a70(*(u32 *)(entity+0x28));
    return FUN_02030574(table,*(unsigned char *)(entity+0x2e));
}
