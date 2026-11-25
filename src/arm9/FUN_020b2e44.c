// FUN_020b2e44 @ 0x020b2e44 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_020b2e44 @ 0x020b2e44 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Normalize virtual predicate result for selector zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2e44.txt.
 */
int FUN_020b2e44(void *self,int selector) { if(selector==0) { int (**table)(void *)=*(int (***)(void *))self; if(table[6](self)) return 1; } return 0; }
