// FUN_02031270 @ 0x02031270 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031270 @ 0x02031270 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward optional child +24 and three arguments; helper consumes all four registers.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02031270.txt.
 */
extern void FUN_0209c52c(void *,int,void *,void *);
void FUN_02031270(char *self,int index,void *a,void *b) { void *child=*(void **)(self+36); if(child) FUN_0209c52c(child,index,a,b); }
