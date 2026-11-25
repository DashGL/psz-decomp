// FUN_020306cc @ 0x020306cc (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020306cc @ 0x020306cc (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward optional child +c and second argument; helper consumes both.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/020306cc.txt.
 */
extern void FUN_02034948(void *,void *);
void FUN_020306cc(char *self,void *arg) { void *child=*(void **)(self+12); if(child) FUN_02034948(child,arg); }
