// FUN_overlay_25__02199290 @ 0x02199290 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_25__02199290 @ 0x02199290 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * For non-sentinel fourth argument update value and flag; always increment and return counter.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
unsigned int FUN_overlay_25__02199290(unsigned int *p,unsigned int a,unsigned int b,unsigned int value) { if(value!=~0U) { FUN_02037910(p,p[17]); p[20]=1; } return ++p[22]; }
