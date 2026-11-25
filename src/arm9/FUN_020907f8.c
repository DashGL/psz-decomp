// FUN_020907f8 @ 0x020907f8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020907f8 @ 0x020907f8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cleanup/free optional global object and clear pointer; nested guard retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020907f8.txt.
 */
extern void FUN_0209098c(void *), FUN_020ba8ac(void *);
void FUN_020907f8(void) { void *object=*(void **)0x0211a598; if(object) { if(object) { FUN_0209098c(object); FUN_020ba8ac(object); } *(void **)0x0211a598=0; } }
