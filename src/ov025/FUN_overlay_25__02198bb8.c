// FUN_overlay_25__02198bb8 @ 0x02198bb8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198bb8 @ 0x02198bb8 (code 0x16, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch and run two receiver-only cleanup stages.
 * Field identities remain provisional.
 */
extern void FUN_overlay_25__02198e7c(void *),FUN_02035518(void *);
void *FUN_overlay_25__02198bb8(unsigned int *p) { p[0]=0x0219acdc; FUN_overlay_25__02198e7c(p); FUN_02035518(p); return p; }
