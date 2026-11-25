// FUN_02079144 @ 0x02079144 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_02079144 @ 0x02079144 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Free optional global object then clear slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079144.txt.
 */
extern void FUN_020ba8ac(void *);
void FUN_02079144(void) { void *object=*(void **)0x0211a428; if(object) { if(object) FUN_020ba8ac(object); *(void **)0x0211a428=0; } }
