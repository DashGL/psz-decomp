// FUN_overlay_31__02198250 @ 0x02198250 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198250 @ 0x02198250 (inventory code 0x34, true extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Game controller reset, cleanup or complete state dispatcher.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch358.md.
 * Full CFG extent used even where inventory truncates a switch.
 */
extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int);extern void *FUN_02047434(void *);
void * FUN_overlay_31__02198250(int *self) { int handle;self[0]=0x0219cbd8;handle=self[88];if(handle!=-1){FUN_020bed1c(FUN_020be450(),handle);self[88]=-1;}FUN_02047434(self);return self; }
