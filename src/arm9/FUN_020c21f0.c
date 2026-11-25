// FUN_020c21f0 @ 0x020c21f0 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c21f0 @ 0x020c21f0
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Load resource with alignment -32 and local size output; keep it only if validation with second input succeeds, else free.
 * Evidence: scratch/coverage-root/batch9/020c21f0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba374(void *,unsigned int *,int);
extern int FUN_02012b3c(void *,unsigned int);
extern void FUN_020ba8c4(void *);
void *FUN_020c21f0(void *unused,unsigned int arg,void *path) { unsigned int size=0;void *data=FUN_020ba374(path,&size,-32);if(data) { if(FUN_02012b3c(data,arg))return data;if(data)FUN_020ba8c4(data);return 0; }return 0; }
