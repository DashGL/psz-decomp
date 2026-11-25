// FUN_overlay_28__0219958c @ 0x0219958c (0xb4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219958c @ 0x0219958c (code 0xae, full extent 0xb4, thumb)
// check: vers=2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch473.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_28__02199640(void *);extern void *FUN_overlay_28__02199654(void *);extern void *FUN_overlay_28__02199668(void *);extern void *FUN_overlay_28__0219967c(void *);extern void *FUN_overlay_28__02199690(void *);extern void *FUN_overlay_28__021996a4(void *);extern void *FUN_overlay_28__021996b8(void *);extern void *FUN_overlay_28__021996cc(void *);
void * FUN_overlay_28__0219958c(int *self) { void *p;FUN_02037760(self);self[0]=0x0219c0c4;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=1;self[22]=0;self[23]=-1;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__02199640(p);self[12]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_28__02199654(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__02199668(p);self[14]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__0219967c(p);self[15]=(int)p;p=FUN_020ba894(28);if(p)p=FUN_overlay_28__02199690(p);self[16]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__021996a4(p);self[17]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__021996b8(p);self[18]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_28__021996cc(p);self[19]=(int)p;return self; }
