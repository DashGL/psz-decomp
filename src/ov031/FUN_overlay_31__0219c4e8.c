// FUN_overlay_31__0219c4e8 @ 0x0219c4e8 (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219c4e8 @ 0x0219c4e8 (code/full extent 0x5e, thumb)
// check: vers=2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game countdown/resource update.
 * Behavior and ABI: notes/sessions/coverage-overlays-2026-11-05-batch374.md.
 */
extern int FUN_02047440(void *);extern int FUN_0204770c(void *);extern void FUN_0204ac24(int,int,int,int);extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int);
int FUN_overlay_31__0219c4e8(int *self) { int result=FUN_02047440(self);int handle;if(!result && FUN_0204770c(self)){FUN_0204ac24(self[58],self[87],self[24],1);if(self[37]>12288){handle=self[87];if(handle!=-1){FUN_020bed1c(FUN_020be450(),handle);self[87]=-1;}}}return result; }
