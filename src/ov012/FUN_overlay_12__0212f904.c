// FUN_overlay_12__0212f904 @ 0x0212f904 (0xdc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 228-byte menu constructor with 17-category count init and child allocation, full 220-byte extent including literal pool.
extern void *FUN_overlay_12__02131d80(void *,void *,int),*FUN_020a0ce8(void),*FUN_020ba918(unsigned),*FUN_020b9cf4(void *,void *);
extern void FUN_0200c938(void *,unsigned),FUN_overlay_12__0211f17c(void *);
extern unsigned int FUN_overlay_12__0212d2e8(void *,int);
extern int FUN_overlay_12__02131fd0(void *,int);
void *FUN_overlay_12__0212f904(unsigned char *self,void *parent){unsigned char *save;int i;void *child;FUN_overlay_12__02131d80(self,parent,0);*(unsigned *)self=0x0213e60c;*(int *)(self+64)=0;*(int *)(self+68)=-1;*(int *)(self+72)=-1;*(int *)(self+76)=0;FUN_0200c938(self+80,68);*(int *)(self+148)=0;*(int *)(self+152)=0;*(int *)(self+156)=0;*(int *)(self+164)=0;FUN_overlay_12__0211f17c(self+168);*(int *)(self+184)=-1;*(int *)(self+188)=1;*(int *)(self+192)=0;*(int *)(self+196)=0;*(int *)(self+200)=0;*(int *)(self+204)=0;*(int *)(self+208)=0;*(int *)(self+212)=0;*(int *)(self+216)=0;*(int *)(self+220)=0;*(int *)(self+224)=0;save=(unsigned char *)FUN_020a0ce8()+36;for(i=0;i<17;i++){*(unsigned int *)(self+80+4*i)=FUN_overlay_12__0212d2e8(save,i+1);}child=FUN_020ba918(32);if(child)child=FUN_020b9cf4(child,*(void **)0x02101dd4);*(void **)(self+212)=child;FUN_overlay_12__02131fd0(self,1);return self;}
