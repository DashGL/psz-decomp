// FUN_overlay_12__021358ec @ 0x021358ec (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__021358ec @ 0x021358ec (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize embedded holders and record with trailing sentinel and zero.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__02134a14(void *);
extern void *FUN_overlay_12__02134b68(void *);
extern void FUN_0203955c(void *);
int *FUN_overlay_12__021358ec(int *p) {p[0]=0;FUN_overlay_12__02134a14(p+1);p[2]=0;FUN_overlay_12__02134b68(p+3);p[4]=-1;FUN_0203955c(p+5);p[9]=-1;p[10]=0;return p;}
