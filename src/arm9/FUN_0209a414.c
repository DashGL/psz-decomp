// FUN_0209a414 @ 0x0209a414 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0209a414 @ 0x0209a414 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and release identifier through global manager.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a414.txt.
 */
extern void FUN_0203528c(void *,unsigned int), FUN_020ba8ac(void *); void *FUN_0209a414(unsigned int *self) { self[0]=0x020fb3c8; FUN_0203528c(*(void **)0x02108cf4,self[2]); return self; }
