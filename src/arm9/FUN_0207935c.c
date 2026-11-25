// FUN_0207935c @ 0x0207935c (0x12, thumb) - ported from FUN_0205d218 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* First two words become all-ones; remaining three words zero, in order.
 * Used by the reset path following5d278 and active-state path5d1f4.
 * Exact field roles ???. Evidence: scratch/draft-coverage/batch109/.
 */
void FUN_0207935c(unsigned int *state)
{
    state[0]=~0u;state[1]=~0u;
    state[2]=0;state[3]=0;state[4]=0;
}
