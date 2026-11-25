// FUN_020b43d0 @ 0x020b43d0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b43d0 @ 0x020b43d0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, release optional child and clear it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b43d0.txt.
 */
extern void FUN_02046d88(void *),FUN_020ba8ac(void *); void *FUN_020b43d0(unsigned int *self) { self[0]=0x020fc760; if(self[1]) { FUN_02046d88((void *)self[1]); self[1]=0; } return self; }
