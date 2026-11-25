// FUN_0209081c @ 0x0209081c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209081c @ 0x0209081c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily initialize and return global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209081c.txt.
 */
extern void FUN_020907d4(void); void *FUN_0209081c(void) { if(!*(void **)0x0211a598) FUN_020907d4(); return *(void **)0x0211a598; }
