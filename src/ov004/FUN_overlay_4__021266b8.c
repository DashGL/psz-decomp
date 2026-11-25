// FUN_overlay_4__021266b8 @ 0x021266b8 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__021266b8 @ 0x021266b8 (0xa0, Thumb)
// check: vers=2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// Countdown/state indicator twin using later fields and settled state four.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
void FUN_overlay_4__021266b8(int *self){Draw draw;self[38]--;if(self[39]!=4&&self[38]<0){self[38]=0;self[39]=4;}FUN_02071d0c(&draw);draw.h[0]=83;draw.xy[1]=0xeb000;if(self[39]==1)draw.xy[0]=0x4000;else draw.xy[0]=0x8000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));draw.h[0]=82;if(self[39]==0)draw.xy[0]=0x9a000;else draw.xy[0]=0x96000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));}
