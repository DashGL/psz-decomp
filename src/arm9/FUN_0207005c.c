// FUN_0207005c @ 0x0207005c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0207005c @ 0x0207005c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set flag bit 4 at +f8 and byte +1ff to ff; receiver preserved.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207005c.txt.
 */
void *FUN_0207005c(char *self) { *(unsigned int *)(self+0xf8)|=16; self[0x1ff]=-1; return self; }
