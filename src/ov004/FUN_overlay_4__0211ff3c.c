// flags: -O4,s
// FUN_overlay_4__0211ff3c @ 0x0211ff3c (0x80, Thumb)
// Resolve and clamp frame, copy local position/frame tables and submit drawing state.
typedef struct {short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
typedef struct {int xy[3][2];} Points;typedef struct {unsigned short h[11];} Frames;extern const Points data_0212d574;extern const Frames data_0212d55c;extern int FUN_overlay_4__02120110(void *),FUN_overlay_4__02120084(void *,int);
void FUN_overlay_4__0211ff3c(void *self,int pos,int id){Points points;Frames frames;Draw draw;int frame;if(FUN_overlay_4__02120110(self)==1){points=data_0212d574;frames=data_0212d55c;frame=FUN_overlay_4__02120084(self,id);if(frame>10)frame=10;if(frame>=0){FUN_02071d0c(&draw);draw.h[0]=frames.h[frame];FUN_0208971c(draw.xy,points.xy[pos]);FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));}}}
