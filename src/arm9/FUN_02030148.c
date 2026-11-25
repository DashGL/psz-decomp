// FUN_02030148 @ 0x02030148 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030148 @ 0x02030148 (inventory code 0x34, arm)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/02030148.txt.
 */
extern void FUN_02066a2c(void *);
void FUN_02030148(unsigned int *s) { if(s[2]==0x01ff81cc) { --s[3]; if(!s[3]) { s[2]=0; FUN_02066a2c(s); } } }
