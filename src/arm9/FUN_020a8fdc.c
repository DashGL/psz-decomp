// FUN_020a8fdc @ 0x020a8fdc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a8fdc @ 0x020a8fdc (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional global object using nested guards and clear global pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a8fdc.txt.
 */
void FUN_020a8fdc(void) { void *p=*(void **)0x0211a99c; if(p) { if(p) { if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } *(void **)0x0211a99c=0; } } }
