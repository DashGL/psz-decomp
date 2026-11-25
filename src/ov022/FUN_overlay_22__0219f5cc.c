// FUN_overlay_22__0219f5cc @ 0x0219f5cc (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f5cc @ 0x0219f5cc (code 0x54, full extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete effect pool dispatch and allocation.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch557.md.
 */
typedef void (*Update)(void *,void *);extern void FUN_overlay_22__0219f6cc(void *,unsigned);
void FUN_overlay_22__0219f5cc(void *payload) { int i;if(*(void **)0x021a1798&&payload){for(i=0;i<20;i++){int *object=(*(int ***)0x021a1798)[i];if(object)((Update)(*(unsigned **)object)[0])(object,payload);}for(i=0;i<20;i++){int *object=(*(int ***)0x021a1798)[i];if(object&&object[1]==1){FUN_overlay_22__0219f6cc(payload,(unsigned)object[5]);(*(int ***)0x021a1798)[i]=0;}}} }
