// FUN_overlay_22__0219946c @ 0x0219946c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219946c @ 0x0219946c (code 0x42, full extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Consume game registry transition
 * or send fully initialized four/eight-byte command with original guards.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch390.md.
 */
extern int FUN_overlay_22__0219acc4(void *);extern void *FUN_overlay_22__0219a638(int,int);extern int FUN_overlay_22__02198dc8(void *);extern void FUN_overlay_22__02197fe8(void *);extern void FUN_overlay_22__0219f22c(void *,void *);
void FUN_overlay_22__0219946c(int *self) { signed char command[8];if(FUN_overlay_22__0219acc4(self)==1){if(!FUN_overlay_22__0219a638(((signed char *)self)[0x14d],0) || FUN_overlay_22__02198dc8(self)!=1){FUN_overlay_22__02197fe8(command);command[0]=3;command[1]=-1;FUN_overlay_22__0219f22c((void *)self[1],command);}} }
