// FUN_overlay_17__02121f00 @ 0x02121f00 (0xc2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__02121f00 @ 0x02121f00 (full extent 0xc2, thumb)
// check: vers=2.0/sp2p3 target=0xc2 candidate=0xc2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete text-page initialization. ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch599.md. */
extern void *FUN_overlay_17__02120980(void);extern void FUN_overlay_17__02120d6c(void *,int);extern int FUN_overlay_17__021223f4(void *,char *,unsigned,const char **,int);extern char *FUN_overlay_17__0211e7a8(unsigned);extern void FUN_020c38f0(void *,int);extern void *FUN_020014d4(void *,const void *,unsigned);
void FUN_overlay_17__02121f00(char *self,const char *text){char *resource;*(const char **)(self+0x230)=text;if(!*(const char **)(self+0x230)||!**(const char **)(self+0x230)){FUN_overlay_17__02120d6c(FUN_overlay_17__02120980(),0);*(int *)(self+0x104)=0;}else{FUN_overlay_17__021223f4(self,self+0x130,256,(const char **)(self+0x230),3);*(int *)(self+0x120)=0;*(int *)(self+0x124)=1;resource=FUN_overlay_17__0211e7a8(*(unsigned *)(self+0xf8));if(resource)*(int *)(resource+0x398)=0;FUN_020c38f0(self,0);FUN_020c38f0(self+0xb4,0);FUN_020014d4(self+0x368+256**(int *)(self+0xd90),self+0x130,256);*(int *)(self+0xd68+4**(int *)(self+0xd90))=*(int *)(self+0x118);*(int *)(self+0xd94)=*(int *)(self+0xd90);*(int *)(self+0xd90)=(int)((unsigned)*(int *)(self+0xd90)+1)%10;}}
