// FUN_overlay_15__02136100 @ 0x02136100 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136100 @ 0x02136100 (code 0x46, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Release task, clear configured graphics area and free surface storage.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02137458(int,void *);
extern void *FUN_0205e2d4(void);
extern void FUN_020654b4(int,void *,int);
extern void FUN_overlay_15__021366dc(void *);
void FUN_overlay_15__02136100(char *p) {FUN_overlay_15__02137458(1,*(void **)(p+44));if(p==*(char **)0x0213e900+0x610)FUN_020654b4(0,FUN_0205e2d4(),0x6000);else FUN_020654b4(0,FUN_0205e2d4(),0x3000);FUN_overlay_15__021366dc(p+40);}
