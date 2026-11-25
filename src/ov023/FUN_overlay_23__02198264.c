// FUN_overlay_23__02198264 @ 0x02198264 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198264 @ 0x02198264 (code 0x5a, full extent 0x60, thumb)
// check: vers=2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete ordered child release destructor.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch559.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_23__02198264(void **self) { void *child;self[0]=(void *)0x0219d5f0;child=self[19];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[19]=0;}child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[20];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[20]=0;}FUN_02037848(self);return self; }
