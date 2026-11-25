// FUN_0206d0cc @ 0x0206d0cc (0xa, thumb) - ported from FUN_020a1840 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Called by9b80c at object+0x38. Exact descriptor roles ???.
 * Evidence: scratch/draft-coverage/batch112/.
 */
void FUN_0206d0cc(unsigned int *descriptor)
{
    descriptor[0]=~0u;descriptor[1]=~0u;
}
