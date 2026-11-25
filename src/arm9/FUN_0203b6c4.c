// FUN_0203b6c4 @ 0x0203b6c4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b6c4 @ 0x0203b6c4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Copy five-word global record into temporary and pass it with option zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203b6c4.txt.
 */
extern void FUN_02032dfc(void *,void *);
extern int FUN_0206d36c(void *,int);
int FUN_0203b6c4(void *unused_receiver) { unsigned int temp[5]; FUN_02032dfc(temp,*(void **)0x02108c64); return FUN_0206d36c(temp,0); }

// Unused receiver agrees with dedicated caller preparation: notes/reference/resume2-root-20261112/unused-receiver-definition.json
