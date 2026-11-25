// FUN_overlay_16__0211f40c @ 0x0211f40c (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211f40c @ 0x0211f40c (code 0x40, pool extent 0x40, arm)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Advance count below capacity and wrap cursor at limit.
 * ARM mode confirmed from USA instruction stream.
 */
int FUN_overlay_16__0211f40c(unsigned int *p) {unsigned int count=p[39];if(count>=p[40])return 0;p[39]=count+1;++p[48];if(p[48]==p[41])p[48]=0;return 1;}
