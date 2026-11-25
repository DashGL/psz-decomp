// FUN_overlay_21__0219f3ec @ 0x0219f3ec (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219f3ec @ 0x0219f3ec (code 0x50, full extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game turning, random decision or
 * resource cleanup; precise signed fixed-point/truncation behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch398.md.
 */
extern void FUN_02075068(void *,int);extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int);extern void *FUN_02001540(void *,int,unsigned int);
void FUN_overlay_21__0219f3ec(int *self) { void *owner=(void *)self[1];int *state=(int *)self[2];int resource;if(self[6]!=-1){FUN_02075068(owner,self[6]);self[6]=-1;}resource=self[7];if(resource!=-1){FUN_020bed1c(FUN_020be450(),resource);self[7]=-1;}FUN_02001540(state+67,0,8);state[68]=-1; }
