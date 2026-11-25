// FUN_overlay_31__0219982c @ 0x0219982c (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219982c @ 0x0219982c (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Release old singleton selection, store new key and activate selection.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_31__021995ec(void);
extern void FUN_overlay_31__0219a808(void *,void *);
extern void FUN_overlay_31__0219a7c8(void *,void *);
void FUN_overlay_31__0219982c(signed char *p,const signed char *key) {void *m=FUN_overlay_31__021995ec();FUN_overlay_31__0219a808(m,p+220);p[220]=*key;p[221]=-1;FUN_overlay_31__0219a7c8(m,p+220);}
