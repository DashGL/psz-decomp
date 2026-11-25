// FUN_0209a908 @ 0x0209a908 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0209a908 @ 0x0209a908 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize when counter negative then decrement wrapping counter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a908.txt.
 */
extern void FUN_0209b030(void *); void FUN_0209a908(unsigned int *self) { if((int)self[2]<0) FUN_0209b030(self); self[2]--; }
