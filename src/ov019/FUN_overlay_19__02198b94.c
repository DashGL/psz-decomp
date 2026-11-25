// FUN_overlay_19__02198b94 @ 0x02198b94 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198b94 @ 0x02198b94 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize packet fields and store signed value divided by four.
 * Field identities remain provisional.
 */
void *FUN_overlay_19__02198b94(unsigned char *p,unsigned char value,int amount) { p[2]=4; p[3]=0; p[0]=amount/4; p[8]=value; return p; }
