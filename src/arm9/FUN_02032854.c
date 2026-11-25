// FUN_02032854 @ 0x02032854 (0x18, thumb) - ported from FUN_0209bacc [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: query a marker value for the active signed-byte record selector.
 * Banked directional marker020c22c4 invokes this with the game context.
 * Missing object word0 returns0. Otherwise pass that object and signed
 * context byte+0x16 to0209d760, returning its halfword value. Ghidra's extra
 * arguments are incidental: callee overwrites saved r2/r3 slots before reads.
 * Selector/return domain names are ???.
 * Evidence: scratch/draft-coverage/batch18/0209bacc-asm.txt and
 * scratch/draft-coverage/batch19/02082f20-asm.txt.
 */
typedef unsigned int u32;
extern unsigned short FUN_02082f20(u32,int);
u32 FUN_02032854(u32 *context)
{
    if (*context) return FUN_02082f20(*context,*(signed char *)((unsigned char *)context+0x16));
    return 0;
}
