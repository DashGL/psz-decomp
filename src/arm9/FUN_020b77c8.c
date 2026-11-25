// FUN_020b77c8 @ 0x020b77c8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020b77c8 @ 0x020b77c8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Free optional global object with nested guard and clear pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b77c8.txt.
 */
extern void FUN_020ba8ac(void *); void FUN_020b77c8(void) { void *p=*(void **)0x0211b278; if(p) { if(p) FUN_020ba8ac(p); *(void **)0x0211b278=0; } }
