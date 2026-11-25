// FUN_020c0340 @ 0x020c0340 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c0340 @ 0x020c0340
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build32-byte rectangle descriptor with fixed axes and half-differences, then call overlap helper.
 * Evidence: scratch/coverage-root/batch16/020c0340.txt.
 */
extern void FUN_020bf66c(void *,const void *,const void *),FUN_02034e98(void *,int),FUN_02034e8c(void *,const void *);
extern int FUN_020c024c(void *,void *,void *);
int FUN_020c0340(const unsigned int *bounds,void *other,void *out){unsigned int frame[8];FUN_020bf66c(frame,bounds+2,bounds);FUN_02034e98(frame,2048);FUN_02034e8c(frame+2,(const void *)0x020f5bf4);FUN_02034e8c(frame+4,(const void *)0x020f5be4);frame[6]=(int)(bounds[2]-bounds[0])/2;frame[7]=(int)(bounds[3]-bounds[1])/2;return FUN_020c024c(frame,other,out);}
