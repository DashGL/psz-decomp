// FUN_020c4560 @ 0x020c4560 (0x18, thumb) - ported from FUN_020a6f7c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: clear16-byte embedded gameplay subrecord in two ranges.
 * Banked5f304 resets each embedded record through this helper. Preserve
 * ordered external fill calls (first2 bytes, then14), no added stores.
 * SDK fill routine stays external. Evidence:
 * scratch/draft-coverage/batch55/020a6f7c-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_020656b8(u32,int,u32);
void FUN_020c4560(u32 record)
{
    FUN_020656b8(record,0,2);
    FUN_020656b8(record+2,0,14);
}
