// FUN_020c4edc @ 0x020c4edc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c4edc @ 0x020c4edc
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return singleton record size minus8 or all-ones when absent or invalid.
 * Evidence: scratch/coverage-root/batch10/020c4edc.txt.
 */
extern int FUN_020c4e8c(unsigned char *,int,unsigned int *,unsigned int *);
unsigned int FUN_020c4edc(int index){unsigned char *self=*(unsigned char **)0x0211ceec;if(self){unsigned int offset=0,size=0;if(FUN_020c4e8c(self,index,&offset,&size))return size-8;}return ~0u;}
