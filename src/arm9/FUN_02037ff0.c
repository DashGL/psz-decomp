// FUN_02037ff0 @ 0x02037ff0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037ff0 @ 0x02037ff0 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Expand input triple into three register arguments.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02037ff0.txt.
 */
extern void FUN_02038000(void *,unsigned int,unsigned int,unsigned int);
void FUN_02037ff0(void *self,const unsigned int *value) { FUN_02038000(self,value[0],value[1],value[2]); }
