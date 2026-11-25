// FUN_overlay_16__0211f05c @ 0x0211f05c (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211f05c @ 0x0211f05c (code 0x24, pool extent 0x24, arm)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Return zero,128,or256 based on receiver flags.
 * ARM mode confirmed from USA instruction stream.
 */
unsigned int FUN_overlay_16__0211f05c(unsigned int *p) {if(!p[8])return 0;return p[10]?128:256;}
