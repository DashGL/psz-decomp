// FUN_overlay_15__0212093c @ 0x0212093c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212093c @ 0x0212093c (code 0xc, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store incoming state and convert external record into remaining receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__0212088c(void *,void *);
void FUN_overlay_15__0212093c(unsigned int *p,void *record,unsigned int state) {p[0]=state;FUN_overlay_15__0212088c(record,p+1);}
