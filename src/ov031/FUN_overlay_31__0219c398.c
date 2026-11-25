// FUN_overlay_31__0219c398 @ 0x0219c398 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c398 @ 0x0219c398 (code 0x34, full extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Derived resource cleanup, optional
 * receiver deallocation, original pointer return preserved.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch378.md.
 */
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *,int);
extern void *FUN_02047434(void *);
extern void FUN_020ba8ac(void *);
void *FUN_overlay_31__0219c398(int *self) { int handle;self[0]=0x0219d038;handle=self[87];if(handle!=-1){FUN_020bed1c(FUN_020be450(),handle);self[87]=-1;}FUN_02047434(self);return self; }
