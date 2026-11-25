// FUN_overlay_10__02121854 @ 0x02121854 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121854 @ 0x02121854 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Write constant halfword pair to second argument and return true.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_10__02121854(void *unused,unsigned short *out) { out[0]=6; out[1]=0; return 1; }
