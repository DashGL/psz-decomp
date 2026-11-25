// FUN_02038790 @ 0x02038790 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038790 @ 0x02038790 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Return true only when optional child +8c helper with slot zero is true.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02038790.txt.
 */
extern int FUN_0204243c(void *,int);
int FUN_02038790(char *self) { void *child=*(void **)(self+0x8c); if(child && FUN_0204243c(child,0)) return 1; return 0; }
