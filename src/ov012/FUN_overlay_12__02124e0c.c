// FUN_overlay_12__02124e0c @ 0x02124e0c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_12__02124e0c @ 0x02124e0c (code 0x2c, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily construct small singleton and return shared instance.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__021209d8(void *);
void *FUN_overlay_12__02124e0c(void) {unsigned int **slot=(unsigned int **)0x0213ed00;if(!*slot) {unsigned int *p=FUN_020ba894(12);if(p) {FUN_overlay_12__021209d8(p);p[0]=0x0213dc6c;p[1]=0;p[2]=0;}*slot=p;}return *slot;}
