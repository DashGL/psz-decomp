// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// FUN_overlay_12__02137a24 @ 0x02137a24
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Rebuild dirty menu labels according to current option mode. */
extern int data_0213c16c[];
extern int data_0213c174[];
extern void * data_0213f330[];
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02135094(void *),FUN_overlay_12__0212c8f8(void *,int,int,int);extern void *FUN_overlay_12__02135118(void *,int);
#define G (*data_0213f330)
void FUN_overlay_12__02137a24(int *self){int i;if(self[4]&&G){self[4]=0;FUN_overlay_12__0212c9a0();FUN_overlay_12__02135094(FUN_overlay_12__02135118(G,11));if(self[7]==0){for(i=0;i<2;i++)FUN_overlay_12__0212c8f8(FUN_overlay_12__02135118(G,data_0213c16c[i]),13,31+17*i,2);}else{for(i=0;i<3;i++)FUN_overlay_12__0212c8f8(FUN_overlay_12__02135118(G,data_0213c174[i]),13,31+17*i,2);}}}
