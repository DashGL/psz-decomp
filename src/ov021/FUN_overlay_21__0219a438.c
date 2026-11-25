// FUN_overlay_21__0219a438 @ 0x0219a438 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219a438 @ 0x0219a438 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Clear fifteen owner slot options then mark local completion flag.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,unsigned int,unsigned int);
void FUN_overlay_21__0219a438(char *p) { int i; for(i=0;i<15;i++)FUN_02044570(*(void **)(p+4),i,0); *(unsigned int *)(p+0xf4)=1; }
