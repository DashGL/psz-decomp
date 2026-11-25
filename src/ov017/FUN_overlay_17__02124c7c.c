// FUN_overlay_17__02124c7c @ 0x02124c7c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124c7c @ 0x02124c7c (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop two operands, query manager and enqueue the resulting word.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern unsigned int FUN_overlay_17__02120fa4(void *,unsigned int,unsigned int);
extern void FUN_overlay_17__02123df4(void *,unsigned int);
void FUN_overlay_17__02124c7c(void *p) {unsigned int a=FUN_overlay_17__02123eec(p);unsigned int b=FUN_overlay_17__02123eec(p);unsigned int result=FUN_overlay_17__02120fa4(FUN_overlay_17__02120980(),b,a);FUN_overlay_17__02123df4(p,result);}
