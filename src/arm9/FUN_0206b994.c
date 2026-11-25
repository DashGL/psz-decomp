// flags: -O4,p -noThumb
typedef unsigned int u32;typedef unsigned short u16;
extern unsigned char UNK_0211a180[];
extern void FUN_0206be90(void *),FUN_020683e8(u32),FUN_0206b90c(int *,int *),FUN_0206b7e4(int,int),FUN_02068738(void),FUN_0206bbd4(int,int,int,int),FUN_0206b740(int),FUN_02068444(u32),FUN_0206b8b8(void);
extern u32 FUN_020683d4(void),FUN_02065e30(u32),FUN_02065dd4(u32);
extern int FUN_02067d94(void),FUN_02057034(void),FUN_0206bcec(void),FUN_0206b4dc(u16,u16);
#define V16(a) (*(volatile u16 *)(a))
#define V32(a) (*(volatile u32 *)(a))
void FUN_0206b994(u32 sources,u32 parameter,u16 additional){
 u32 savedInterrupts,savedMask;
 int powerOff=0;
 u32 display0,display1;
 u16 request,savedEnable;
 int oldMode,a,b;
 volatile u32 frame;
 FUN_0206be90(*(void **)(UNK_0211a180+12));
 savedEnable=V16(0x04000208);V16(0x04000208)=0;
 savedInterrupts=FUN_020683d4();savedMask=FUN_02065e30(0x3fffff);
 FUN_02065dd4((FUN_02067d94()?8:0)|0x40000);FUN_020683e8(savedInterrupts);
 (void)V16(0x04000208);V16(0x04000208)=1;
 if((sources&8)&&V16(0x027ffc40)==2)sources&=~8u;
 if((sources&16)&&!FUN_02057034())sources&=~16u;
 display0=V32(0x04000000);display1=V32(0x04001000);oldMode=FUN_0206bcec();FUN_0206b90c(&a,&b);FUN_0206b7e4(2,0);
 frame=V32(0x027ffc3c);for(;;){u32 v=V32(0x027ffc3c);if(frame!=v)break;}
 frame=V32(0x027ffc3c);V32(0x04000000)&=~0x30000u;V32(0x04001000)&=~0x10000u;
 for(;;){u32 v=V32(0x027ffc3c);if(frame!=v)break;}
 frame=V32(0x027ffc3c);for(;;){u32 v=V32(0x027ffc3c);if(frame!=v)break;}
 request=(u16)(sources|((u32)a<<5)|((u32)b<<6));
 while(FUN_0206b4dc(request,(u16)(parameter|additional))!=0){}
 FUN_02068738();if((sources&8)&&(V32(0x04000214)&0x100000))powerOff=1;
 if(!powerOff){if(oldMode==1)FUN_0206bbd4(1,1,1,1);else FUN_0206b740(1);V32(0x04000000)=display0;V32(0x04001000)=display1;}
 FUN_02068444(0x708100);FUN_020683d4();FUN_02065dd4(savedMask);FUN_020683e8(savedInterrupts);
 (void)V16(0x04000208);V16(0x04000208)=savedEnable;if(powerOff)FUN_0206b8b8();
 FUN_0206be90(*(void **)(UNK_0211a180+24));
}
