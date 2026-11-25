// FUN_0206d5e8 @ 0x0206d5e8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d5e8 @ 0x0206d5e8
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query state category through output pointer and accept category zero or four only when query succeeds.
 * Evidence: scratch/coverage-root/batch6/0206d5e8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_0206d3dc(void *,int *);
int FUN_0206d5e8(void *self) { int category=-1;if(FUN_0206d3dc(self,&category)) { if(category==0 || category==4)return 1; }return 0; }
