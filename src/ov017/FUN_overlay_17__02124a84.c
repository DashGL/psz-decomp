// FUN_overlay_17__02124a84 @ 0x02124a84 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124a84 @ 0x02124a84 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop script value, apply through singleton, and raise receiver threshold to fifteen.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120f58(void *,unsigned int);
extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__02124a84(void *self) {unsigned int value=FUN_overlay_17__02123eec(self);FUN_overlay_17__02120f58(FUN_overlay_17__02120980(),value);FUN_overlay_17__02123d58(self,15);}
