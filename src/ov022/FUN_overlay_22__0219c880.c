// FUN_overlay_22__0219c880 @ 0x0219c880 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219c880 @ 0x0219c880 (code 0x6, pool extent 0x6, thumb)
// check: vers=2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Store the two byte fields of the caller-owned request record.
 * Field identities remain provisional.
 */
void FUN_overlay_22__0219c880(unsigned char *p,int a,int b){p[0]=a;p[1]=b;}
