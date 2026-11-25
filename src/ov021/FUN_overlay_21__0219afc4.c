// FUN_overlay_21__0219afc4 @ 0x0219afc4 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219afc4 @ 0x0219afc4 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Configure one of two three-entry patterns and update its associated tuning values.
 * Field identities remain provisional.
 */
extern void FUN_overlay_21__0219b68c(void *,int);void FUN_overlay_21__0219afc4(int *p,int mode) {if(mode==0){p[4]=0;p[10]=p[2]+1;p[11]=p[2]+3;p[12]=p[2]+7;FUN_overlay_21__0219b68c(p,0);}else if(mode==1){p[4]=1;p[10]=p[2]+5;p[11]=p[2]+11;p[12]=p[2]+13;FUN_overlay_21__0219b68c(p,1);}}
