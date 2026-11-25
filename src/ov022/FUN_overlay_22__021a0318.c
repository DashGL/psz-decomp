// FUN_overlay_22__021a0318 @ 0x021a0318 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0318 @ 0x021a0318 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay22 ROM reconstruction, 2026-11-05.
 * Game controller construction, message dispatch or script command.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch361.md.
 */
extern void FUN_0203786c(void *,void *);extern void *FUN_overlay_22__02197f80(void *,void *);extern void *FUN_overlay_22__0219b08c(void *,void *);extern void *FUN_overlay_22__0219c8b0(void *,void *);
void FUN_overlay_22__021a0318(int *self,void *parent) { FUN_0203786c(self,parent);if(parent){if(parent){self[12]=(int)FUN_overlay_22__02197f80(parent,self);self[13]=(int)FUN_overlay_22__0219b08c(parent,self);self[14]=(int)FUN_overlay_22__0219c8b0(parent,self);}} }
