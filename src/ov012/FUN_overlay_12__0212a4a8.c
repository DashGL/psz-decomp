// FUN_overlay_12__0212a4a8 @ 0x0212a4a8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212a4a8 @ 0x0212a4a8 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize eight sentinel handles and clear receiver counters.
 * Field identities remain provisional.
 */
extern void FUN_0200c938(void *,unsigned int);
void *FUN_overlay_12__0212a4a8(int *p) {int i;p[0]=0;FUN_0200c938(p+1,32);p[9]=0;p[10]=0;p[11]=0;for(i=0;i<8;i++)p[i+1]=-1;return p;}
