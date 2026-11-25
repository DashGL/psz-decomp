// FUN_overlay_26__0219ae48 @ 0x0219ae48 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_26__0219ae48 @ 0x0219ae48 (code 0x4a, full extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch402.md.
 */
extern void FUN_overlay_26__0219a4f4(void *,void *);extern int FUN_overlay_26__0219a528(void *);extern void FUN_overlay_26__0219a4b4(void *,void *);extern int FUN_02040d44(void *,int);extern void FUN_02037924(void *);extern int FUN_overlay_26__0219a53c(void *);extern void FUN_overlay_26__0219a540(void *);
void FUN_overlay_26__0219ae48(int *self) { int *owner=(int *)self[1];void *state=(void *)self[2];FUN_overlay_26__0219a4f4(owner,self+6);if(FUN_overlay_26__0219a528(owner)==1)FUN_overlay_26__0219a4b4(owner,self+3);if(FUN_02040d44(owner,0))FUN_02037924(state);if(FUN_overlay_26__0219a53c(owner)==1)FUN_overlay_26__0219a540(owner); }
