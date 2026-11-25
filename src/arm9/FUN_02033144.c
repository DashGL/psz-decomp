// FUN_02033144 @ 0x02033144 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033144 @ 0x02033144 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Forward embedded receiver +14 and descriptor to helper; on success set word +74 to one.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02033144.txt.
 */
extern int FUN_0207f47c(void *,void *);
void FUN_02033144(char *self,void *descriptor) { if(FUN_0207f47c(self+20,descriptor)) *(unsigned int *)(self+116)=1; }
