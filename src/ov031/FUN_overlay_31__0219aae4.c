// FUN_overlay_31__0219aae4 @ 0x0219aae4 (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219aae4 @ 0x0219aae4 (code/full extent 0x5e, thumb)
// check: vers=2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game countdown/resource update.
 * Behavior and ABI: notes/sessions/coverage-overlays-2026-11-05-batch374.md.
 */
extern int FUN_02040d2c(void *,int);extern int FUN_overlay_31__0219bfa4(void *,int);extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_31__0219aae4(int *self) { void *owner=(void *)self[1];int *state;int remaining;if(FUN_02040d2c(owner,0)){state=(int *)self[2];remaining=--state[26];if(!remaining){if(!FUN_overlay_31__0219bfa4(state,7))FUN_02040c0c(owner,0,1,4096,0);}else if(remaining==1)FUN_02040c0c(owner,0,11,4096,0);else FUN_02040c0c(owner,0,10,4096,0);} }
