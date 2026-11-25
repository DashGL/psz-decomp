// FUN_overlay_17__021211e8 @ 0x021211e8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__021211e8 @ 0x021211e8 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Configure resident channel five using supplied second argument.
 * Field identities remain provisional.
 */
extern void FUN_020c189c(unsigned int,int);
extern void FUN_020c1aac(unsigned int,int);
extern void FUN_020c18d8(unsigned int,int);
void FUN_overlay_17__021211e8(void *self,unsigned int value) {FUN_020c189c(0,5);FUN_020c1aac(value,5);FUN_020c18d8(value,5);}
