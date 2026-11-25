// FUN_overlay_19__0219814c @ 0x0219814c (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219814c @ 0x0219814c (code 0x3a, pool extent 0x3a, thumb)
// check: vers=2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Clear requested state bit and enable three components for bit eight.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
void FUN_overlay_19__0219814c(unsigned int *p,int bit) {p[53]&=~(1u<<bit);if(bit==8){FUN_02044570(p,0,1);FUN_02044570(p,1,1);FUN_02044570(p,2,1);}}
