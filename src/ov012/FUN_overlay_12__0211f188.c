// FUN_overlay_12__0211f188 @ 0x0211f188 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f188 @ 0x0211f188 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear display header, data buffer and trailing status words.
 * Field identities remain provisional.
 */
extern void FUN_02090b44(void *);
extern void FUN_0206557c(unsigned int,void *,unsigned int);
void FUN_overlay_12__0211f188(unsigned int *p) {FUN_02090b44(p);p[68]=0;p[69]=0;FUN_0206557c(0,p+4,256);p[70]=0;p[71]=0;}
