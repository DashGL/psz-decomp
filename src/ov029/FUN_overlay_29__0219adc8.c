// FUN_overlay_29__0219adc8 @ 0x0219adc8 (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219adc8 @ 0x0219adc8 (code 0xbc, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch482.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_29__0219ae88(void *);extern void *FUN_overlay_29__0219ae9c(void *);extern void *FUN_overlay_29__0219aeb0(void *);extern void *FUN_overlay_29__0219aec4(void *);extern void *FUN_overlay_29__0219aed8(void *);extern void *FUN_overlay_29__0219aeec(void *);extern void *FUN_overlay_29__0219af00(void *);extern void *FUN_overlay_29__0219af14(void *);extern void *FUN_overlay_29__0219af28(void *);
void * FUN_overlay_29__0219adc8(int *self) { void *p;FUN_02037760(self);self[0]=0x0219bf0c;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=-1;self[22]=0;self[23]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219ae88(p);self[12]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219ae9c(p);self[14]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219aeb0(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219aec4(p);self[20]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219aed8(p);self[19]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_29__0219aeec(p);self[17]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219af00(p);self[18]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_29__0219af14(p);self[15]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_29__0219af28(p);self[16]=(int)p;return self; }
