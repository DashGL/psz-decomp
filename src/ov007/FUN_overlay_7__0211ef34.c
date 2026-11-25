// FUN_overlay_7__0211ef34 @ 0x0211ef34 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211ef34 @ 0x0211ef34 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Write packet type and singleton word low half, returning success.
 * Field identities remain provisional.
 */
extern unsigned int *FUN_0200d16c(void);
int FUN_overlay_7__0211ef34(void *unused,unsigned short *out) {out[0]=12;out[1]=FUN_0200d16c()[4];return 1;}
