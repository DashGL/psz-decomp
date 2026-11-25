// FUN_overlay_31__0219a7e8 @ 0x0219a7e8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a7e8 @ 0x0219a7e8 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Clear validated byte-indexed slot only when its state matches.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219a798(void *,signed char *);
void FUN_overlay_31__0219a7e8(unsigned int *p,signed char *record) { if(FUN_overlay_31__0219a798(p,record)==1) { int index=record[0]; if(p[index]==2)p[index]=0; } }
