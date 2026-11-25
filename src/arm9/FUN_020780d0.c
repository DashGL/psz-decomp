// FUN_020780d0 @ 0x020780d0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_020780d0 @ 0x020780d0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cleanup and free optional global object, then clear slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020780d0.txt.
 */
extern void FUN_0207811c(void *), FUN_020ba8ac(void *);
void FUN_020780d0(void) { void *object=*(void **)0x0211a3b4; if(object) { if(object) { FUN_0207811c(object); FUN_020ba8ac(object); } *(void **)0x0211a3b4=0; } }
