// flags: -O4,p
typedef unsigned int U;
typedef char B;
extern struct { int state; int pad; B *owner; } DAT_0211dbd8;
#define OWNER (DAT_0211dbd8.owner)
#define STATE (DAT_0211dbd8.state)
extern int DAT_02101db0;
extern B DAT_021002b4[],DAT_021002bc[],DAT_021002c8[],DAT_021002d4[],DAT_021002dc[],DAT_021002e4[],DAT_021002f0[],DAT_021002fc[];
#define W(p,o) (*(U *)((B *)(p)+(o)))
extern B *FUN_020df414(U,const B *);
extern int FUN_020e0134(const B *),FUN_020df450(U,const B *,B *,U),FUN_020df484(U,const B *,B *,U);
#pragma thumb off
extern int FUN_02005898(const B *),FUN_020057d0(const B *,B **,int);
extern U FUN_02003c70(const B *);
#pragma thumb reset
int FUN_020ddfec(void)
{
 B *end=0,*p;int value,status;
 end=FUN_020df414(W(OWNER,0x1314),DAT_021002b4);
 if(end)FUN_020e0134(end);
 DAT_02101db0=0;end=0;
 status=FUN_02005898(FUN_020df414(W(OWNER,0x1314),DAT_021002bc));
 if(DAT_02101db0==34){W(OWNER,0x1008)=0x4e85;return 12;}
 if(status!=200){W(OWNER,0x1008)=(U)status+0x59d8;return 18;}
 p=OWNER;
 if(FUN_020df450(W(p,0x1314),DAT_021002c8,p+0x100c,4)<=0){W(OWNER,0x1008)=0x4e85;return 14;}
 value=FUN_020057d0(OWNER+0x100c,&end,10);
 p=OWNER;
 if(end!=p+0x100c+FUN_02003c70(p+0x100c)){W(p,0x1008)=0x4e85;return 12;}
 W(p,0x1008)=(U)value+0x4e20;
 if(value<100){
  OWNER[0x1052]=0;OWNER[0x101f]=0;OWNER[0x117f]=0;OWNER[0x1010]=0;OWNER[0x1188]=0;
  p=OWNER;FUN_020df450(W(p,0x1314),DAT_021002d4,p+0x1052,0x12d);
  p=OWNER;FUN_020df450(W(p,0x1314),DAT_021002dc,p+0x101f,0x33);
  p=OWNER;FUN_020df450(W(p,0x1314),DAT_021002e4,p+0x117f,9);
  p=OWNER;FUN_020df450(W(p,0x1314),DAT_021002f0,p+0x1010,15);
  p=OWNER;FUN_020df484(W(p,0x1314),DAT_021002fc,p+0x1188,0x41);
  OWNER[0x11b3]=0;
  if(value!=40) STATE=1; else STATE=2;
 }
 return 0;
}
