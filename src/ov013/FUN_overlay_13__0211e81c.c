// FUN_overlay_13__0211e81c @ 0x0211e81c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211e81c @ 0x0211e81c (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Write event pair if receiver selection is valid.
 * Field identities remain provisional.
 */
int FUN_overlay_13__0211e81c(int *p,unsigned short *out) {if(p[1]>=0 && p[1]<p[4]){out[0]=5;out[1]=3;return 1;}return 0;}
