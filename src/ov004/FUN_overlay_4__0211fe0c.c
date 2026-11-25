// FUN_overlay_4__0211fe0c @ 0x0211fe0c (0x1a, thumb) - ported from FUN_020be968 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Livebe684 ->bea04 -> here. State1c==1 rejects without writes. Zero
 * accepts preserving counters; any other state clears1c/14/18 and accepts.
 * Exact numeric state roles ???. Evidence: scratch/draft-coverage/batch259/.
 */
int FUN_overlay_4__0211fe0c(unsigned int *object)
{
    if(object[7]==1) return 0;
    if(object[7]) {object[7]=0;object[5]=0;object[6]=0;}
    return 1;
}
