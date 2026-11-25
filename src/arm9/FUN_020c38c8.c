// FUN_020c38c8 @ 0x020c38c8 (0x26, thumb) - ported from FUN_020a9a74 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Ignore receiver. Add signed origin%8 to span with32-bit wrap, divide
 * signed by8 truncating toward zero, then add1 for ANY nonzero remainder.
 * Negative inputs therefore are not conventional mathematical ceiling.
 * Caller a2cdc multiplies counts for spans90 and22 into field+3c before
 * presentation setup. Exact block/content role ???.
 * Evidence: scratch/draft-coverage/batch128/.
 */
typedef unsigned int u32;
int FUN_020c38c8(u32 unused,int span,int origin)
{
    int adjusted=(int)((u32)span+(u32)(origin%8));
    int blocks=adjusted/8;
    if (adjusted%8) blocks++;
    return blocks;
}
