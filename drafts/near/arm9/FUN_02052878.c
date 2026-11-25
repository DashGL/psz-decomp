// near: ndiff=999/169 size=0x2a4 vers=2.0/sp2p3 next="stack/register scheduling and branch materialization; candidate 0x29c; 1 shifted relocation slot"
// check: 2.0/sp2p3 target=0x2a4 candidate=0x29c words=999 exact_bytes=999 bad_relocs=1
// FUN_02052878 @ 0x02052878 (0x2a4 incl literals, Thumb)
// Refresh up to seven spatial candidates, facing-cone filter and stable distance ranks.
// Input position uses x/z words. Signed 32-bit distances determine replacement and tie ranking.
// Original array capacities and linked-list validity are caller invariants; no new clamp is added.
typedef unsigned int u32;
extern short data_020ed83c[];
extern void FUN_020bf680(void *,void *,int),FUN_020be5d4(void *,int,int,void *),FUN_020bf73c(void *,void *),FUN_02052b1c(u32 *,int *),FUN_020bc638(u32 *,u32 *);
extern void *FUN_020be450(void),*FUN_020be5ec(void *,int),*FUN_020525a8(void *,void *);
#define I(o) (*(int *)(self+(o)))
#define B(o) (*(unsigned char *)(self+(o)))
#define RM(a,b) ((int)(((unsigned long long)((long long)(a)*(long long)(b))+2048)>>12))
void FUN_02052878(char *self,int *position,int heading){
 int sine=data_020ed83c[2*(heading>>4)],cosine=data_020ed83c[2*(heading>>4)+1];
 int i,j,delta[2],point[3],dot;u32 distance,squared,reciprocal;char *node,*candidate;
 if(I(4)&1)return;
 B(272)=0;
 for(i=0;i<7;i++){I(124+4*i)=I(20);I(152+4*i)=0;B(264+i)=255;}
 *(unsigned short *)(self+24)=heading;I(8)=position[0];I(12)=position[2];
 FUN_020bf680(self+32,self+8,I(16));FUN_020be5d4(FUN_020be450(),I(120),0,self+32);
 node=FUN_020be5ec(FUN_020be450(),I(120));
 for(;node;node=*(char **)(node+4)){
  candidate=node+8;if(!candidate)continue;
  FUN_020bf73c(candidate+12,point);
  if(B(274)==3){if(!(*(u32 *)(candidate+52)&2))continue;}
  else if(!(*(u32 *)(candidate+52)&1))continue;
  delta[1]=point[1]-I(12);delta[0]=point[0]-I(8);
  FUN_02052b1c(&distance,delta);
  if(delta[0]||delta[1]){
   FUN_02052b1c(&squared,delta);FUN_020bc638(&reciprocal,&squared);
   delta[0]=RM(delta[0],(int)reciprocal);delta[1]=RM(delta[1],(int)reciprocal);
  }
  dot=RM(delta[0],sine)+RM(delta[1],cosine);
  if(dot<=I(28)&&I(28)!=-4096)continue;
  if(B(272)<B(271)){
   *(char **)(self+152+4*B(272))=candidate;
   FUN_020525a8(self+180+12*B(272),point);I(124+4*B(272))=(int)distance;B(272)++;
  }else if(B(273)<7&&(int)distance<I(124+4*B(273))){
   *(char **)(self+152+4*B(273))=candidate;
   FUN_020525a8(self+180+12*B(273),point);I(124+4*B(273))=(int)distance;
  }
  for(i=0;i<B(272);i++){
   B(264+i)=0;B(273)=0;
   for(j=0;j<B(272);j++){
    if(i==j)continue;
    if(I(124+4*i)>I(124+4*j)||(I(124+4*i)==I(124+4*j)&&i<j)){
     B(264+i)++;if(B(272)-1==B(264+i))B(273)=(unsigned char)i;
    }
   }
  }
 }
}
