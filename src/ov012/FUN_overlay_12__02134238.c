// FUN_overlay_12__02134238 @ 0x02134238 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134238 @ 0x02134238 (code 0x3c, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Configure game view/resources and schedule callbacks with explicit stack ABI.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch366.md.
 */
extern void *FUN_020bc508(void *,int);extern void *FUN_020ba440(void *);extern int FUN_overlay_12__02134274(void *);extern void FUN_overlay_12__02134810(void);
void FUN_overlay_12__02134238(int *self) { if(((int *)self[4])[1]==2){self[6]=(int)FUN_020ba440(FUN_020bc508((void *)self[4],0));self[5]=(int)FUN_020ba440(FUN_020bc508((void *)self[4],1));if(FUN_overlay_12__02134274(self))self[0]=2;else FUN_overlay_12__02134810();} }
