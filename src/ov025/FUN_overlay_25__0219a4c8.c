// flags: -O4,s
typedef struct {int x,y,z;} Vec3;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
enum { E0 = 0, E1 = 1 };
#define T(c) ((c) ? E1 : E0)
extern int DAT_0219aed0[];
extern int FUN_overlay_25__0219a3f0(void *,Vec3 *),FUN_02036c34(void *);
extern unsigned FUN_overlay_25__02199e58(void *,Vec3 *),FUN_02035b60(unsigned);
extern void FUN_02037390(int *,Vec3 *),FUN_02037924(void *);
void FUN_overlay_25__0219a4c8(void *self)
{
 void *actor=P(self,4),*owner=P(self,8);Vec3 origin=V(actor,0x38),target,difference;
 unsigned angle;int d0,d1,d2,d3,d4,d5,delta;
 if(!FUN_overlay_25__0219a3f0(owner,&target)){FUN_02037924(P(self,8));goto done;}
 {
  difference.x=target.x-origin.x;difference.y=target.y-origin.y;difference.z=target.z-origin.z;
  angle=FUN_overlay_25__02199e58(actor,&difference);
  if(I(actor,0xe0)==0){
   if(I(self,0x10)>I(self,0xc)){
    if(I(owner,0x58)>=2){
     FUN_02037390(&d0,&difference);
     if(T(d0<DAT_0219aed0[2])&&!T(I(actor,0x11c))){I(owner,0x50)=1;FUN_02037924(owner);goto done;}
    }
    if(angle>0x2000){I(owner,0x50)=4;FUN_02037924(owner);goto done;}
    if(FUN_02035b60(3)<1){
     FUN_02037390(&d1,&difference);
     if(T(d1<DAT_0219aed0[0])){I(owner,0x50)=2;FUN_02037924(owner);goto done;}
    }
    I(owner,0x50)=3;FUN_02037924(owner);
   }
  }else if(I(actor,0xe0)==1){
   if(I(owner,0x58)!=0||I(self,0x10)>I(self,0xc)){
    if(I(owner,0x58)<3){
     FUN_02037390(&d2,&difference);
     if(T(d2<DAT_0219aed0[0])&&I(owner,0x58)>1&&angle<=0x2000){
      I(owner,0x50)=2;FUN_02037924(owner);I(owner,0x58)=0;goto done;
     }
     FUN_02037390(&d3,&difference);
     if(T(d3<DAT_0219aed0[2])&&I(owner,0x58)>1&&!T(I(actor,0x11c))){
      I(owner,0x50)=1;FUN_02037924(owner);I(owner,0x58)=0;goto done;
     }
     if(angle>0x2000){I(owner,0x50)=4;FUN_02037924(owner);goto done;}
     I(owner,0x50)=3;FUN_02037924(owner);
    }else{
     FUN_02037390(&d4,&difference);
     if(T(d4<DAT_0219aed0[0])&&angle<=0x2000){I(owner,0x50)=2;FUN_02037924(owner);}
     else{
      FUN_02037390(&d5,&difference);
      if(T(d5<DAT_0219aed0[2])&&!T(I(actor,0x11c))){I(owner,0x50)=1;FUN_02037924(P(self,8));}
      else FUN_02037924(P(self,8));
     }
     I(owner,0x58)=0;
    }
   }
  }
 }
 done:
 delta=FUN_02036c34(P(self,4));I(self,0x10)+=delta;
}
