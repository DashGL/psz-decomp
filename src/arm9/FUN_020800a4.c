// FUN_020800a4 @ 0x020800a4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020800a4 @ 0x020800a4 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply two helpers to a nonnull receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020800a4.txt.
 */
extern void FUN_020800b8(void *), FUN_02080130(void *);
void FUN_020800a4(void *self) { if(self) { FUN_020800b8(self); FUN_02080130(self); } }
