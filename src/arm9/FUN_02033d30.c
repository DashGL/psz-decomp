// FUN_02033d30 @ 0x02033d30 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033d30 @ 0x02033d30 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02033d30.txt.
 */
extern void *FUN_02033c6c(void *,unsigned int); extern void *FUN_02033abc(void *,void *,void *,int); extern void FUN_020344d8(void *,void *,int);
void *FUN_02033d30(void *s,unsigned int id,void *a,void *b,int index) { void *p=FUN_02033c6c(s,id); if(p) { p=FUN_02033abc(p,a,b,index); FUN_020344d8(s,p,index); return p; } return 0; }
