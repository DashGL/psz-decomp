// FUN_overlay_12__02128338 @ 0x02128338 (0x14c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x14c candidate=0x14c words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 inventory-menu constructor; full records/callback provenance batch27.
typedef struct Config{unsigned words[7];}Config;
extern void FUN_overlay_12__02128304(void *,void *),FUN_overlay_12__02134868(int),FUN_overlay_12__0212c824(unsigned),FUN_overlay_12__02131b70(unsigned),FUN_overlay_12__02131b10(int),FUN_overlay_12__02133744(void *,unsigned),FUN_overlay_12__0213248c(void *,Config *,unsigned,unsigned,unsigned),FUN_overlay_12__0212c8f8(void *,int,int,int),FUN_overlay_12__02128600(void *),FUN_overlay_12__02127f4c(void *,void *,int);
extern void *FUN_0203955c(void *),*FUN_020ba894(unsigned),*FUN_overlay_12__02128318(void *,void *),*FUN_overlay_12__02128228(void *,int);extern char *FUN_02086e3c(void);extern unsigned FUN_overlay_12__02128324(void);
void *FUN_overlay_12__02128338(unsigned *self,unsigned *settings,void *resource){void *adapter;char *bag;Config first,second;
 FUN_overlay_12__02128304(self,settings);self[0]=0x0213df40;self[3]=0x0213dde8;self[4]=0;self[5]=0;self[6]=0;self[7]=0;self[12]=0;*(void **)0x0213f198=self;
 FUN_overlay_12__02134868(0);FUN_0203955c(self+8);FUN_overlay_12__0212c824(0);FUN_overlay_12__02131b70(0);FUN_overlay_12__02131b10(3);
 adapter=FUN_020ba894(8);if(adapter)adapter=FUN_overlay_12__02128318(adapter,resource);*(void **)(self+6)=adapter;FUN_overlay_12__02133744(*(void **)0x0213f2fc,1);
 if(settings[0]==0){first=*(const Config *)0x02138508;FUN_overlay_12__0213248c(*(void **)0x0213f2fc,&first,1,1,0);FUN_overlay_12__0212c8f8(FUN_overlay_12__02128228(resource,0),8,31,2);}
 else{second=*(const Config *)0x02138524;FUN_overlay_12__0213248c(*(void **)0x0213f2fc,&second,1,1,0);FUN_overlay_12__02128324();FUN_overlay_12__0212c8f8(FUN_overlay_12__02128228(resource,1),8,31,2);}
 FUN_overlay_12__02128600(self);if(self[1]==0){if(self[2]==0)bag=FUN_02086e3c()+40;else bag=FUN_02086e3c()+28;
 if(self[2]==0)FUN_overlay_12__02127f4c(self+3,bag,2);else FUN_overlay_12__02127f4c(self+3,bag,1);
 }else FUN_overlay_12__02127f4c(self+3,FUN_02086e3c()+16,0);return self;
}
