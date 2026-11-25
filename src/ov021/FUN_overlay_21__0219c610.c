// flags: -O4,s
typedef struct {int x,y,z;} Vec;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))
extern int DAT_021a14c8;extern short DAT_020ed83c[];
extern int FUN_overlay_21__0219b25c(void *,Vec *),FUN_overlay_21__0219b424(void *),FUN_overlay_21__0219b56c(void *,unsigned short),FUN_overlay_21__0219b5e4(void *);
extern unsigned short FUN_overlay_21__0219b65c(void *),FUN_0205c9e4(int,int);
extern void FUN_02036348(Vec *,const Vec *,const Vec *),FUN_02036368(Vec *),FUN_02035408(Vec *,int,int,int),FUN_02040c0c(void *,int,int,int,int),FUN_02072724(void *,int),FUN_02090f74(short *,void *,const Vec *,int),FUN_020c193c(int,int,int,int,int),FUN_02072750(void *,int,const Vec *);
extern int FUN_02040d2c(void *,int),FUN_02072650(void *,int,int,int);extern void *FUN_02090c20(void);
void FUN_overlay_21__0219c610(void *self){
 void *owner=P(self,4),*part=P(self,8);
 switch(I(self,0xc)){
 case 0: {
  Vec target,current,delta;
  if(FUN_overlay_21__0219b25c(part,&target)){current=V(part,0x60);FUN_02036348(&delta,&target,&current);FUN_02036368(&delta);FUN_0205c9e4(delta.x,delta.z);
   if(U(self,0x34)>60||FUN_overlay_21__0219b424(part)){I(self,0xc)=1;I(self,0x34)=0;}
  }else{FUN_02040c0c(owner,I(self,0x10),0x38,4096,0);I(self,0xc)=2;I(self,0x34)=0;}
 } break;
 case 1: {
  Vec target,current,delta;
  if(FUN_overlay_21__0219b25c(part,&target)){
   unsigned short basis;
   current=V(part,0x60);FUN_02036348(&delta,&target,&current);FUN_02036368(&delta);basis=(unsigned short)(H(part,0x4c)+0x8000+H(owner,0x108));
   basis=(unsigned short)(FUN_0205c9e4(delta.x,delta.z)-basis);if(FUN_overlay_21__0219b56c(part,basis)||U(self,0x34)>30){FUN_02040c0c(owner,I(self,0x10),0x38,4096,0);I(self,0xc)=2;I(self,0x34)=0;}
  }else{FUN_02040c0c(owner,I(self,0x10),0x38,4096,0);I(self,0xc)=2;I(self,0x34)=0;}
 } break;
 case 2:
  if(I(self,0x34)==12||I(self,0x34)==23){
   int index; int scale; Vec speed; short screen[2];
   if(I(self,0x18)!=-1){FUN_02072724(owner,I(self,0x18));I(self,0x18)=-1;}
   index=(FUN_overlay_21__0219b65c(part)>>4)*2;V(self,0x1c)=V(part,0x60);scale=DAT_021a14c8;
   {int s=DAT_020ed83c[index]; int c=DAT_020ed83c[index+1];
   FUN_02035408(&speed,(int)(((long long)s*scale+2048)>>12),0,(int)(((long long)c*scale+2048)>>12));V(self,0x28)=speed;}
   I(self,0x18)=FUN_02072650(owner,4,0,0);FUN_02090f74(screen,FUN_02090c20(),&V(self,0x1c),0);FUN_020c193c(0x1a,7,screen[0],screen[1],4);
  }else if(I(self,0x34)==20&&I(self,0x18)!=-1){FUN_02072724(owner,I(self,0x18));I(self,0x18)=-1;}
  if((U(self,0x34)>=12&&U(self,0x34)<20)||U(self,0x34)>=23){I(self,0x1c)+=I(self,0x28);I(self,0x20)+=I(self,0x2c);I(self,0x24)+=I(self,0x30);FUN_02072750(owner,I(self,0x18),&V(self,0x1c));}break;
 case 3:if(U(self,0x34)>60&&FUN_overlay_21__0219b56c(part,0)){I(self,0xc)=4;I(self,0x34)=0;}break;
 case 4:if(FUN_overlay_21__0219b5e4(part))I(part,0x18)=2;break;
 }
 if(FUN_02040d2c(owner,I(self,0x10))){if(I(self,0x18)!=-1){FUN_02072724(owner,I(self,0x18));I(self,0x18)=-1;}FUN_02040c0c(owner,I(self,0x10),0x2c,4096,0);I(self,0xc)=3;I(self,0x34)=0;}I(self,0x34)++;
}
