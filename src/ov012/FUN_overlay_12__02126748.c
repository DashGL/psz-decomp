// FUN_overlay_12__02126748 @ 0x02126748 (0x150, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x150 candidate=0x150 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 nine-state entry; complete switch and tail extent0x150.
extern void *FUN_020ba918(unsigned),*FUN_overlay_12__02125e18(void *,void *);
extern void FUN_overlay_12__02125efc(void *,int),FUN_overlay_12__02125f0c(void *,void *),FUN_overlay_12__021268fc(void *),FUN_overlay_12__02126a14(void *),FUN_overlay_12__02132478(void);
extern int FUN_overlay_12__02125f28(void *,unsigned);
extern void *FUN_overlay_12__02126ad0(void *),*FUN_overlay_12__02126b20(void *);
void FUN_overlay_12__02126748(char *self,unsigned state){void *p,*text;switch(state){
case 0:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){FUN_overlay_12__02125efc(p,2);FUN_overlay_12__02125f28(*(void **)(self+24),8);}break;
case 1:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){FUN_overlay_12__02125efc(p,3);FUN_overlay_12__02125f28(*(void **)(self+24),8);}break;
case 2:
*(int *)(self+16)=-1;*(int *)(self+20)=-1;FUN_overlay_12__021268fc(self);break;
case 3:
*(int *)(self+20)=-1;FUN_overlay_12__02126a14(self);break;
case 4:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){text=FUN_overlay_12__02126ad0(self);FUN_overlay_12__02125f0c(*(void **)(self+24),text);FUN_overlay_12__02125f28(*(void **)(self+24),7);FUN_overlay_12__02125f28(*(void **)(self+24),9);}break;
case 5:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){FUN_overlay_12__02125efc(p,4);FUN_overlay_12__02125f28(*(void **)(self+24),8);}break;
case 6:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){FUN_overlay_12__02125efc(p,22);FUN_overlay_12__02125f28(*(void **)(self+24),8);}break;
case 7:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+24)=p;if(p){text=FUN_overlay_12__02126b20(self);FUN_overlay_12__02125f0c(*(void **)(self+24),text);FUN_overlay_12__02125f28(*(void **)(self+24),8);}break;
case 8:
FUN_overlay_12__02132478();break;
}}
