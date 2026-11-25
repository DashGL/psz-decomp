// FUN_overlay_4__02126694 @ 0x02126694 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_4__02126694 @ 0x02126694 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Return false for kinds six through nine, true otherwise; USA extent includes both switch return blocks.
 * Field identities remain provisional.
 */
int FUN_overlay_4__02126694(const unsigned int *p) {switch(p[0]){case 6:case 7:case 8:case 9:return 0;default:return 1;}}
