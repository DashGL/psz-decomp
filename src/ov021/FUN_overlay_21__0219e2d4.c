// FUN_overlay_21__0219e2d4 @ 0x0219e2d4 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219e2d4 @ 0x0219e2d4 (code 0x32, pool extent 0x32, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Cache owner array, set four record state pairs and clear local state.
 * Field identities remain provisional.
 */
void FUN_overlay_21__0219e2d4(unsigned int *p) {int i;p[3]=((unsigned int *)p[1])[59];for(i=0;i<4;i++){((unsigned int *)(p[3]+i*188))[6]=5;((unsigned int *)(p[3]+i*188))[7]=2;}p[4]=0;p[5]=0;p[6]=0;}
