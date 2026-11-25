// FUN_overlay_12__02129208 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x148 candidate=0x148 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 amount-menu constructor; full records/callback provenance batch26.
extern char G_02138540[]; extern char G_0213855C[]; extern char G_0213E070[]; extern char G_0213F2B8[]; extern char G_0213F2FC[];
typedef struct Config{unsigned words[7];}Config;
extern void FUN_overlay_12__02128304(void *,void *),FUN_overlay_12__02134868(int),FUN_overlay_12__0212c824(unsigned),FUN_overlay_12__02131b70(unsigned),FUN_overlay_12__02131b10(int),FUN_overlay_12__02120d58(void *,void *),FUN_overlay_12__02133264(void *,Config *),FUN_overlay_12__021295b8(void *,void *);
extern void *FUN_020ba894(unsigned),*FUN_overlay_12__02128318(void *,void *),*FUN_overlay_12__0212144c(void),*FUN_02086e3c(void);
extern char *FUN_020870c4(void *),*FUN_0208724c(void *);
void *FUN_overlay_12__02129208(unsigned *self,void *settings,void *resource){void *adapter;int amount,bound,available;Config first,second;
 FUN_overlay_12__02128304(self,settings);self[0]=0x0213e060;self[3]=0;self[4]=0;self[5]=0x0213ddd8;self[6]=0;self[7]=0;self[8]=0;*(void **)G_0213F2B8=self;
 FUN_overlay_12__02134868(0);FUN_overlay_12__0212c824(0);FUN_overlay_12__02131b70(0);FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);FUN_overlay_12__02131b10(2);FUN_overlay_12__02131b10(3);
 adapter=FUN_020ba894(8);if(adapter)adapter=FUN_overlay_12__02128318(adapter,resource);*(void **)(self+7)=adapter;
 FUN_overlay_12__02120d58(FUN_overlay_12__0212144c(),(void *)G_0213E070);
 if(self[1]==0){amount=*(int *)(FUN_020870c4(FUN_02086e3c())+0xcf4);if(self[2]==0)amount=*(int *)(FUN_0208724c(FUN_02086e3c())+1600);
 bound=(int)(99999999u-(unsigned)amount);available=*(int *)(FUN_020870c4(FUN_02086e3c())+52);if(available<bound)bound=available;
 first=*(const Config *)G_02138540;first.words[2]=bound;first.words[4]=bound;FUN_overlay_12__02133264(*(void **)G_0213F2FC,&first);
 }else{amount=*(int *)(FUN_020870c4(FUN_02086e3c())+52);bound=(int)(99999999u-(unsigned)amount);
 available=*(int *)(FUN_020870c4(FUN_02086e3c())+0xcf4);if(self[2]==0)available=*(int *)(FUN_0208724c(FUN_02086e3c())+1600);if(available<bound)bound=available;
 second=*(const Config *)G_0213855C;second.words[2]=bound;FUN_overlay_12__02133264(*(void **)G_0213F2FC,&second);}
 FUN_overlay_12__021295b8(self,resource);return self;
}
