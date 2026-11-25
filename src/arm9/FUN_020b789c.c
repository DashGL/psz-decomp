// FUN_020b789c @ 0x020b789c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020b789c @ 0x020b789c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance owned state and clear owner flag when exhausted.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b789c.txt.
 */
extern void FUN_02098bc8(void *); void FUN_020b789c(char *self) { char *owner=*(char **)(self+12); FUN_02098bc8(*(void **)(owner+8)); --*(int *)(self+8); owner=*(char **)(self+12); if(!(*(int **)(owner+8))[1] || *(int *)(self+8)<=0) *(int *)(owner+48)=0; }
