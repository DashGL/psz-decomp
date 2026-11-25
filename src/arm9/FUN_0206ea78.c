// FUN_0206ea78 @ 0x0206ea78 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206ea78 @ 0x0206ea78
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If state predicate is false, reset with zero then forward original three arguments to helper.
 * Evidence: scratch/coverage-root/batch6/0206ea78.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020390f4(void *);
extern void FUN_020391cc(void *,int),FUN_0206ea9c(void *,unsigned int,unsigned int);
void FUN_0206ea78(void *self,unsigned int a,unsigned int b) { if(!FUN_020390f4(self)) { FUN_020391cc(self,0);FUN_0206ea9c(self,a,b); } }
