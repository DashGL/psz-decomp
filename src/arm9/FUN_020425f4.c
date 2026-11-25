// FUN_020425f4 @ 0x020425f4 (0x16, thumb) - ported from FUN_020705dc [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: attach child to vacant owner slot; only sentinel -1 is rejected.
 * Banked 70264 supplies child and selector. No other range/null check;
 * occupied slot remains unchanged. Slot table starts at owner+0xcc.
 * Evidence: scratch/draft-coverage/batch36/020705dc-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_020425f4(u32 owner,u32 child,int selector)
{
    if (selector!=-1) {
        u32 *slot=(u32 *)(owner+0xcc+(u32)selector*4);
        if (!*slot) *slot=child;
    }
}
