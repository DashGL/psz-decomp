// FUN_overlay_24__021991f0 @ 0x021991f0 (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_24__021991f0 @ 0x021991f0 (code 0xb8, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch483.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_24__021992b0(void *);extern void *FUN_overlay_24__021992c4(void *);extern void *FUN_overlay_24__021992d8(void *);extern void *FUN_overlay_24__021992ec(void *);extern void *FUN_overlay_24__02199300(void *);extern void *FUN_overlay_24__02199314(void *);extern void *FUN_overlay_24__02199328(void *);extern void *FUN_overlay_24__0219933c(void *);
void * FUN_overlay_24__021991f0(int *self) { void *p;FUN_02037760(self);self[0]=0x0219c45c;self[12]=0;self[13]=*(int *)0x020fc988;self[14]=-1;self[15]=-1;self[16]=0;self[17]=0;self[18]=0;self[19]=-1;self[20]=0;self[21]=0;self[22]=0;self[23]=0;self[24]=0;self[25]=0;self[26]=0;self[27]=0;p=FUN_020ba894(28);if(p)p=FUN_overlay_24__021992b0(p);self[20]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__021992c4(p);self[21]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_24__021992d8(p);self[22]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__021992ec(p);self[23]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_24__02199300(p);self[24]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__02199314(p);self[25]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_24__02199328(p);self[26]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_24__0219933c(p);self[27]=(int)p;return self; }
