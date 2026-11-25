// FUN_overlay_17__021242cc @ 0x021242cc (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_17__021242cc @ 0x021242cc (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Push global input mask then ensure receiver count at least one.
 * Field identities remain provisional.
 */
extern unsigned int FUN_020bbf54(void);
extern void FUN_overlay_17__02123df4(void *,unsigned int);
extern void FUN_overlay_17__02123d58(void *,int);
void FUN_overlay_17__021242cc(void *p) {FUN_overlay_17__02123df4(p,FUN_020bbf54());FUN_overlay_17__02123d58(p,1);}
