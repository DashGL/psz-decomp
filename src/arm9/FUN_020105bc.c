// near: ndiff=999/156 size=0x270 vers=2.0/sp2p3 next="ARM conditional/register scheduling and stack layout; candidate 0x26c; 1 shifted relocation slots"
// check: 2.0/sp2p3 target=0x270 candidate=0x26c words=999 exact_bytes=999 bad_relocs=1
// FUN_020105bc @ 0x020105bc (0x270 incl callback literal, ARM)
// flags: -O4,p -noThumb
// Acquire stream slot, select resource backend, initialize gain/channel state and start playback.
// Ten input words: six stack arguments survive allocation and initialization calls.
// Resource format is constrained to 0/1/2 by the opened resource; other values leave mode unspecified.
typedef unsigned int u32;
typedef struct { u32 f0:6; u32 mono:1; u32 rest:25; } Flags110;
typedef unsigned short u16;
typedef unsigned char u8;
extern char *FUN_02010504(void *,u32,int);
extern void FUN_020116a8(void *,u32),FUN_02010590(void *),FUN_020118d0(void *);
extern u32 FUN_020118e8(void *,u32,u32);
extern int FUN_02010980(void *,int,void *);
extern void FUN_020109b8(void *),FUN_0200e388(void *,int,int);
extern void FUN_02010c04(u32,u32,u32,u32,u32,void *);
extern int FUN_0200e10c(void *,int,u32,u32,u32,int,void (*)(u32,u32,u32,u32,u32,void *),void *);
#define W(o) (*(u32 *)(p+(o)))
#define B(o) (*(u8 *)(p+(o)))
int FUN_020105bc(void *owner,char *resource,u32 slot,int priority,u32 param,u32 milliseconds,u32 a,u32 b,u32 c,u32 d){
 char *p=FUN_02010504(owner,slot,priority);int mode,channels;u32 length;
 if(!p)return 0;
 FUN_020116a8(p,*(u32 *)resource);
 if(!(*(int (**)(void *,u32))(p+356))(p,*(u32 *)resource)){FUN_02010590(p);return 0;}
 W(352)=(u32)(((unsigned long long)*(u16 *)(p+196)*milliseconds)/1000);
 if(W(352)&&B(192)==2)W(272)|=16;else W(272)&=~16u;
 W(276)=4;W(272)&=~32u;W(272)&=~2u;W(280)=0;W(272)&=~4u;W(272)&=~8u;W(284)=0;
 W(308)=a;W(312)=b;W(316)=c;W(320)=d;W(324)=param;W(348)=0;
 W(340)=*(u8 *)(resource+4);W(344)=127;FUN_020118d0(p+232);FUN_020118e8(p+232,32512,1);
 switch(B(192)){case 0:mode=0;break;case 1:case 2:mode=1;break;}
 channels=B(194);if(*(u8 *)(resource+7)&1)channels=2;if(channels>B(292))channels=B(292);
 ((Flags110 *)(p+272))->mono = (channels==1);
 if(!FUN_02010980(p,channels,p+294)){
  (*(void (**)(void *))(p+360))(p);FUN_02010590(p);return 0;
 }
 length=(W(304)*(u32)channels)/B(292);
 if(!FUN_0200e10c(p,mode,W(300),length,*(u16 *)(p+198),4,FUN_02010c04,p)){
  FUN_020109b8(p);(*(void (**)(void *))(p+360))(p);FUN_02010590(p);return 0;
 }
 if(channels==2){FUN_0200e388(p,0,0);FUN_0200e388(p,1,127);}
 return 1;
}
