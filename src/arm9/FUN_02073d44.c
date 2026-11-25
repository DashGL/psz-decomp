// FUN_02073d44 @ 0x02073d44 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02073d44 @ 0x02073d44 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, destroy optional child, clear it and run base cleanup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073d44.txt.
 */
extern void FUN_020b9e28(void *),FUN_020ba940(void *); void *FUN_02073d44(unsigned int *self) { self[0]=0x020f9ad0; if(self[8]) { void *p=(void *)self[8]; if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } self[8]=0; } FUN_020b9e28(self); return self; }
