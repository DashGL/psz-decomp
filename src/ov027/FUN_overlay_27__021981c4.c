// FUN_overlay_27__021981c4 @ 0x021981c4 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_27__021981c4 @ 0x021981c4 (code 0xb4, full extent 0xb8, thumb)
// check: vers=2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete nine-state lifecycle, with constructor randomization and concrete virtual ABI proof.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch582.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_27__021981c4(void **self) { void *child;self[0]=(void *)0x0219c2a4;child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[19];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[19]=0;}child=self[20];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[20]=0;}child=self[21];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[21]=0;}child=self[22];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[22]=0;}child=self[23];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[23]=0;}child=self[24];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[24]=0;}child=self[25];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[25]=0;}FUN_02037848(self);return self; }
