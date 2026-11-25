// FUN_02099444 @ 0x02099444 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02099444 @ 0x02099444 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Get lazily initialized global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099444.txt.
 */
extern void FUN_020993f8(void); void *FUN_02099444(void) { if(!*(void **)0x0211a618) FUN_020993f8(); return *(void **)0x0211a618; }
