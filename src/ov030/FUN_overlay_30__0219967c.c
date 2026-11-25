// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// FUN_overlay_30__0219967c @ 0x0219967c
// check: 2.0/sp2p3 target=0xcc candidate=0xcc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern volatile int D_020fc988[];
extern int D_0219aff0[];
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch497.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_30__02199748(void *);extern void *FUN_overlay_30__0219975c(void *);extern void *FUN_overlay_30__02199770(void *);extern void *FUN_overlay_30__02199784(void *);extern void *FUN_overlay_30__02199798(void *);extern void *FUN_overlay_30__021997ac(void *);extern void *FUN_overlay_30__021997c0(void *);
void * FUN_overlay_30__0219967c(int *self) { void *p;FUN_02037760(self);self[0]=0x0219b024;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=*D_020fc988;self[20]=-1;self[21]=-1;self[22]=0;self[23]=0;self[24]=D_0219aff0[0];self[25]=*D_020fc988;self[26]=*D_020fc988;self[27]=D_0219aff0[8];self[28]=0;self[29]=0;self[30]=0;self[31]=0;((unsigned short *)self)[64]=0;p=FUN_020ba894(20);if(p)p=FUN_overlay_30__02199748(p);self[12]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__0219975c(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__02199770(p);self[14]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_30__02199784(p);self[15]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_30__02199798(p);self[16]=(int)p;p=FUN_020ba894(32);if(p)p=FUN_overlay_30__021997ac(p);self[17]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_30__021997c0(p);self[18]=(int)p;return self; }
