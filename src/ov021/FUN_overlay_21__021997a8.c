// check: vers=2.0/sp2p3 target=0x2a8 candidate=0x2a4 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/170 size=0x2a8 vers=2.0/sp2p3 next="constructor member-store register allocation"
// flags: -O2,s
/* Construct the twenty owned behavior states and reset embedded handles. */
typedef struct {int x,y,z;} Vec;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
extern char DAT_021a12fc[];extern Vec DAT_020fc958;
#pragma thumb off
extern void FUN_02001540(void *,int,int);
#pragma thumb on
extern void FUN_02037760(void *),FUN_overlay_21__0219a7d0(void *);
extern void *FUN_020ba894(int);
extern void *FUN_overlay_21__02199a50(void *);
extern void *FUN_overlay_21__02199a74(void *);
extern void *FUN_overlay_21__02199a88(void *);
extern void *FUN_overlay_21__02199a9c(void *);
extern void *FUN_overlay_21__02199ab0(void *);
extern void *FUN_overlay_21__02199ac4(void *);
extern void *FUN_overlay_21__02199ad8(void *);
extern void *FUN_overlay_21__02199aec(void *);
extern void *FUN_overlay_21__02199b00(void *);
extern void *FUN_overlay_21__02199b14(void *);
extern void *FUN_overlay_21__02199b28(void *);
extern void *FUN_overlay_21__02199b3c(void *);
extern void *FUN_overlay_21__02199b50(void *);
extern void *FUN_overlay_21__02199b64(void *);
extern void *FUN_overlay_21__02199b78(void *);
extern void *FUN_overlay_21__02199b8c(void *);
extern void *FUN_overlay_21__02199ba0(void *);
extern void *FUN_overlay_21__02199bb4(void *);
extern void *FUN_overlay_21__02199bc8(void *);
extern void *FUN_overlay_21__02199bdc(void *);
void *FUN_overlay_21__021997a8(void *self){void *child;int i;FUN_02037760(self);P(self,0)=DAT_021a12fc;
I(self,0x30)=0;I(self,0x34)=0;I(self,0x38)=0;I(self,0x3c)=0;I(self,0x40)=0;I(self,0x44)=0;I(self,0x48)=0;I(self,0x4c)=0;I(self,0x50)=0;I(self,0x54)=0;I(self,0x58)=0;I(self,0x5c)=0;I(self,0x60)=0;I(self,0x64)=0;I(self,0x68)=0;I(self,0x6c)=0;I(self,0x70)=0;I(self,0x74)=0;I(self,0x78)=0;I(self,0x7c)=0;I(self,0x80)=0;
*(unsigned char *)((char *)self+0x84)=0;I(self,0x88)=0;I(self,0x8c)=-1;I(self,0xa0)=0;I(self,0xa4)=0;I(self,0xa8)=-1;*(Vec *)((char *)self+0xac)=DAT_020fc958;
I(self,0xb8)=0;I(self,0xbc)=0;I(self,0xc0)=0;I(self,0xc4)=0;I(self,0xc8)=0;I(self,0xcc)=0;I(self,0xd0)=0;I(self,0xd4)=0;I(self,0xd8)=0;I(self,0xdc)=0;I(self,0xe0)=0;I(self,0xf4)=0;I(self,0xf8)=0;
FUN_02001540((char *)self+0xfc,0,8);I(self,0x100)=-1;FUN_02001540((char *)self+0x104,0,8);I(self,0x108)=-1;FUN_02001540((char *)self+0x10c,0,8);I(self,0x110)=-1;
i=0;do{*(int *)(((char *)self+i*4)+0x90)=0;i++;}while(i<4);
child=FUN_020ba894(0x14);if(child)child=FUN_overlay_21__02199a50(child);P(self,0x30)=child;
child=FUN_020ba894(0x10);if(child)child=FUN_overlay_21__02199a74(child);P(self,0x34)=child;
child=FUN_020ba894(0x10);if(child)child=FUN_overlay_21__02199a88(child);P(self,0x38)=child;
child=FUN_020ba894(0x14);if(child)child=FUN_overlay_21__02199a9c(child);P(self,0x3c)=child;
child=FUN_020ba894(0xc);if(child)child=FUN_overlay_21__02199ab0(child);P(self,0x40)=child;
child=FUN_020ba894(0x1c);if(child)child=FUN_overlay_21__02199ac4(child);P(self,0x44)=child;
child=FUN_020ba894(0x28);if(child)child=FUN_overlay_21__02199ad8(child);P(self,0x48)=child;
child=FUN_020ba894(0x20);if(child)child=FUN_overlay_21__02199aec(child);P(self,0x4c)=child;
child=FUN_020ba894(0x14);if(child)child=FUN_overlay_21__02199b00(child);P(self,0x50)=child;
child=FUN_020ba894(0x24);if(child)child=FUN_overlay_21__02199b14(child);P(self,0x54)=child;
child=FUN_020ba894(0x24);if(child)child=FUN_overlay_21__02199b28(child);P(self,0x58)=child;
child=FUN_020ba894(0x28);if(child)child=FUN_overlay_21__02199b3c(child);P(self,0x5c)=child;
child=FUN_020ba894(0x1c);if(child)child=FUN_overlay_21__02199b50(child);P(self,0x60)=child;
child=FUN_020ba894(0x10);if(child)child=FUN_overlay_21__02199b64(child);P(self,0x64)=child;
child=FUN_020ba894(0x1c);if(child)child=FUN_overlay_21__02199b78(child);P(self,0x68)=child;
child=FUN_020ba894(0x18);if(child)child=FUN_overlay_21__02199b8c(child);P(self,0x6c)=child;
child=FUN_020ba894(0x28);if(child)child=FUN_overlay_21__02199ba0(child);P(self,0x70)=child;
child=FUN_020ba894(0x20);if(child)child=FUN_overlay_21__02199bb4(child);P(self,0x74)=child;
child=FUN_020ba894(0xc);if(child)child=FUN_overlay_21__02199bc8(child);P(self,0x78)=child;
child=FUN_020ba894(0x18);if(child)child=FUN_overlay_21__02199bdc(child);P(self,0x7c)=child;

FUN_02001540((char *)self+0xfc,0,8);I(self,0x100)=-1;FUN_02001540((char *)self+0x104,0,8);I(self,0x108)=-1;FUN_02001540((char *)self+0x10c,0,8);I(self,0x110)=-1;
FUN_overlay_21__0219a7d0(self);return self;}
