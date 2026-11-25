// FUN_020b745c @ 0x020b745c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b745c @ 0x020b745c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Recognize selector17,18,28,29 or41 through43.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b745c.txt.
 */
int FUN_020b745c(void *unused,unsigned int selector) { if(selector==17 || selector==18 || selector==28 || selector==29 || selector-41<=2) return 1; return 0; }
