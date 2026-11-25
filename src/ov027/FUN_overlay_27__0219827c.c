// FUN_overlay_27__0219827c @ 0x0219827c (0xc0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219827c @ 0x0219827c (code 0xba, full extent 0xc0, thumb)
// check: vers=2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete nine-state lifecycle, with constructor randomization and concrete virtual ABI proof.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch582.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_27__0219827c(void **self) { void *child;self[0]=(void *)0x0219c2a4;child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[19];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[19]=0;}child=self[20];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[20]=0;}child=self[21];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[21]=0;}child=self[22];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[22]=0;}child=self[23];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[23]=0;}child=self[24];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[24]=0;}child=self[25];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[25]=0;}FUN_02037848(self);FUN_020ba8ac(self);return self; }
