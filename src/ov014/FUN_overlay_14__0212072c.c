// FUN_overlay_14__0212072c @ 0x0212072c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__0212072c @ 0x0212072c (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Clear descriptor, initialize two embedded records and clear trailing byte flags.
 * Field identities remain provisional.
 */
extern void FUN_0206557c(int,void *,unsigned int);
extern void FUN_020c4560(void *);
void FUN_overlay_14__0212072c(unsigned char *p) {FUN_0206557c(0,p,60);FUN_020c4560(p+8);FUN_020c4560(p+24);p[40]=0;p[41]=0;p[42]=0;p[43]=0;}
