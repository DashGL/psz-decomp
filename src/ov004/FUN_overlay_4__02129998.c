// FUN_overlay_4__02129998 @ 0x02129998 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch35.json; original draft retained for referenced provenance.
// FUN_overlay_4__02129998 @ 0x02129998 (0x64, Thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// Validate position and selection, calculate frame and render using six copied coordinate pairs.
typedef struct {short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
typedef struct {int xy[6][2];} Points;extern const Points data_0212e268;extern int FUN_overlay_4__02129b6c(void *,int),FUN_overlay_4__02129ad8(void *,int,int);
void FUN_overlay_4__02129998(void *self,int pos,int selection){Points points;Draw draw;if(!FUN_overlay_4__02129b6c(self,pos)&&selection!=-1&&selection<6){points=data_0212e268;FUN_02071d0c(&draw);draw.h[0]=FUN_overlay_4__02129ad8(self,pos,selection);FUN_0208971c(draw.xy,points.xy[pos]);FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));}}
