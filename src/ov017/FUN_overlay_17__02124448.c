// FUN_overlay_17__02124448 @ 0x02124448 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02124448 @ 0x02124448 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Pop queued value, notify manager with presence flag and clamp queue minimum.
 * Field identities remain provisional.
 */
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120dc8(void *,int);
extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__02124448(void *p) {int present=FUN_overlay_17__02123eec(p)!=0;FUN_overlay_17__02120dc8(FUN_overlay_17__02120980(),present);FUN_overlay_17__02123d58(p,10);}
