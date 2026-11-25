// flags: -O4,s
typedef struct {int x,y,z;} Vec;typedef struct {signed char state,action,arg,zero;int target;} Command;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))
#pragma thumb off
extern void FUN_02001540(void *,int,int);
extern unsigned short FUN_0205c9e4(int,int);
#pragma thumb on
extern int FUN_overlay_21__0219aab4(void *),FUN_overlay_21__0219a7e4(void *),FUN_overlay_21__0219a9d8(void *),FUN_overlay_21__0219a8c0(void *),FUN_overlay_21__02199194(void *),FUN_02037208(void *,int),FUN_02086948(const Vec *),FUN_020866b4(int,Vec *);
extern void FUN_02036348(Vec *,const Vec *,const Vec *),FUN_02036368(Vec *),FUN_overlay_21__02199688(void *,const Command *);
void FUN_overlay_21__0219a458(void *self){
 void *owner;int publish,selected; signed char arg;Vec target,origin,delta;Command command;
 if(!I(self,0xdc)){
  owner=P(self,4);arg=0;publish=1;if(I(self,0xd4)!=0)publish=0;
  if(B(self,0xfc)==2&&B(self,0xfd)){
   switch(B(self,0xfd)){case 6:I(self,0x80)=6;break;case 5:I(self,0x80)=5;break;case 11:I(self,0x80)=11;break;case 12:I(self,0x80)=12;break;case 13:I(self,0x80)=13;break;case 17:I(self,0x80)=17;break;case 3:I(self,0x80)=3;break;case 15:I(self,0x80)=15;break;case 14:I(self,0x80)=14;break;default:I(self,0x80)=1;break;}
   arg=B(self,0xfe);B(self,0x84)=0;
  }else if(!I(self,0x80)){
   I(self,0x80)=1;
   if(!I(owner,0xd4)){
    if(U(self,0xc4)>1800){I(self,0x8c)=FUN_overlay_21__0219aab4(self);I(self,0x80)=2;B(self,0x84)=5;}
    else if(FUN_overlay_21__0219a7e4(self)){I(self,0x80)=2;B(self,0x84)=17;}
    else if(U(self,0xc8)>750){I(self,0x80)=2;B(self,0x84)=11;}
    else if(FUN_overlay_21__0219a9d8(self)){I(self,0x80)=4;arg=(signed char)FUN_02037208(owner,100);}
    else{I(self,0x8c)=FUN_overlay_21__0219aab4(self);I(self,0x80)=2;B(self,0x84)=3;}
   }else if(I(owner,0xd4)==1){
    selected=FUN_overlay_21__0219a8c0(self);
    if(selected!=-1){arg=(signed char)selected;I(self,0x80)=2;B(self,0x84)=15;}
    else if(U(self,0xcc)>(unsigned int)(1800-600*I(owner,0x280))){I(self,0x80)=2;B(self,0x84)=6;}
    else if(U(self,0xa0)>10&&!FUN_overlay_21__02199194(owner)){
     I(self,0x8c)=FUN_02086948(&V(owner,0x38));if(FUN_020866b4(I(self,0x8c),&target)){origin=V(owner,0xfc);FUN_02036348(&delta,&target,&origin);FUN_02036368(&delta);arg=(signed char)((int)((unsigned int)(unsigned short)(FUN_0205c9e4(delta.x,delta.z)+0x9000)>>13)%8);}I(self,0x80)=2;B(self,0x84)=13;
    }else if(U(self,0xd0)>600&&!FUN_overlay_21__02199194(owner)){I(self,0x80)=2;B(self,0x84)=12;}
    else if(FUN_overlay_21__0219a9d8(self)){I(self,0x80)=4;arg=(signed char)FUN_02037208(owner,100);}
   }
  }
  I(self,0xdc)=1;
  if(publish){FUN_02001540(&command,0,8);command.target=-1;FUN_02001540(&command,0,8);command.target=-1;command.state=(signed char)I(self,0x80);command.action=B(self,0x84);command.arg=arg;command.zero=0;command.target=I(self,0x8c);FUN_overlay_21__02199688(P(self,4),&command);}
 }
 if(I(self,0xdc)){if(U(self,0xe0)>60){I(self,0xe0)=0;I(self,0xdc)=0;}I(self,0xe0)++;}
}
