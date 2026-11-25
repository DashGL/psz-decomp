// FUN_020c1334 @ 0x020c1334 (0x8, thumb) - ported from FUN_020acae8 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Direct callee of liveace84. Negative signed inputs negate modulo2^32;
 * INT_MIN therefore stays0x80000000. Other inputs return unchanged.
 * Evidence: scratch/draft-coverage/batch236/. No frozen-count/gameplay claim.
 */
unsigned int FUN_020c1334(int value)
{
 if(value<0) return 0u-(unsigned int)value;
 return (unsigned int)value;
}
