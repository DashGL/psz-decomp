// FUN_020c4898 @ 0x020c4898 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c4898 @ 0x020c4898
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reject busy states; resolve record/read header then advance offset8 and reduce size8 on success.
 * Evidence: scratch/coverage-root/batch14/020c4898.txt.
 */
extern int FUN_020c4e8c(void *,int,unsigned int *,unsigned int *),FUN_020c4d50(void *,int);
int FUN_020c4898(unsigned char *self,int index,unsigned int *offset,unsigned int *size){unsigned int state=*(unsigned int *)(self+8);if(state==3)return 0;if(state!=0){*(unsigned int *)(self+0x24)=103;return 0;}if(!FUN_020c4e8c(self,index,offset,size)){*(unsigned int *)(self+0x24)=106;return 0;}if(!FUN_020c4d50(self,index))return 0;*offset+=8;*size-=8;return 1;}
