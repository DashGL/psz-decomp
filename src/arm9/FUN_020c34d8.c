// FUN_020c34d8 @ 0x020c34d8 (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c34d8 @ 0x020c34d8
// check: 2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reject active file, reuse matching cached index or release old index, then open and mark active.
 * Evidence: scratch/coverage-root/batch19/020c34d8.txt.
 */
extern int FUN_0205aa34(int,unsigned int),FUN_0205a624(void *,int,unsigned int),FUN_0205a720(void *,void *);
extern void FUN_02059cd4(void *);
int FUN_020c34d8(unsigned char *self,unsigned int index){if(*(unsigned int *)(self+0x78))return 0;if(*(unsigned int *)(self+0x7c)){unsigned int old=*(unsigned int *)(self+0x74);if(old==index)return 1;FUN_0205aa34(0,old);*(unsigned int *)(self+0x7c)=0;}if(!FUN_0205a624(self,0,index))return 0;FUN_02059cd4(self+0x2c);if(!FUN_0205a720(self,self+0x2c))return 0;*(unsigned int *)(self+0x78)=1;*(unsigned int *)(self+0x74)=index;return 1;}
