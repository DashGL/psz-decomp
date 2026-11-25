// FUN_overlay_29__02198f04 @ 0x02198f04 (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch5.json; original draft retained for referenced provenance.
// FUN_overlay_29__02198f04 @ 0x02198f04 (code 0x90, full extent 0x94, thumb)
// check: vers=2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete ordered seven-child release destructor.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch576.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_29__02198f04(void **self) { void *child;self[0]=(void *)0x0219bca4;child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[16];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[16]=0;}child=self[15];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[15]=0;}child=self[14];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[14]=0;}child=self[13];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[13]=0;}child=self[12];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[12]=0;}FUN_02037848(self);return self; }
