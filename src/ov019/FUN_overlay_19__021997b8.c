// FUN_overlay_19__021997b8 @ 0x021997b8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__021997b8 @ 0x021997b8 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base receiver then install table and retain two supplied values.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_19__02198c5c(void *);
void *FUN_overlay_19__021997b8(unsigned int *p,unsigned int a,unsigned int b) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d2d0;p[12]=-1u;p[13]=0;p[14]=0;p[13]=a;p[14]=b;return p;}
