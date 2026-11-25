// FUN_overlay_31__02198288 @ 0x02198288 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198288 @ 0x02198288 (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Release handle, base, and allocation; return original receiver.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch362.md.
 */
extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int);extern void *FUN_02047434(void *);extern void FUN_020ba8ac(void *);
void *FUN_overlay_31__02198288(int *self) {int handle;self[0]=0x0219cbd8;handle=self[88];if(handle!=-1){FUN_020bed1c(FUN_020be450(),handle);self[88]=-1;}FUN_02047434(self);FUN_020ba8ac(self);return self;}
