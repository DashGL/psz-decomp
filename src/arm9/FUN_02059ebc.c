// FUN_02059ebc @ 0x02059ebc (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02059ebc @ 0x02059ebc (inventory code 0x40, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 222.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b222/02059ebc.txt.
 */
extern void FUN_02059cd4(void *);extern int FUN_02059cfc(void *,void *,void *,void *);int FUN_02059ebc(void *out,void *path){unsigned int file[18];FUN_02059cd4(file);return FUN_02059cfc(file,path,out,0)!=0;}
