// FUN_overlay_16__02120cd8 @ 0x02120cd8 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_16__02120cd8 @ 0x02120cd8 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Render characters individually at six-unit horizontal spacing.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,int);
extern void FUN_020c3788(void *,void *,int,int,int);
void FUN_overlay_16__02120cd8(void *display,signed char *text,int x,int y) {int i; signed char c[2];for(i=0;text[i];i++){FUN_0200c938(c,2);c[0]=text[i];FUN_020c3788(display,c,x+6*i,y,1);}}
