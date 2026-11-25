// FUN_overlay_24__02199350 @ 0x02199350 (0xa8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_24__02199350 @ 0x02199350 (code 0xa2, full extent 0xa8, thumb)
// check: vers=2.0/sp2p3 target=0xa8 candidate=0xa8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete ordered eight-child release destructor.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch577.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_24__02199350(void **self) { void *child;self[0]=(void *)0x0219c45c;child=self[27];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[27]=0;}child=self[26];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[26]=0;}child=self[25];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[25]=0;}child=self[24];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[24]=0;}child=self[23];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[23]=0;}child=self[22];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[22]=0;}child=self[21];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[21]=0;}child=self[20];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[20]=0;}FUN_02037848(self);return self; }
