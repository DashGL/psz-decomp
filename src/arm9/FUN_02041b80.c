// FUN_02041b80 @ 0x02041b80 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041b80 @ 0x02041b80 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/02041b80.txt.
 */
extern const char DAT_020f8dec[];
extern int FUN_020038ec(void *,unsigned int,const char *,...);
int FUN_02041b80(void *out,const signed char *src) { return FUN_020038ec(out,16,DAT_020f8dec,src[1],src[2],src[3],src[5],src[6],src[7]); }
