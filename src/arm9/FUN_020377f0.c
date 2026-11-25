// FUN_020377f0 @ 0x020377f0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020377f0 @ 0x020377f0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Install dispatch table, invoke optional child +10 dispatch slot +10, clear child and return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/020377f0.txt.
 */
void *FUN_020377f0(void **self) { void *child; self[0]=(void *)0x020f6fe8; child=self[4]; if(child) { if(child) { void (**table)(void *)=*(void (***)(void *))child; table[4](child); } self[4]=0; } return self; }
