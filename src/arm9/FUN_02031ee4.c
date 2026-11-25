// FUN_02031ee4 @ 0x02031ee4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031ee4 @ 0x02031ee4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02031ee4.txt.
 */
extern void FUN_020ba8c4(void *); extern void FUN_0203208c(void *);
void FUN_02031ee4(char *s) { int i; for(i=0;i<2;i++) { char *slot=s+4*i; *(unsigned int *)(slot+0xc)=0; if(*(void **)(slot+0x14)) { FUN_020ba8c4(*(void **)(slot+0x14)); *(void **)(slot+0x14)=0; } } FUN_0203208c(s); }
