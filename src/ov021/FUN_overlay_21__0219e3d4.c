// FUN_overlay_21__0219e3d4 @ 0x0219e3d4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e3d4 @ 0x0219e3d4 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Cache owner records and set mode ten in two records except mode twelve.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219e3d4(unsigned int *p) {int i;p[3]=((unsigned int *)p[1])[59];for(i=0;i<2;i++){unsigned int *record=(unsigned int *)(p[3]+i*188);if(record[5]!=12)record[6]=10;}}
