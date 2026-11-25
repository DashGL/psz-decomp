// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_overlay_17__02124f64 @ 0x02124f64 (code 0x14, pool extent 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Construct global receiver and register callback address in resident exit list; registration only stores pointer values.
 * Field identities remain provisional.
 */
extern char G_02120CD1[]; extern char G_02126B48[]; extern char G_02126B54[];
extern void *FUN_overlay_17__02120c9c(void *);
extern void FUN_0200c594(void *,void *,void *);
void FUN_overlay_17__02124f64(void) {FUN_overlay_17__02120c9c((void *)G_02126B54);FUN_0200c594((void *)G_02126B54,(void *)G_02120CD1,(void *)G_02126B48);}
