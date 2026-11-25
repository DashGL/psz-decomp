// FUN_overlay_4__02122bc8 @ 0x02122bc8 (0x7e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_4__02122bc8 @ 0x02122bc8 (0x7e, Thumb)
// check: vers=2.0/sp2p3 target=0x7e candidate=0x7e words=0 exact_bytes=0 bad_relocs=0
// Draw proportional scrollbar thumb and fixed track only when list exceeds five rows.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
void FUN_overlay_4__02122bc8(int *self,int first,int count){Draw draw;int excess,step;if(count>5){excess=count-5;step=0x34000/excess;FUN_02071d0c(&draw);draw.h[0]=78;draw.xy[0]=0x9e000;if(excess==first)draw.xy[1]=0x12c000;else draw.xy[1]=(unsigned int)step*first+0xf8000;if(draw.xy[1]>0x12c000)draw.xy[1]=0x12c000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));draw.h[0]=15;draw.xy[0]=0x9e000;draw.xy[1]=0xf8000;FUN_020c32b4(&draw,self[29]);}}
