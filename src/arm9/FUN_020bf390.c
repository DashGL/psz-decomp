// FUN_020bf390 @ 0x020bf390 (0x1c, thumb) - ported from FUN_020ac900 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Reached through ac880/ac600/ac4fc from liveac394. Cached nonnull first word
 * is released through current manager; both words then clear unconditionally.
 * ac7ac releases pool occupancy; second word's domain identity ???.
 * Evidence: scratch/draft-coverage/batch230/. No frozen-count/gameplay claim.
 */
extern void *FUN_020bf12c(void);
extern void FUN_020bf230(void *,void *);
void FUN_020bf390(void **pair)
{
 void *storage=pair[0];
 if(storage) FUN_020bf230(FUN_020bf12c(),storage);
 pair[0]=0;
 pair[1]=0;
}
