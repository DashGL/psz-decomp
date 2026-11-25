// FUN_overlay_26__02199824 @ 0x02199824 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_26__02199824 @ 0x02199824 (code 0xa8, full extent 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch460.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_26__021998d0(void *);extern void *FUN_overlay_26__021998e4(void *);extern void *FUN_overlay_26__021998f8(void *);extern void *FUN_overlay_26__0219990c(void *);extern void *FUN_overlay_26__02199920(void *);extern void *FUN_overlay_26__02199934(void *);extern void *FUN_overlay_26__02199948(void *);extern void *FUN_overlay_26__0219995c(void *);
void * FUN_overlay_26__02199824(int *self) { void *p;FUN_02037760(self);self[0]=0x0219b5f8;self[12]=0;self[13]=0;self[14]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=-1;self[21]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_26__021998d0(p);self[12]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_26__021998e4(p);self[13]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_26__021998f8(p);self[14]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_26__0219990c(p);self[15]=(int)p;p=FUN_020ba894(36);if(p)p=FUN_overlay_26__02199920(p);self[16]=(int)p;p=FUN_020ba894(40);if(p)p=FUN_overlay_26__02199934(p);self[17]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_26__02199948(p);self[18]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_26__0219995c(p);self[19]=(int)p;return self; }
