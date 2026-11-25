// FUN_overlay_11__0211f0b4 @ 0x0211f0b4 (0x6, thumb) - ported from FUN_0205f8ac [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Livebe684 ->be928 reads this after requesting a potentially rejected
 * group change. Returns full wordd4. Evidence: scratch/draft-coverage/batch261/.
 */
unsigned int FUN_overlay_11__0211f0b4(char *object)
{
    return *(unsigned int *)(object+0xa8);
}
