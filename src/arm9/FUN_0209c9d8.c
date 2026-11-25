// FUN_0209c9d8 @ 0x0209c9d8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209c9d8 @ 0x0209c9d8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy/free optional global object with nested guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c9d8.txt.
 */
extern void FUN_0209e1f8(void *),FUN_020ba8ac(void *); void FUN_0209c9d8(void) { void *p=*(void **)0x0211a620; if(p) { if(p) { FUN_0209e1f8(p); FUN_020ba8ac(p); } *(void **)0x0211a620=0; } }
