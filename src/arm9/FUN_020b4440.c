// FUN_020b4440 @ 0x020b4440 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_020b4440 @ 0x020b4440 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional receiver virtual destructor with duplicate guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4440.txt.
 */
void FUN_020b4440(void *self) { if(self) { if(self) { void (**table)(void *)=*(void (***)(void *))self; table[1](self); } } }
