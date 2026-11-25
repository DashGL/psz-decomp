// FUN_overlay_24__02197f80 @ 0x02197f80 (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_24__02197f80 @ 0x02197f80 (code 0xba, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch483.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_24__02198040(void *);extern void *FUN_overlay_24__02198064(void *);extern void *FUN_overlay_24__02198078(void *);extern void *FUN_overlay_24__0219808c(void *);extern void *FUN_overlay_24__021980a0(void *);extern void *FUN_overlay_24__021980b4(void *);extern void *FUN_overlay_24__021980c8(void *);extern void *FUN_overlay_24__021980dc(void *);extern void *FUN_overlay_24__021980f0(void *);
void * FUN_overlay_24__02197f80(int *self) { void *p;FUN_02037760(self);self[0]=0x0219c248;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=0;self[22]=-1;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__02198040(p);self[12]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__02198064(p);self[13]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__02198078(p);self[14]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__0219808c(p);self[15]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__021980a0(p);self[16]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__021980b4(p);self[17]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__021980c8(p);self[18]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__021980dc(p);self[19]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__021980f0(p);self[20]=(int)p;return self; }
