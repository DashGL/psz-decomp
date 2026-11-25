// FUN_overlay_30__021989c0 @ 0x021989c0 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_30__021989c0 @ 0x021989c0 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke owner operation then mark saved child flag.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_30__021989c0(void **p) { unsigned int *child=p[2]; FUN_02040c0c(p[1],0,3,0x1000,0); child[18]=1; }
