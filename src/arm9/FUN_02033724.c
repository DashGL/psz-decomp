// FUN_02033724 @ 0x02033724 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033724 @ 0x02033724 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02033724.txt.
 */
extern void FUN_02033758(short *,unsigned int); extern void *FUN_02050994(void *,int,int);
void *FUN_02033724(unsigned int id) { short pair[2]; FUN_02033758(pair,id); if(pair[0]>=0 && pair[1]>=0) { void *p=*(void **)0x0210e240; if(p) return FUN_02050994(p,pair[0],pair[1]); } return 0; }
