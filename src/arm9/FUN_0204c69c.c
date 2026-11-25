// FUN_0204c69c @ 0x0204c69c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c69c @ 0x0204c69c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Forward optional child +11c with second argument.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/0204c69c.txt.
 */
extern void FUN_0204d7e4(void *,void *);
void FUN_0204c69c(char *self,void *arg) { void *child=*(void **)(self+0x11c); if(child) FUN_0204d7e4(child,arg); }
