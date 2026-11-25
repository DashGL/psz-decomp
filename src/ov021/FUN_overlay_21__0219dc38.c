// FUN_overlay_21__0219dc38 @ 0x0219dc38 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219dc38 @ 0x0219dc38 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Set second child flag and clear first child flag.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219dc38(void **p) { char *a=p[1],*b=p[2]; *(unsigned int *)(b+0x80)=1; *(unsigned int *)(a+0x114)=0; }
