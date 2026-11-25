// FUN_overlay_17__0211fbb0 @ 0x0211fbb0 (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211fbb0 @ 0x0211fbb0 (code 0xa2, full extent 0xb4, thumb)
// check: vers=2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete gated renderer submission and 64-bit elapsed-time calculation.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch578.md.
 */
typedef unsigned long long U64;extern void FUN_0201c8a0(void);extern unsigned FUN_02065dd4(unsigned);extern U64 FUN_02067e0c(void);extern void FUN_020673a0(void);extern void FUN_01ff8138(unsigned,const void *,unsigned);extern void FUN_overlay_17__0211f91c(void *);extern void *FUN_overlay_17__0211f6cc(void *,void *,void *,unsigned,int);extern unsigned FUN_overlay_17__0211e69c(void);
void FUN_overlay_17__0211fbb0(char *self) { unsigned previous;U64 begin,elapsed;if(*(unsigned *)(self+0x2be0)!=FUN_overlay_17__0211e69c())return;
 FUN_0201c8a0();FUN_overlay_17__0211f91c(self);previous=FUN_02065dd4(2048);begin=FUN_02067e0c();
 FUN_overlay_17__0211f6cc(self,self+0x3a0,*(void **)(self+0x38c),*(unsigned *)(self+0x394),*(int *)(self+0x398));
 FUN_020673a0();FUN_01ff8138(*(unsigned *)0x020f96e4,self+0x3a0,160*((unsigned *)*(void **)(self+0x38c))[1]);elapsed=FUN_02067e0c()-begin;FUN_02065dd4(previous);
 *(unsigned *)(self+0x39c)=(unsigned)((elapsed*64000ULL)/33514ULL);*(unsigned *)0x04000440=0;((unsigned *)0x04000440)[2]=1; }
