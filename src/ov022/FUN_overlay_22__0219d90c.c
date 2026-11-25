// FUN_overlay_22__0219d90c @ 0x0219d90c (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219d90c @ 0x0219d90c (code 0x50, full extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game component setup with exact field
 * widths and inherited constructor arguments. ABI/behavior evidence:
 * notes/sessions/coverage-overlays-2026-11-05-batch371.md.
 */
extern void FUN_overlay_22__0219a05c(void *,int);
extern void FUN_overlay_22__0219a070(void *,int);
extern void FUN_overlay_22__0219a0c8(void *,int);extern void FUN_overlay_22__0219a0f4(void *,int);
void FUN_overlay_22__0219d90c(int *self) { self[42]=0;if(self[5]>=0x1e66 && self[5]<=0x219a)self[42]=1;
self[19]=((signed char *)self[2])[0x44];
*(short *)((char *)self+0x28)=0;*(short *)((char *)self+0x2c)=0;
FUN_overlay_22__0219a05c(self,1);FUN_overlay_22__0219a070(self,1);FUN_overlay_22__0219a0c8(self,1);FUN_overlay_22__0219a0f4(self,4); }
