// FUN_0207226c @ 0x0207226c (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch17-manifest.json; original draft retained for referenced provenance.
// FUN_0207226c @ 0x0207226c (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke receiver virtual slot +78; no additional arguments established by this wrapper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207226c.txt.
 */
void FUN_0207226c(void *self) { void (**table)(void *)=*(void (***)(void *))self; table[30](self); }
