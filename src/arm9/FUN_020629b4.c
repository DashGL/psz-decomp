// flags: -O4,p -noThumb
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
struct Work{
    u8 pad0[0x131c];
    u32 f131c;
    u32 f1320;
    u8 pad1[0x14e8 - 0x1324];
    u32 arr[15];
    u8 pad2[0x74c8 - 0x14e8 - 60];
    u32 f74c8;
};
struct Globals{int a,b;char *state;struct Work *work;};
extern struct Globals DAT_021180a0;
extern char DAT_020f96f4[];
extern void FUN_02062920(void),FUN_02062970(void *),FUN_0206455c(int,int),FUN_02068444(u32),FUN_02068728(void);
extern int FUN_02053dfc(void *,void *),FUN_02055748(void *,int),FUN_02053f28(void *,u32),FUN_020628c0(void),FUN_02053dbc(void *),FUN_02053508(int,int,int),FUN_020534c4(void *);
extern int FUN_02054574(void *,u32,u32,void *,u32,u16,int,int,int,int,int);
#define G DAT_021180a0
#define H(p,o) (*(u16 *)((p)+(o)))
#define W(p,o) (*(u32 *)((p)+(o)))
#define B(p,o) (*(u8 *)((p)+(o)))
#define CB(s,e,p) ((void (*)(int,void *))W((s),0x51c))((e),(void *)(p))
void FUN_020629b4(char *packet){
 u32 i,n;int result;
 switch(H(packet,0)){
 case 0:
  if(H(packet,2)){CB(G.state,256,packet);return;}
  FUN_02062920();return;
 case 29:
  if(H(packet,2)){CB(G.state,256,packet);return;}
  result=FUN_02053dfc(FUN_020629b4,G.state);FUN_0206455c(7,result);return;
 case 7:
  CB(G.state,21,packet);result=FUN_02055748(FUN_020629b4,1);FUN_0206455c(25,result);return;
 case 25:
  if(!H(G.state,0x526)){
   if(H(packet,2)){CB(G.state,256,packet);return;}
   result=FUN_02053f28(FUN_020629b4,W(DAT_020f96f4,12));FUN_0206455c(8,result);return;
  }
  if(H(packet,2)){H(G.state,0x526)=0;CB(G.state,256,packet);return;}
  FUN_02062970(packet);return;
 case 8:
  if(H(packet,2)){CB(G.state,256,packet);return;}
  switch(H(packet,8)){
  case 0:H(G.state,0x52a)=0;H(G.state,0x528)=0;return;
  case 7:
   if(H(G.state,0x526)==1)return;
   H(G.state,0x52a)|=1<<H(packet,16);CB(G.state,0,packet);
   if(!H(G.state,0x528)){
    if(!G.work->f131c){
     u16 t; char *s;
     G.work->f131c=1;
     t=(u16)(H(G.state,0x52c)==0?1:0);
     s=((volatile struct Globals *)&DAT_021180a0)->state;
     result=FUN_02054574(FUN_020629b4,W(s,0x504),H(s,0x51a),s+64,H(s,0x518),t,0,0,0,1,1);
     FUN_0206455c(14,result);return;
    }
   }
   if(FUN_020628c0())CB(G.state,25,0);return;
  case 9:
   H(G.state,0x52a)&=~(1<<H(packet,16));CB(G.state,1,packet);return;
  case 2:if(H(G.state,0x526)!=1)CB(G.state,28,packet);return;
  case 26:return;
  default:CB(G.state,256,packet);return;
  }
 case 14:
  G.work->f131c=0;
  switch(H(packet,4)){
  case 10:H(G.state,0x528)=1;if(!H(G.state,0x526))CB(G.state,25,0);return;
  case 11:CB(G.state,3,W(packet,8));return;
  default:CB(G.state,256,packet);return;
  }
 case 15:
  if(G.work->f74c8){
   n=0;for(i=0;i<15;i++){if(G.work->arr[i]){++n;if(n>=2)break;}}
   if(n==1)FUN_02068444(0x32c8);
  }
  B(G.state,0x50c)=0;
  if(!H(packet,2)){CB(G.state,2,packet);if(!H(G.state,0x526))CB(G.state,25,0);return;}
  if(H(packet,2)==10){CB(G.state,42,packet);return;}
  CB(G.state,19,packet);if(!H(G.state,0x526))CB(G.state,25,0);return;
 case 1:
  if(!G.work->f1320){
   if(H(packet,2)){H(G.state,0x526)=0;CB(G.state,256,packet);return;}
   H(G.state,0x52a)=0;H(G.state,0x528)=0;result=FUN_02053dbc(FUN_020629b4);FUN_0206455c(2,result);return;
  }
  FUN_02053508(1,0,0);FUN_020534c4(0);
  if(H(packet,2)){H(G.state,0x526)=0;CB(G.state,256,packet);return;}
  result=FUN_02055748(FUN_020629b4,0);FUN_0206455c(25,result);return;
 case 2:
  if(H(packet,2)){H(G.state,0x526)=0;CB(G.state,256,packet);return;}
  FUN_02062970(packet);return;
 case 13:if(!H(packet,2)){H(G.state,0x52a)&=~H(packet,10);}return;
 case 128:
  switch(H(packet,4)){
  case 16:CB(G.state,29,packet);return;
  case 17:CB(G.state,31,packet);return;
  case 18:CB(G.state,32,packet);return;
  case 19:CB(G.state,33,packet);return;
  case 22:FUN_02068728();return;
  case 23:break;
  default:break;
  }
  break;
 default:
  CB(G.state,256,packet);break;
 }
}
