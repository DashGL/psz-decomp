// FUN_020ba0a4 @ 0x020ba0a4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020ba0a4 @ 0x020ba0a4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional global receiver destructor with nested guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba0a4.txt.
 */
void FUN_020ba0a4(void) { void *p=*(void **)0x0211b280; if(p) { if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } } }
