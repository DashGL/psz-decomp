// FUN_0203cfb4 @ 0x0203cfb4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203cfb4 @ 0x0203cfb4 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Copy embedded triple +6c into supplied output; return value unspecified.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/0203cfb4.txt.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_0203cfb4(Triple *dst,char *self) { *dst=*(Triple *)(self+0x6c); }
