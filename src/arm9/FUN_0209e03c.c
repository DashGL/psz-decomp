// FUN_0209e03c @ 0x0209e03c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0209e03c @ 0x0209e03c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional child virtual destructor, clear child, set sentinel.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e03c.txt.
 */
void FUN_0209e03c(unsigned int *self) { void *p=(void *)self[2]; if(p) { if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } self[2]=0; } self[3]=65535; }
