// FUN_overlay_12__0212d77c @ 0x0212d77c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d77c @ 0x0212d77c (code 0x1e, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set global state and conditionally release resource when resident mode predicate is true.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212d700(int);
extern int FUN_02084bf8(const void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,unsigned int *);
void FUN_overlay_12__0212d77c(void) {FUN_overlay_12__0212d700(1);if(FUN_02084bf8((void *)0x0211a51c))FUN_020c2624(FUN_020c1fc8(),(unsigned int *)0x0213e218);}
