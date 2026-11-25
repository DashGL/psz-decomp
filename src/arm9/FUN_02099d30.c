// FUN_02099d30 @ 0x02099d30 (0x14, thumb) - ported from FUN_02041810 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: copy first word of selected-item record resolved by418f4.
 * Banked3f4b8 supplies kind and signed selection, then stores result in
 * object word18. No guard is present here; resolver owns lookup contract.
 * Exact word domain ???. Evidence:
 * scratch/draft-coverage/batch50/02041810-disassemble.txt.
 */
typedef unsigned int u32;
extern u32 FUN_02099e14(u32,int,int);
void FUN_02099d30(u32 *output,u32 owner,int kind,int selection)
{
    *output=*(u32 *)FUN_02099e14(owner,kind,selection);
}
