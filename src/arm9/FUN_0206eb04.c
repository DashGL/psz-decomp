// FUN_0206eb04 @ 0x0206eb04 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206eb04 @ 0x0206eb04
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store truncated second input at +c0, then conditionally forward original three arguments if predicate false.
 * Evidence: scratch/coverage-root/batch6/0206eb04.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020390f4(void *);
extern void FUN_0206eb28(void *,unsigned int,unsigned int);
void FUN_0206eb04(char *self,unsigned int a,unsigned int b) { *(unsigned short *)(self+192)=a;if(!FUN_020390f4(self))FUN_0206eb28(self,a,b); }
