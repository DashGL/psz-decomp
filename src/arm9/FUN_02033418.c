// FUN_02033418 @ 0x02033418 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033418 @ 0x02033418 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Construct 16-byte temporary with two forwarded arguments and submit it to receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02033418.txt.
 */
extern void FUN_020331fc(void *,unsigned int,unsigned int);
extern int FUN_02033338(void *,void *);
int FUN_02033418(void *self,unsigned int a,unsigned int b) { unsigned int temp[4]; FUN_020331fc(temp,a,b); return FUN_02033338(self,temp); }
