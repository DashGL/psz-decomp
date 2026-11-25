// FUN_overlay_15__02130b50 @ 0x02130b50 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02130b50 @ 0x02130b50 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read hardware status bit fifteen.
 * Field identities remain provisional.
 */
int FUN_overlay_15__02130b50(void) {return ((*(volatile unsigned short *)0x027fffa8&0x8000)>>15)!=0;}
