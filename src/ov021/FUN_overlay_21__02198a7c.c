// FUN_overlay_21__02198a7c @ 0x02198a7c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__02198a7c @ 0x02198a7c (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Update four strided owner child records.
 * Field identities remain provisional.
 */
extern void FUN_overlay_21__0219b008(void *);
void FUN_overlay_21__02198a7c(char *p) { int i; for(i=0;i<4;i++)FUN_overlay_21__0219b008(*(char **)(p+0xec)+i*0xbc); }
