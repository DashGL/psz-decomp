// FUN_02030540 @ 0x02030540 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030540 @ 0x02030540 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Map input and query optional global manager; absent manager returns zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02030540.txt.
 */
extern unsigned int FUN_020304f8(void *),FUN_020508ac(void *,unsigned int);
unsigned int FUN_02030540(void *self) { void *manager=*(void **)0x0210e240; if(manager) return FUN_020508ac(manager,FUN_020304f8(self)); return 0; }
