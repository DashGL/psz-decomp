// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// FUN_overlay_11__02121200 @ 0x02121200
// check: 2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned D_02124a84[];
extern unsigned D_020f96e4[];
/* USA ROM reconstruction, 2026-11-06. Complete gated renderer submission and 64-bit elapsed-time calculation.
 * ABI evidence: notes/sessions/coverage-high-overlays-batch614-2026-11-06.md.
 */
typedef unsigned long long U64;extern void FUN_0201c8a0(void);extern unsigned FUN_02065dd4(unsigned);extern U64 FUN_02067e0c(void);extern void FUN_020673a0(void);extern void FUN_01ff8138(unsigned,const void *,unsigned);extern void FUN_overlay_11__02120f78(void *);extern void *FUN_overlay_11__02120d28(void *,void *,void *,unsigned,int);
void FUN_overlay_11__02121200(char *self) { unsigned previous;U64 begin,elapsed;if(*(unsigned *)(self+0x2be0)!=D_02124a84[1])return;
 FUN_0201c8a0();FUN_overlay_11__02120f78(self);previous=FUN_02065dd4(2048);begin=FUN_02067e0c();
 FUN_overlay_11__02120d28(self,self+0x3a0,*(void **)(self+0x38c),*(unsigned *)(self+0x394),*(int *)(self+0x398));
 FUN_020673a0();FUN_01ff8138(*D_020f96e4,self+0x3a0,160*((unsigned *)*(void **)(self+0x38c))[1]);elapsed=FUN_02067e0c()-begin;FUN_02065dd4(previous);
 *(unsigned *)(self+0x39c)=(unsigned)((elapsed*64000ULL)/33514ULL);*(volatile unsigned *)0x04000440=0;((volatile unsigned *)0x04000440)[2]=1; }
