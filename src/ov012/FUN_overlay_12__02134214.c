// FUN_overlay_12__02134214 @ 0x02134214 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134214 @ 0x02134214 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Refresh optional global receiver in state one and return current state.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02134238(void *);
unsigned int FUN_overlay_12__02134214(void) {unsigned int *p=*(unsigned int **)0x0213f2f8;if(p){if(p[0]==1)FUN_overlay_12__02134238(p);return p[0];}return 0;}
