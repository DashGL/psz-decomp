// flags: -O4,s
// FUN_overlay_4__0211feac @ 0x0211feac (0x80, Thumb)
// Animate frame table, render at selected position, and advance frame after signed counter limit.
typedef struct {short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
typedef struct {unsigned short h[4];} Frames;extern const Frames data_0212d554;extern const int data_0212d58c[][2];extern int FUN_overlay_4__02120110(void *),FUN_overlay_4__0211fe0c(void *);
void FUN_overlay_4__0211feac(unsigned int *self,int pos,int limit){Frames frames;Draw draw;if(FUN_overlay_4__02120110(self)==1&&FUN_overlay_4__0211fe0c(self)){frames=data_0212d554;if(self[6]>=4){self[6]=1;self[5]=0;}FUN_02071d0c(&draw);draw.h[0]=frames.h[self[6]];FUN_0208971c(draw.xy,data_0212d58c[pos]);FUN_020c32b4(&draw,self[1]);self[5]++;if((int)self[5]>limit)self[6]++;}}
