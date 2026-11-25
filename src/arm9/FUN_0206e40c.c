// FUN_0206e40c @ 0x0206e40c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e40c @ 0x0206e40c
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward first five arguments to base, install table and store sixth/seventh inputs at +cc/+d0.
 * Evidence: scratch/coverage-root/batch6/0206e40c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0206e4d0(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void *FUN_0206e40c(char *self,unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f) {
    FUN_0206e4d0(self,a,b,c,d);*(unsigned int *)self=0x020f9800;*(unsigned int *)(self+204)=e;*(unsigned int *)(self+208)=f;return self;
}
