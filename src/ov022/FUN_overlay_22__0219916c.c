// FUN_overlay_22__0219916c @ 0x0219916c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219916c @ 0x0219916c (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay22 ROM reconstruction, 2026-11-05.
 * Game controller construction, message dispatch or script command.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch361.md.
 */
extern int FUN_overlay_22__0219acc4(void *);extern int FUN_overlay_22__02198f4c(void *);extern int FUN_overlay_22__0219a7e8(void);extern void FUN_overlay_22__02197fe8(void *);extern void FUN_overlay_22__0219f22c(void *,const void *);
void FUN_overlay_22__0219916c(int *self) { signed char payload[8];int value;if(FUN_overlay_22__0219acc4(self)==1 && FUN_overlay_22__02198f4c(self)!=1){value=FUN_overlay_22__0219a7e8();FUN_overlay_22__02197fe8(payload);payload[0]=4;payload[1]=value;FUN_overlay_22__0219f22c((void *)self[1],payload);} }
