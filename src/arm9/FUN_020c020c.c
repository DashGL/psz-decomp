// FUN_020c020c @ 0x020c020c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// FUN_020c020c @ 0x020c020c
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two words then forward destination and third argument to helper.
 * Evidence: scratch/coverage-root/batch2/020c020c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_02034e98(void *,void *);
void FUN_020c020c(unsigned int *self,const unsigned int *source,void *arg) {
    self[0]=source[0]; self[1]=source[1]; FUN_02034e98(self,arg);
}
