// FUN_0209a434 @ 0x0209a434 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209a434 @ 0x0209a434 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and release identifier through global manager then free receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a434.txt.
 */
extern void FUN_0203528c(void *,unsigned int), FUN_020ba8ac(void *); void *FUN_0209a434(unsigned int *self) { self[0]=0x020fb3c8; FUN_0203528c(*(void **)0x02108cf4,self[2]); FUN_020ba8ac(self); return self; }
