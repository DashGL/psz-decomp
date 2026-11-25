// FUN_0203b3f8 @ 0x0203b3f8 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b3f8 @ 0x0203b3f8 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/0203b3f8.txt.
 */
int FUN_0203b3f8(char *s) { int state=*(int *)(s+0x240); if(state==20 || state==21 || state==27 || state==28 || state==22) return 1; return 0; }
