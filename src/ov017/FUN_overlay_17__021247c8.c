// FUN_overlay_17__021247c8 @ 0x021247c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__021247c8 @ 0x021247c8 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop script value and apply mode bit two then raise threshold to ten.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120e78(void *,unsigned int,unsigned int);
extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__021247c8(void *p) {unsigned int value=FUN_overlay_17__02123eec(p);FUN_overlay_17__02120e78(FUN_overlay_17__02120980(),value,2);FUN_overlay_17__02123d58(p,10);}
