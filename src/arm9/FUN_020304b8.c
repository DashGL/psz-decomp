// FUN_020304b8 @ 0x020304b8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020304b8 @ 0x020304b8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Forward optional child +10 and supplied data with forced option one.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020304b8.txt.
 */
extern void FUN_02044c08(void *,void *,int);
void FUN_020304b8(char *self,void *data) { void *child=*(void **)(self+16); if(child) FUN_02044c08(child,data,1); }
