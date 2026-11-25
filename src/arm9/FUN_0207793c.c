// FUN_0207793c @ 0x0207793c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_0207793c @ 0x0207793c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Free optional global object and clear global slot, retaining nested null test from target.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207793c.txt.
 */
extern void FUN_020ba8ac(void *);
void FUN_0207793c(void) { void *object=*(void **)0x0211a3ac; if(object) { if(object) FUN_020ba8ac(object); *(void **)0x0211a3ac=0; } }
