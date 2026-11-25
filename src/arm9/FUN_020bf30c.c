// FUN_020bf30c @ 0x020bf30c (0x12, thumb) - ported from FUN_020ac880 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Reached via ac4fc/ac600 from liveac394. Cleans storage pair at payload+4,
 * THEN writes all-ones to payload word0. Domain of the sentinel field ???.
 * Evidence: scratch/draft-coverage/batch230/. No frozen-count/gameplay claim.
 */
extern void FUN_020bf390(void *);
void FUN_020bf30c(char *payload)
{
 FUN_020bf390(payload+4);
 *(unsigned int *)payload=0xffffffffu;
}
