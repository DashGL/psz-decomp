// FUN_02030d98 @ 0x02030d98 (0xe, thumb) - ported from FUN_020a090c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: normalize an input flag to a word boolean at child+8.
 * Banked entity entry selector02071a84 propagates entry bit0 through here.
 * All nonzero inputs become1, zero becomes0. Child field meaning is ???.
 * Evidence: scratch/draft-coverage/batch14/020a090c-asm.txt and banked caller.
 */
typedef unsigned int u32;
#define CHILD_BOOLEAN_OFF 8
void FUN_02030d98(u32 child,int enabled)
{
    *(u32 *)(child+CHILD_BOOLEAN_OFF)=(enabled!=0);
}
