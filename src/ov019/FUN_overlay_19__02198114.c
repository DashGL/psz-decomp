// FUN_overlay_19__02198114 @ 0x02198114 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198114 @ 0x02198114 (code 0x38, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Set requested state bit and disable three components for bit eight.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
void FUN_overlay_19__02198114(unsigned int *p,int bit) {p[53]|=1u<<bit;if(bit==8){FUN_02044570(p,0,0);FUN_02044570(p,1,0);FUN_02044570(p,2,0);}}
