// flags: -O4,s
// FUN_overlay_4__0211fe28 @ 0x0211fe28 (0x84, Thumb)
// Run two-frame transition, advancing every two ticks even when resources are unavailable.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_0208971c(void *,const void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
extern const unsigned short data_0212d544[];extern const int data_0212d58c[][2];extern int FUN_overlay_4__02120110(void *);
int FUN_overlay_4__0211fe28(unsigned int *self,int pos){unsigned short frames[2];Draw draw;if(self[7]==1){frames[0]=data_0212d544[2];frames[1]=data_0212d544[3];if(self[6]>=2){self[7]=-1;self[6]=0;self[5]=0;return 0;}if(FUN_overlay_4__02120110(self)==1){FUN_02071d0c(&draw);draw.h[0]=frames[self[6]];FUN_0208971c(draw.xy,data_0212d58c[pos]);FUN_020c32b4(&draw,self[1]);}self[5]++;if((int)self[5]>=2){self[5]=0;self[6]++;}return 1;}return 0;}
