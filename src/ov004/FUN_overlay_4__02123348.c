// FUN_overlay_4__02123348 @ 0x02123348 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__02123348 @ 0x02123348 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize embedded record then clear two fields and set sentinel.
 * Field identities remain provisional.
 */
extern void FUN_0203955c(void *);
void FUN_overlay_4__02123348(unsigned int *p) {FUN_0203955c(p);p[4]=0;p[5]=~0U;p[6]=0;}
