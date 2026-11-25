// FUN_020c4d50 @ 0x020c4d50 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c4d50 @ 0x020c4d50
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve record offset/size; error106 on failure, otherwise read eight bytes into object+0x3c.
 * Evidence: scratch/coverage-root/batch10/020c4d50.txt.
 */
extern int FUN_020c4e8c(unsigned char *,int,unsigned int *,unsigned int *);
extern int FUN_020c4bfc(unsigned char *,unsigned int,void *,unsigned int);
int FUN_020c4d50(unsigned char *self,int index){unsigned int offset=0,size=0;if(!FUN_020c4e8c(self,index,&offset,&size)){*(unsigned int *)(self+0x24)=106;return 0;}return FUN_020c4bfc(self,offset,self+0x3c,8);}
