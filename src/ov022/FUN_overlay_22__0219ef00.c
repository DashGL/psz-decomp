// FUN_overlay_22__0219ef00 @ 0x0219ef00 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ef00 @ 0x0219ef00 (code 0x38, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay22 ROM reconstruction, 2026-11-05.
 * Game controller construction, message dispatch or script command.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch361.md.
 */
extern void *FUN_020352dc(void *,unsigned int,int);extern void FUN_020510f4(void *);extern void FUN_overlay_22__0219f030(int);extern void FUN_overlay_22__0219f568(void *);
void * FUN_overlay_22__0219ef00(int *self,unsigned int owner,int kind) { int mode;FUN_020352dc(self,owner,kind);self[0]=0x021a1604;FUN_020510f4(*(void **)0x0210e24c);self[45]=60;mode=3;if(kind!=63 && kind==65)mode=4;FUN_overlay_22__0219f030(mode);FUN_overlay_22__0219f568(self);return self; }
