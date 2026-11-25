// FUN_02038774 @ 0x02038774 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038774 @ 0x02038774 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Return false only when optional child +8c helper with slot zero is true.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02038774.txt.
 */
extern int FUN_02042418(void *,int);
int FUN_02038774(char *self) { void *child=*(void **)(self+0x8c); if(child && FUN_02042418(child,0)) return 0; return 1; }
