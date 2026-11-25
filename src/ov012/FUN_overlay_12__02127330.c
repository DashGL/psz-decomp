// FUN_overlay_12__02127330 @ 0x02127330 (0x136, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x136 candidate=0x136 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 seven-state entry; full switch and tail through27466.
extern void *FUN_020ba918(unsigned),*FUN_overlay_12__02125e18(void *,void *);
extern void FUN_overlay_12__02125efc(void *,int),FUN_overlay_12__02125f0c(void *,void *),FUN_overlay_12__021274b8(void *),FUN_overlay_12__02132478(void);
extern int FUN_overlay_12__02125f28(void *,unsigned);
extern void *FUN_overlay_12__0212767c(void *),*FUN_overlay_12__021276cc(void *);
void FUN_overlay_12__02127330(char *self,unsigned state){void *p,*text;switch(state){
case 0:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+16)=p;if(p){FUN_overlay_12__02125efc(p,10);FUN_overlay_12__02125f28(*(void **)(self+16),8);}break;
case 1:
*(int *)(self+20)=-1;*(int *)(self+24)=-1;FUN_overlay_12__021274b8(self);break;
case 2:
*(int *)(self+24)=-1;p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+16)=p;if(p){FUN_overlay_12__02125efc(p,11);FUN_overlay_12__02125f28(*(void **)(self+16),12);FUN_overlay_12__02125f28(*(void **)(self+16),13);FUN_overlay_12__02125f28(*(void **)(self+16),14);FUN_overlay_12__02125f28(*(void **)(self+16),15);}break;
case 3:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+16)=p;if(p){text=FUN_overlay_12__0212767c(self);FUN_overlay_12__02125f0c(*(void **)(self+16),text);FUN_overlay_12__02125f28(*(void **)(self+16),7);FUN_overlay_12__02125f28(*(void **)(self+16),9);}break;
case 4:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+16)=p;if(p){FUN_overlay_12__02125efc(p,4);FUN_overlay_12__02125f28(*(void **)(self+16),8);}break;
case 5:
p=FUN_020ba918(364);if(p)p=FUN_overlay_12__02125e18(p,*(void **)(self+12));*(void **)(self+16)=p;if(p){text=FUN_overlay_12__021276cc(self);FUN_overlay_12__02125f0c(*(void **)(self+16),text);FUN_overlay_12__02125f28(*(void **)(self+16),8);}break;
case 6:
FUN_overlay_12__02132478();break;
}}
