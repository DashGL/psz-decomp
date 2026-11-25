// FUN_overlay_12__0212ecb4 @ 0x0212ecb4 (0xcc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xcc candidate=0xcc words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 272-byte menu constructor with save-count filter, full 204-byte extent including literal pool.
extern void *FUN_overlay_12__02131d80(void *,void *,int),*FUN_overlay_12__0212cbe4(unsigned *),*FUN_020a0ce8(void);
extern void FUN_0200c938(void *,unsigned),FUN_overlay_12__0211f17c(void *),FUN_overlay_12__0211f870(void *,int,int,int);
extern int FUN_overlay_12__02131fd0(void *,int);
void *FUN_overlay_12__0212ecb4(unsigned char *self,void *parent){int *table;unsigned char *save;int i;FUN_overlay_12__02131d80(self,parent,0);*(unsigned *)self=0x0213e500;*(int *)(self+64)=0;*(int *)(self+68)=-1;*(int *)(self+72)=0;*(int *)(self+76)=0;FUN_0200c938(self+80,138);*(int *)(self+220)=0;*(int *)(self+224)=0;FUN_overlay_12__0211f17c(self+228);*(int *)(self+244)=-1;*(int *)(self+248)=0;*(int *)(self+252)=0;*(int *)(self+256)=0;*(int *)(self+260)=0;*(int *)(self+264)=0;*(int *)(self+268)=-1;table=FUN_overlay_12__0212cbe4((unsigned *)(self+76));save=(unsigned char *)FUN_020a0ce8()+236;for(i=0;i<*(int *)(self+76);i++){int id=table[i];if((*(unsigned short *)(save+4+2*id)&0x7fff)>0){*(short *)(self+80+2*(*(int *)(self+72)))=id;(*(int *)(self+72))++;}}FUN_overlay_12__0211f870(self+228,*(int *)(self+72),5,0);FUN_overlay_12__02131fd0(self,0);return self;}
