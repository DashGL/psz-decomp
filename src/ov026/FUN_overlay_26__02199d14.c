// FUN_overlay_26__02199d14 @ 0x02199d14 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_26__02199d14 @ 0x02199d14 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Restore saved child value when owner query succeeds.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02040d44(void *,unsigned int);
extern void FUN_02037924(void *);
void FUN_overlay_26__02199d14(void **p) { void *child=p[2]; if(FUN_02040d44(p[1],0))FUN_02037924(child); }
