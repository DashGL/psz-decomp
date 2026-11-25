// FUN_overlay_27__02199d1c @ 0x02199d1c (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_27__02199d1c @ 0x02199d1c (code 0xbc, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch481.md.
 */
extern void FUN_02037760(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_27__02199ddc(void *);extern void *FUN_overlay_27__02199df0(void *);extern void *FUN_overlay_27__02199e04(void *);extern void *FUN_overlay_27__02199e18(void *);extern void *FUN_overlay_27__02199e2c(void *);extern void *FUN_overlay_27__02199e40(void *);extern void *FUN_overlay_27__02199e54(void *);extern void *FUN_overlay_27__02199e68(void *);extern void *FUN_overlay_27__02199e7c(void *);
void * FUN_overlay_27__02199d1c(int *self) { void *p;FUN_02037760(self);self[0]=0x0219c4ec;self[12]=0;self[13]=0;self[15]=0;self[16]=0;self[17]=0;self[18]=0;self[19]=0;self[20]=0;self[21]=0;self[22]=-1;self[23]=0;self[24]=0;p=FUN_020ba894(12);if(p)p=FUN_overlay_27__02199ddc(p);self[12]=(int)p;p=FUN_020ba894(32);if(p)p=FUN_overlay_27__02199df0(p);self[13]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_27__02199e04(p);self[14]=(int)p;p=FUN_020ba894(32);if(p)p=FUN_overlay_27__02199e18(p);self[15]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_27__02199e2c(p);self[16]=(int)p;p=FUN_020ba894(20);if(p)p=FUN_overlay_27__02199e40(p);self[17]=(int)p;p=FUN_020ba894(24);if(p)p=FUN_overlay_27__02199e54(p);self[18]=(int)p;p=FUN_020ba894(12);if(p)p=FUN_overlay_27__02199e68(p);self[19]=(int)p;p=FUN_020ba894(16);if(p)p=FUN_overlay_27__02199e7c(p);self[20]=(int)p;return self; }
