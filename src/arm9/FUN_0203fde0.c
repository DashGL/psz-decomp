// FUN_0203fde0 @ 0x0203fde0 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203fde0 @ 0x0203fde0 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/0203fde0.txt.
 */
extern void FUN_0203fe10(void *,void *);
void FUN_0203fde0(char *s) { int i,count=*(int *)(s+8); for(i=0;i<count;i++) { FUN_0203fe10(s,*(char **)(s+4)+52*i); ((int *)*(void **)(s+0xc))[i]=-1; } *(int *)(s+0x10)=-1; }
