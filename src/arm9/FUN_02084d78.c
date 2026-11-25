// FUN_02084d78 @ 0x02084d78 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02084d78 @ 0x02084d78 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional global manager via virtual slot +4 and clear pointer; nested null checks preserved.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084d78.txt.
 */
void FUN_02084d78(void) { void *object=*(void **)0x0211a52c; if(object) { if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object; table[1](object); } *(void **)0x0211a52c=0; } } }
