// FUN_020c2228 @ 0x020c2228 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c2228 @ 0x020c2228
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Load aligned resource; validate first output, then extract optional second output, preserving null-data helper call.
 * Evidence: scratch/coverage-root/batch10/020c2228.txt.
 */
extern void *FUN_020ba374(void *,unsigned int *,int);
extern void FUN_020ba8c4(void *);
extern int FUN_02012a24(void *,void **);
extern int FUN_02012a60(void *,void **);
void *FUN_020c2228(void *unused,void **first,void **second,void *path){unsigned int size=0;void *data=FUN_020ba374(path,&size,-32);if(data && !FUN_02012a24(data,first)){if(data)FUN_020ba8c4(data);return 0;}if(!FUN_02012a60(data,second))*second=0;return data;}
