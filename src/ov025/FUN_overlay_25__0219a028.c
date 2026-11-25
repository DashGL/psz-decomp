// FUN_overlay_25__0219a028 @ 0x0219a028 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_25__0219a028 @ 0x0219a028 (code 0xaa, full extent 0xb0, thumb)
// check: vers=2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch466.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_25__0219a0d8(void *);extern void *FUN_overlay_25__0219a0ec(void *);extern void *FUN_overlay_25__0219a100(void *);extern void *FUN_overlay_25__0219a114(void *);extern void *FUN_overlay_25__0219a128(void *);extern void *FUN_overlay_25__0219a13c(void *);extern void *FUN_overlay_25__0219a150(void *);extern void *FUN_overlay_25__0219a164(void *);
void * FUN_overlay_25__0219a028(int *self) { void *p;FUN_02037760(self);self[0]=0x0219ae98;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=-1;self[22]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_25__0219a0d8(p);self[12]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_25__0219a0ec(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_25__0219a100(p);self[14]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_25__0219a114(p);self[15]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_25__0219a128(p);self[16]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_25__0219a13c(p);self[17]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_25__0219a150(p);self[18]=(int)p;p=FUN_020ba894(28);if(p)p=FUN_overlay_25__0219a164(p);self[19]=(int)p;return self; }
