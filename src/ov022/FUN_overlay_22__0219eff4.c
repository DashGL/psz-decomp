// FUN_overlay_22__0219eff4 @ 0x0219eff4 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219eff4 @ 0x0219eff4 (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Map twelve selector categories to three constants; return negative one outside range.
 * Field identities remain provisional.
 */
int FUN_overlay_22__0219eff4(void *self,unsigned int kind) {switch(kind){case 0:case 1:case 2:return 64;case 3:case 4:case 5:case 6:return 63;case 7:case 8:case 9:case 10:case 11:return 65;default:return -1;}}
