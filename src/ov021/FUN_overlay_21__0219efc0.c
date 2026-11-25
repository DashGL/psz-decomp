// FUN_overlay_21__0219efc0 @ 0x0219efc0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219efc0 @ 0x0219efc0 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Clear two fields in four strided nested owner records.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219efc0(void **p) { char *records=*(char **)((char *)p[1]+0xec); int i; for(i=0;i<4;i++) { *(unsigned int *)(records+i*0xbc+0x1c)=0; *(unsigned int *)(records+i*0xbc+0x24)=0; } }
