// FUN_020ba258 @ 0x020ba258 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020ba258 @ 0x020ba258 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run update on optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba258.txt.
 */
extern void FUN_020b9ebc(void *); void FUN_020ba258(void) { void *p=*(void **)0x0211b280; if(p) FUN_020b9ebc(p); }
