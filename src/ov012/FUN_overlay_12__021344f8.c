// FUN_overlay_12__021344f8 @ 0x021344f8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021344f8 @ 0x021344f8 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Query global receiver when initialized, otherwise return zero.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__02134514(void *,unsigned int);
int FUN_overlay_12__021344f8(unsigned int selector) {void *p=*(void **)0x0213f2f8;if(p)return FUN_overlay_12__02134514(p,selector);return 0;}
