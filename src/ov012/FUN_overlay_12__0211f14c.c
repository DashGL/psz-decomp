// FUN_overlay_12__0211f14c @ 0x0211f14c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211f14c @ 0x0211f14c (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize descriptor, clear four trailing words and 256-byte payload.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_0206557c(int,void *,unsigned int);
unsigned int *FUN_overlay_12__0211f14c(unsigned int *p) {FUN_02071d0c(p);p[68]=0;p[69]=0;p[70]=0;p[71]=0;FUN_0206557c(0,p+4,256);return p;}
