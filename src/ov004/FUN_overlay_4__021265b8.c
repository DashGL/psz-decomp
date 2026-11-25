// FUN_overlay_4__021265b8 @ 0x021265b8 (0xdc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch39.json; original draft retained for referenced provenance.
// FUN_overlay_4__021265b8 @ 0x021265b8 (0xdc, Thumb)
// check: vers=2.0/sp2p3 target=0xdc candidate=0xdc words=0 exact_bytes=0 bad_relocs=0
// Draw mode-specific header icons and optional bottom indicators.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(Draw *),FUN_020c32b4(Draw *,int),FUN_020c331c(int,int,int,int),FUN_overlay_4__021266b8(void *);extern void *FUN_02077f3c(void);extern int FUN_02077fec(void *),FUN_02078038(void *),FUN_overlay_4__02126694(void *);
void FUN_overlay_4__021265b8(int *self){Draw d;if(self[0]==10){FUN_020c331c(21,0x10000,0xe8000,self[37]);}else{FUN_02071d0c(&d);FUN_02077fec(FUN_02077f3c());FUN_overlay_4__021266b8(self);d.h[0]=7;d.xy[0]=0x15000;d.xy[1]=0xec000;FUN_020c32b4(&d,self[37]);d.h[0]=8;d.xy[0]=0x39000;FUN_020c32b4(&d,self[37]);d.h[0]=9;d.xy[0]=0x59000;FUN_020c32b4(&d,self[37]);d.h[0]=10;d.xy[0]=0x79000;FUN_020c32b4(&d,self[37]);}if(FUN_overlay_4__02126694(self))FUN_020c331c(39,0x49000,0x16b000,FUN_02078038(FUN_02077f3c()));if(self[0]==5)FUN_020c331c(6,0x4000,0x108000,self[37]);}
