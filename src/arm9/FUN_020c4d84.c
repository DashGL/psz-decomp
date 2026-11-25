// FUN_020c4d84 @ 0x020c4d84 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c4d84 @ 0x020c4d84
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve record; store supplied word and size minus8, then write eight-byte header.
 * Evidence: scratch/coverage-root/batch10/020c4d84.txt.
 */
extern int FUN_020c4e8c(unsigned char *,int,unsigned int *,unsigned int *);
extern int FUN_020c4ca4(unsigned char *,unsigned int,const void *,unsigned int);
int FUN_020c4d84(unsigned char *self,int index,unsigned int value){unsigned int offset=0,size=0;if(!FUN_020c4e8c(self,index,&offset,&size)){*(unsigned int *)(self+0x24)=106;return 0;}*(unsigned int *)(self+0x3c)=value;*(unsigned int *)(self+0x40)=size-8;return FUN_020c4ca4(self,offset,self+0x3c,8);}
