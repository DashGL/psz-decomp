// FUN_overlay_31__02199860 @ 0x02199860 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__02199860 @ 0x02199860 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Fetch input-free module registry then release two owner byte-selected slots.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_31__021995ec(void);
extern void FUN_overlay_31__0219a808(void *,void *),FUN_overlay_31__0219a7e8(void *,void *);
void FUN_overlay_31__02199860(char *p) { void *registry=FUN_overlay_31__021995ec(); FUN_overlay_31__0219a808(registry,p+0xdc); FUN_overlay_31__0219a7e8(registry,p+0xdd); }
