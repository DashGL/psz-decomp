// FUN_0203339c @ 0x0203339c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203339c @ 0x0203339c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Pop last 16-byte entry when signed count +50 is in [1,5], otherwise null.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0203339c.txt.
 */
void *FUN_0203339c(char *self) { int count=*(int *)(self+80); if(count>0 && count<=5) { count--; *(int *)(self+80)=count; return self+16*count; } return 0; }
