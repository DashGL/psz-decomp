// FUN_overlay_4__02120110 @ 0x02120110 (0x1e, thumb) - ported from FUN_020bec38 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Livebe684 calls this. Fields4/8/c must each differ from-1; zero is valid.
 * Actual32 bytes; inventory40 includes separate setterbec58. Domain roles
 * of individual resources ???. Evidence: scratch/draft-coverage/batch255/.
 */
int FUN_overlay_4__02120110(unsigned int *object)
{
    return object[1]!=0xffffffffu && object[2]!=0xffffffffu && object[3]!=0xffffffffu;
}
