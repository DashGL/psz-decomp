extern int FUN_020e6b94(int,int);
extern int FUN_020e59d8(int,int,int,int,void *,int);
// FUN_020e3d84 @ 0x020e3d84 (Thumb)
// flags: -O4,p
/* USA ROM reconstruction, 2026-11-06. Matchmaking pump with state-specific
 * retry/deadline handling and transport cleanup. Tick arithmetic wraps at64. */
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;typedef unsigned long long u64;
extern char *FUN_020e961c(void);extern u64 FUN_02067e0c(void);
extern int FUN_020e0558(void),FUN_020e6b74(unsigned int),FUN_020e6f24(int),FUN_020e88f8(void),FUN_020e7194(int),FUN_020e7000(int),FUN_020e1534(void),FUN_020d8b0c(int),FUN_020e7b60(void),FUN_020e7df0(void),FUN_020e81c0(void);
extern void FUN_020d651c(int),FUN_020d34d4(int),FUN_020e4a2c(int,int),FUN_020e5564(int),FUN_020e4a0c(void),FUN_020e7b3c(void),FUN_020e92f8(int,int,int,void *),FUN_020d8ad0(int),FUN_020d8960(int),FUN_020e3d04(int),FUN_020d6054(void),FUN_020d5848(void),FUN_020e85dc(void),FUN_020e5050(void);
extern char UNK_0211de64[];
#define B(p,o) (*(u8 *)((p)+(o)))
#define H(p,o) (*(u16 *)((p)+(o)))
#define W(p,o) (*(u32 *)((p)+(o)))
#define Q(p,o) (*(u64 *)((p)+(o)))
#define MS(now,p,o) ((((now)-Q(p,o))<<6)/33514ULL)
#define PUTQ(p,o,q) (*(u64 *)((p)+(o))=(q))
typedef struct { u8 pad[0xf4]; u32 ids[32]; } MatchCtx;
void FUN_020e3d84(int active){
 char *a,*b,*c,*d,*e;u64 now,elapsed;u32 timeout;
 if(!FUN_020e961c()||FUN_020e0558())return;
 if(!active){if(W(FUN_020e961c(),16))FUN_020d651c(W(FUN_020e961c(),16));if(W(FUN_020e961c(),4))FUN_020d34d4(*(int *)W(FUN_020e961c(),4));return;}
 if(!W(FUN_020e961c(),0x1a0))return;
 switch(W(FUN_020e961c(),0x1a0)){
 case 4:
  if(W(FUN_020e961c(),0x1c8)){
   now=FUN_02067e0c();a=FUN_020e961c();b=FUN_020e961c();elapsed=MS(now,a,0x1cc);
   if(elapsed>W(b,0x1c8)){
    W(FUN_020e961c(),0x1c8)=0;
    if(B(FUN_020e961c(),0x15)==3){
     B(FUN_020e961c(),0x1aa)++;
     if(B(FUN_020e961c(),0x1aa)>5){FUN_020e4a2c(6,(int)0xfffec5d2);return;}
     if(FUN_020e6b74(FUN_020e6b94(W(FUN_020e961c(),0xf4),0)))return;
    }else if(!FUN_020e6f24(0))return;
   }
  }
  if(W(FUN_020e961c(),0x1bc)){
   timeout=3000*B(FUN_020e961c(),13)+3000;now=FUN_02067e0c();a=FUN_020e961c();
   if(MS(now,a,0x1c0)>=timeout){if(FUN_020e6b74(FUN_020e6b94(W(FUN_020e961c(),0xf4),0)))return;}
  }break;
 case 2:case 3:case 5:
  if((int)W(FUN_020e961c(),0xe8)>0){
   if(W(FUN_020e961c(),0x1a0)==3)timeout=3000*B(FUN_020e961c(),13)+3000;
   else timeout=W(FUN_020e961c(),0xe8)==1?1000:3000;
   now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0xec)>timeout){FUN_020e5564(W(FUN_020e961c(),0x204));if(FUN_020e88f8())return;W(FUN_020e961c(),0xe8)=0;}
  }break;
 case 7:
  a=FUN_020e961c();if(Q(a,0x18c)){
   now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x18c)>25000){a=FUN_020e961c();W(a,0x18c)=0;W(a,0x190)=0;if(!FUN_020e7194(W(FUN_020e961c(),0xf4)))return;}
  }else if(B(FUN_020e961c(),0x3cc)==6){
   now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x45c)>6000){
    B(FUN_020e961c(),0x3cd)++;
    if(B(FUN_020e961c(),0x3cd)>5){FUN_020e4a0c();if(!FUN_020e7194(W(FUN_020e961c(),0xf4)))return;}
    else{
     a=FUN_020e961c();b=FUN_020e961c();c=FUN_020e961c();d=FUN_020e961c();e=FUN_020e961c();if(FUN_020e6b74(FUN_020e59d8(6,W(a,0x454),W(b,0x3d0),H(c,0x3ce),d+0x3d4,W(e,0x458))))return;
    }
   }
  }break;
 case 11:
  if(B(FUN_020e961c(),0x3cc)==2){
   if(B(FUN_020e961c(),0x15)==0){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x45c)>6000)goto expire;}
   if(B(FUN_020e961c(),0x15)!=0){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x45c)>19000){
expire:
    FUN_020e4a0c();a=FUN_020e961c();b=FUN_020e961c();if(!FUN_020e7000(((MatchCtx *)a)->ids[B(b,13)+1]))return;
   }}
  }break;
 case 13:
  if(B(FUN_020e961c(),0x3cc)==8){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x45c)>30000){
   B(FUN_020e961c(),0x3cd)++;
   if(B(FUN_020e961c(),0x3cd)!=0){FUN_020e4a0c();if(B(FUN_020e961c(),0x15)==2){a=FUN_020e961c();b=FUN_020e961c();if(!FUN_020e7000(((MatchCtx *)a)->ids[B(b,13)]))return;}else FUN_020e7b3c();}
   else{a=FUN_020e961c();b=FUN_020e961c();c=FUN_020e961c();d=FUN_020e961c();e=FUN_020e961c();if(FUN_020e6b74(FUN_020e59d8(8,W(a,0x454),W(b,0x3d0),H(c,0x3ce),d+0x3d4,W(e,0x458))))return;}
  }}break;
 case 1:
  if(FUN_020e1534()==5){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x1f8)>30000){
   if(B(FUN_020e961c(),0x1ad)>=5){if(!FUN_020e7194(W(FUN_020e961c(),0xf4)))return;}
   else{a=FUN_020e961c();b=FUN_020e961c();c=FUN_020e961c();if(FUN_020e6b74(FUN_020e59d8(64,W(a,0xf4),W(b,0x24),H(c,0xa4),0,0)))return;B(FUN_020e961c(),0x1ad)++;a=FUN_020e961c();now=FUN_02067e0c();now+=0xffffffffff403b3aULL;PUTQ(a,0x1f8,now);}
  }}break;
 }
 if(W(FUN_020e961c(),0x1a0)==11||W(FUN_020e961c(),0x1a0)==6){a=FUN_020e961c();if(Q(a,0x184)){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x184)>10000){a=FUN_020e961c();FUN_020e92f8(1,0,0,a+0x194);}}}
 if(W(FUN_020e961c(),0xe4)){
  W(UNK_0211de64,0x18)=0;W(UNK_0211de64,0x14)=0;FUN_020d8ad0(W(FUN_020e961c(),0xe4));
  if(W(UNK_0211de64,0x14)){FUN_020d8960(W(FUN_020e961c(),0xe4));W(FUN_020e961c(),0xe4)=0;}
  if(W(FUN_020e961c(),0xe4)&&FUN_020d8b0c(W(FUN_020e961c(),0xe4))){a=FUN_020e961c();if(Q(a,0x174)){now=FUN_02067e0c();a=FUN_020e961c();if(now>Q(a,0x174))FUN_020e4a2c(6,(int)0xfffeb3ee);}}
 }
 FUN_020e3d04(W(FUN_020e961c(),16));W(UNK_0211de64,12)=0;W(UNK_0211de64,16)=1;FUN_020d6054();W(UNK_0211de64,16)=0;if(W(UNK_0211de64,12)==1){W(UNK_0211de64,12)=0;FUN_020d5848();}
 if(W(FUN_020e961c(),4))FUN_020d34d4(*(int *)W(FUN_020e961c(),4));
 if(W(FUN_020e961c(),0x1a0)==18){now=FUN_02067e0c();a=FUN_020e961c();if(MS(now,a,0x1f0)>3000&&FUN_020e7b60())return;}
 if(!FUN_020e7df0())return;if(!FUN_020e81c0())return;FUN_020e85dc();
 if(B(FUN_020e961c(),0x1ae)&&W(FUN_020e961c(),0x1a0)==10){
  a=FUN_020e961c();b=FUN_020e961c();B(a,0x16)=B(b,13);FUN_020e5050();B(FUN_020e961c(),0x1ae)=0;
  if(W(FUN_020e961c(),0x47c)){a=FUN_020e961c();b=FUN_020e961c();((void (*)(u32))W(a,0x47c))(W(b,0x480));}
 }
}
