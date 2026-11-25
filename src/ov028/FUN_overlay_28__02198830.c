// FUN_overlay_28__02198830 @ 0x02198830 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198830 @ 0x02198830 (code 0xaa, full extent 0xb0, thumb)
// check: vers=2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch466.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_28__021988e0(void *);extern void *FUN_overlay_28__02198904(void *);extern void *FUN_overlay_28__02198918(void *);extern void *FUN_overlay_28__0219892c(void *);extern void *FUN_overlay_28__02198940(void *);extern void *FUN_overlay_28__02198954(void *);extern void *FUN_overlay_28__02198968(void *);extern void *FUN_overlay_28__0219897c(void *);
void * FUN_overlay_28__02198830(int *self) { void *p;FUN_02037760(self);self[0]=0x0219bf08;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=-1;self[22]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__021988e0(p);self[12]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_28__02198904(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_28__02198918(p);self[14]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_28__0219892c(p);self[15]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_28__02198940(p);self[16]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_28__02198954(p);self[17]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_28__02198968(p);self[18]=(int)p;p=FUN_020ba894(28);if(p)p=FUN_overlay_28__0219897c(p);self[19]=(int)p;return self; }
