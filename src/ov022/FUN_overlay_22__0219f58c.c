// FUN_overlay_22__0219f58c @ 0x0219f58c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f58c @ 0x0219f58c (code 0x3c, full extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch401.md.
 */
extern void FUN_overlay_22__0219f6cc(void *,int);extern void FUN_020ba8ac(void *);
void FUN_overlay_22__0219f58c(void *self) { int i;int **p;if(*(int ***)0x021a1798){for(i=0;i<20;i++){int *entry=(*(int ***)0x021a1798)[i];if(entry)FUN_overlay_22__0219f6cc(self,entry[5]);}p=*(int ***)0x021a1798;if(p){if(p)FUN_020ba8ac(p);*(int ***)0x021a1798=0;}} }
