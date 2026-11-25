// FUN_overlay_10__02121fec @ 0x02121fec (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121fec @ 0x02121fec (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate receiver with fixed mode and incoming owner value.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_10__02120c78(void *,int,unsigned int);
void *FUN_overlay_10__02121fec(unsigned int value) {void *p=FUN_020ba894(20);if(p)p=FUN_overlay_10__02120c78(p,2,value);return p;}
