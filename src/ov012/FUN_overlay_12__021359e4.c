// FUN_overlay_12__021359e4 @ 0x021359e4 (0x9c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 sellable inventory list population and equipment-flag tagging, full 156-byte extent including literal pool.
typedef struct{int w[6];} Config;
extern int FUN_overlay_12__02134214(void),FUN_overlay_12__021344f8(void *);
extern char *FUN_02086e3c(void);
extern void *FUN_020b00ac(void *,int);
extern void FUN_overlay_12__021323b0(void *,Config *);
int FUN_overlay_12__021359e4(void *self){if(FUN_overlay_12__02134214()==2){char *player,*inv;int count,i;Config cfg,base;inv=FUN_02086e3c()+16;player=FUN_02086e3c();count=*(short *)(inv+8);i=0;base=*(const Config *)0x0213be50;for(;i<count;i++){void *item=FUN_020b00ac(inv,i);int price=FUN_overlay_12__021344f8(item);if(price>0){cfg=base;cfg.w[0]=i;cfg.w[1]=(i>=0&&i<*(short *)(player+12))?(*(void ***)(player+8))[i]!=0:0;cfg.w[5]=price;FUN_overlay_12__021323b0(item,&cfg);}}return 1;}return 0;}
