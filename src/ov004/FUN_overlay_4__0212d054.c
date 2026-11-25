// FUN_overlay_4__0212d054 @ 0x0212d054 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212d054 @ 0x0212d054 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Apply translated mode to each listed actor and clear pending state.
 * Field identities remain provisional.
 */
extern int FUN_overlay_4__0212d0b4(void *,int);
extern int FUN_02073b94(int,int);
void FUN_overlay_4__0212d054(int *p) {int i;for(i=0;i<p[26];i++) {int mode=FUN_overlay_4__0212d0b4(p,p[20+i]);FUN_02073b94(p[23+i],mode);}p[17]=0;}
