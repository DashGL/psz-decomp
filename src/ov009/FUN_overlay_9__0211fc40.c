// FUN_overlay_9__0211fc40 @ 0x0211fc40 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211fc40 @ 0x0211fc40 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Report non-sentinel handle distinct from receiver handle.
 * Field identities remain provisional.
 */
int FUN_overlay_9__0211fc40(unsigned int *p,unsigned int handle) {if(handle!=~0U && handle!=p[27])return 1;return 0;}
