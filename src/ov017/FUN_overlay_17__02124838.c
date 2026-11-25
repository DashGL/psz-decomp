// FUN_overlay_17__02124838 @ 0x02124838 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124838 @ 0x02124838 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop two script operands and apply singleton action in reverse pop order.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120ea4(void *,unsigned int,unsigned int);
void FUN_overlay_17__02124838(void *p) {unsigned int first=FUN_overlay_17__02123eec(p);unsigned int second=FUN_overlay_17__02123eec(p);FUN_overlay_17__02120ea4(FUN_overlay_17__02120980(),second,first);}
