// FUN_overlay_31__0219a638 @ 0x0219a638 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a638 @ 0x0219a638 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Override incoming mode to five for child state three except mode six; store mode and return zero.
 * Field identities remain provisional.
 */
extern int FUN_overlay_31__0219883c(void *);
int FUN_overlay_31__0219a638(unsigned int *p,int mode) { if(mode!=6 && FUN_overlay_31__0219883c((char *)p[1]+0xf0)==1)mode=5; p[20]=mode; return 0; }
