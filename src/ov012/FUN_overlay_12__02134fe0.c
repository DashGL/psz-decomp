// FUN_overlay_12__02134fe0 @ 0x02134fe0 (0xa2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xa2 candidate=0xa2 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 shop purchase payment deduction (photon drop token vs meseta) and inventory insertion, 162-byte code extent before 2-byte alignment.
extern unsigned int FUN_overlay_12__021341fc(void);
extern void FUN_overlay_12__021321f4(void *),FUN_020a11b4(int),FUN_020c193c(int,int,int,int,int);
extern char *FUN_02086e3c(void),*FUN_020870c4(void *);
extern int FUN_020b04f4(void *,const void *),FUN_020b0450(void *,int,int),FUN_020b028c(void *,void *,int);
int FUN_overlay_12__02134fe0(unsigned char *self){int is_token=FUN_overlay_12__021341fc()==4;if(is_token){unsigned int key;char *inv;int idx;FUN_overlay_12__021321f4(&key);inv=FUN_02086e3c()+16;idx=FUN_020b04f4(inv,&key);if(idx==-1)return 0;if(!FUN_020b0450(inv,idx,*(int *)(self+0x24)))return 0;FUN_020a11b4(*(int *)(self+0x24));}else{char *profile=FUN_020870c4(FUN_02086e3c())+0x2c;int cost=*(int *)(self+0x24);if(*(int *)(profile+8)<cost)return 0;*(int *)(profile+8)-=cost;FUN_020c193c(5,3,0,0,-1);}if(FUN_020b028c(FUN_02086e3c()+16,self+0x14,0)==-1)return 0;return 1;}
