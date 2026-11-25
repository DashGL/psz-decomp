// FUN_02036af0 @ 0x02036af0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02036af0 @ 0x02036af0 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02036af0.txt.
 */
extern void FUN_02036a88(void *,int); extern void FUN_02043fd4(void *); extern void FUN_020446a8(void *); extern void FUN_02072848(void *); extern void FUN_02036ed0(void *,int);
void FUN_02036af0(char *s) { FUN_02036a88(s,0); FUN_02043fd4(s); FUN_020446a8(s); FUN_02072848(s); FUN_02036ed0(s,0); *(unsigned int *)(s+0x94)|=8; }
