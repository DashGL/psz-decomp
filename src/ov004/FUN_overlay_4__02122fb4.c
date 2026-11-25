// FUN_overlay_4__02122fb4 @ 0x02122fb4 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122fb4 @ 0x02122fb4 (0x84, Thumb)
// check: vers=2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// Decrement UI timer, settle state on expiry, and draw two state-dependent indicators.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
void FUN_overlay_4__02122fb4(int *self){Draw draw;self[25]--;if(self[26]!=2&&self[25]<0){self[25]=0;self[26]=2;}FUN_02071d0c(&draw);draw.h[0]=83;draw.xy[1]=0xeb000;if(self[26]==1)draw.xy[0]=0x4000;else draw.xy[0]=0x8000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));draw.h[0]=82;if(self[26]==0)draw.xy[0]=0x9a000;else draw.xy[0]=0x96000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));}
