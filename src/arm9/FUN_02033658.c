// FUN_02033658 @ 0x02033658 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033658 @ 0x02033658 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/02033658.txt.
 */
extern void *FUN_02090c20(void); extern void FUN_02090f74(short *,void *,unsigned int,int); extern void FUN_020c193c(void *,void *,int,int,int);
void FUN_02033658(void *a,void *b,unsigned int value) { short pair[2]; FUN_02090f74(pair,FUN_02090c20(),value,0); FUN_020c193c(a,b,pair[0],pair[1],-1); }
