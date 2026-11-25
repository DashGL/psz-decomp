// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__02134dac @ 0x02134dac (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full connection-state dispatcher including switch table and literal tail. */
extern char * D_0213e8e8;
extern unsigned FUN_overlay_15__021342dc(void);extern int FUN_overlay_15__021342e8(void);extern unsigned short FUN_overlay_15__0213448c(void);extern void FUN_overlay_15__021347b0(void);
#pragma thumb off
extern void FUN_02068728(void);
#pragma thumb on
#define G (D_0213e8e8)
void FUN_overlay_15__02134dac(void){switch(FUN_overlay_15__021342dc()){case 1:FUN_overlay_15__021342e8();break;case 7:*(unsigned short *)(G+1610)=FUN_overlay_15__0213448c();*(unsigned *)(G+2712)=0;G[2704]=3;break;case 0:*(unsigned *)(G+2712)=0;G[2704]=3;break;case 9:FUN_overlay_15__021347b0();break;case 3:break;default:FUN_02068728();break;}}
