// FUN_overlay_17__021242e8 @ 0x021242e8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_17__021242e8 @ 0x021242e8 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop queue value, update global event setting and enqueue engine notification.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void FUN_02079370(void);
extern void FUN_02079388(unsigned int);
extern void *FUN_0200d16c(void);
extern int FUN_0200d3a4(void *,int,int);
extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__021242e8(void *p) {unsigned int value=FUN_overlay_17__02123eec(p);FUN_02079370();FUN_02079388(value);FUN_0200d3a4(FUN_0200d16c(),12,0);FUN_overlay_17__02123d58(p,100);}
