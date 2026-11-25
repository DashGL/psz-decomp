// FUN_020304e8 @ 0x020304e8 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020304e8 @ 0x020304e8 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Forward optional child +14 to handle release.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/020304e8.txt.
 */
extern void FUN_02044d70(void *);
void FUN_020304e8(char *self) { void *child=*(void **)(self+20); if(child) FUN_02044d70(child); }
