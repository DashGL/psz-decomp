// FUN_020c35ac @ 0x020c35ac (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c35ac @ 0x020c35ac
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For second argument 0/1, transfer fixed 32-byte source through selected helper; other modes no-op.
 * Evidence: scratch/coverage-root/batch4/020c35ac.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0205eb64(void *,int,unsigned int),FUN_0205ebb8(void *,int,unsigned int);
void FUN_020c35ac(void *self,int mode) {
    switch(mode) { case 0:FUN_0205eb64((void *)0x020f5c24,0,32);break;case 1:FUN_0205ebb8((void *)0x020f5c24,0,32);break; }
}
