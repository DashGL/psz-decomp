// FUN_overlay_31__0219bc94 @ 0x0219bc94 (0xcc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch2.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219bc94 @ 0x0219bc94 (code 0xc6, full extent 0xcc, thumb)
// check: vers=2.0/sp2p3 target=0xcc candidate=0xcc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete ten-state owner lifecycle, with concrete child constructor and deleting-target ABI proof.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch585.md.
 */
typedef void (*Release)(void *);extern void *FUN_02037848(void *);extern void FUN_020ba8ac(void *);
void * FUN_overlay_31__0219bc94(void **self) { void *child;self[0]=(void *)0x0219d00c;child=self[21];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[21]=0;}child=self[20];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[20]=0;}child=self[19];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[19]=0;}child=self[18];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[18]=0;}child=self[17];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[17]=0;}child=self[16];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[16]=0;}child=self[15];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[15]=0;}child=self[14];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[14]=0;}child=self[13];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[13]=0;}child=self[12];if(child){if(child)((Release)(*(unsigned **)child)[4])(child);self[12]=0;}FUN_02037848(self);return self; }
