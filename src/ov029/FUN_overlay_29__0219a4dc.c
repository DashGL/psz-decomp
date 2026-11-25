// FUN_overlay_29__0219a4dc @ 0x0219a4dc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219a4dc @ 0x0219a4dc (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize flag and sentinel fields then zero embedded vector.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
void *FUN_overlay_29__0219a4dc(unsigned int *p) { p[0]=0; p[1]=~0U; p[2]=~0U; FUN_02035408(p+3,0,0,0); return p; }
