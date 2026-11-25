// FUN_overlay_18__0211ef14 @ 0x0211ef14 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211ef14 @ 0x0211ef14 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Decode bounded byte selector into parity and derived category.
 * Field identities remain provisional.
 */
extern int FUN_0209e3ac(int,int);
void FUN_overlay_18__0211ef14(unsigned char *p) {int selector=p[36];if(selector>=0&&selector<14) {p[33]=selector&1;p[34]=FUN_0209e3ac(selector,((signed char *)p)[32]);}}
