// FUN_020bce00 @ 0x020bce00 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020bce00 @ 0x020bce00 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global pointer, free receiver and return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bce00.txt.
 */
extern void FUN_020ba8ac(void *); void *FUN_020bce00(void *self) { *(void **)0x0211b3b8=0; FUN_020ba8ac(self); return self; }
