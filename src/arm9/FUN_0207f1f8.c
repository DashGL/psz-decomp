// FUN_0207f1f8 @ 0x0207f1f8 (0x14, thumb) - ported from FUN_020a3f30 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: reset game state selection and clear its optional word container.
 * Banked state reset0209ac7c passes the object at context+0x24.
 * Always store sentinel-1 at+8, then pass word0 to0205d3c0 if nonzero.
 * No outer-null guard; higher-level selection/container identity is ???.
 * Evidence: scratch/draft-coverage/batch17/020a3f30-asm.txt and banked caller.
 */
typedef unsigned int u32;
extern void FUN_0207f178(u32);
void FUN_0207f1f8(u32 *state)
{
    state[2]=~0u;
    if (state[0]) FUN_0207f178(state[0]);
}
