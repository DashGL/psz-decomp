// FUN_overlay_28__0219b314 @ 0x0219b314 (0xac, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219b314 @ 0x0219b314 (code 0xa8, full extent 0xac, thumb)
// check: vers=2.0/sp2p3 target=0xac candidate=0xac words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete ordered eight-child release destructor.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch577.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_28__0219b314(void **self) { void *child;self[0]=(void *)0x0219c390;child=self[12];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[12]=0;}child=self[13];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[13]=0;}child=self[14];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[14]=0;}child=self[15];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[15]=0;}child=self[16];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[16]=0;}child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[19];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[19]=0;}FUN_02037848(self);FUN_020ba8ac(self);return self; }
