// FUN_overlay_12__0213088c @ 0x0213088c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213088c @ 0x0213088c (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch, reset input-free module singleton and clean base; return self.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02131dd4(void *);
void *FUN_overlay_12__0213088c(unsigned int *self) { self[0]=0x0213e68c; FUN_overlay_12__0212c9a0(); FUN_overlay_12__02131dd4(self); return self; }
