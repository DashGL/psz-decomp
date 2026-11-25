// FUN_02046660 @ 0x02046660 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046660 @ 0x02046660 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02046660.txt.
 */
extern int FUN_0203a820(void *,int); extern int FUN_0203a1a8(void *,int); extern unsigned int *FUN_02084568(void *);
int FUN_02046660(void *unused,void *s) { int result=-1; if(FUN_0203a820(s,0) && !FUN_0203a1a8(s,17)) { unsigned int *p=FUN_02084568(s); if(p) result=(*p<<14)>>27; } return result; }
