// FUN_020bc788 @ 0x020bc788 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020bc788 @ 0x020bc788 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release buffer if owned and nonnull; return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc788.txt.
 */
extern void FUN_020ba8b4(void *); void *FUN_020bc788(unsigned int *self) { if(self[1]==0 && self[3]) FUN_020ba8b4((void *)self[3]); return self; }
