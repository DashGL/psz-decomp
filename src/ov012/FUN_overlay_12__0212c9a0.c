// FUN_overlay_12__0212c9a0 @ 0x0212c9a0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c9a0 @ 0x0212c9a0 (code 0x14, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * If global object exists, reset embedded +4 through helper with zero.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_020c38f0(void *,int);
void FUN_overlay_12__0212c9a0(void) { char *object=*(char **)0x0213f2c8; if(object) FUN_020c38f0(object+4,0); }
