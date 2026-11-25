// FUN_02036368 @ 0x02036368 (0x1c, thumb) - ported from FUN_02045744 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Heading calculation5909c subtracts positions, invokes this guard, then
 * derives an angle. Zero triples skip the existing normalization helper;
 * otherwise both helper arguments are the same triple. Hardware math
 * implementation stays external. Evidence: scratch/draft-coverage/batch95/.
 */
extern void FUN_0205c8cc(const int *,int *);
void FUN_02036368(int *direction)
{
    if (direction[0] || direction[1] || direction[2])
        FUN_0205c8cc(direction,direction);
}
