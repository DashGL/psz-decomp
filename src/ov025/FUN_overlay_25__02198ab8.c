// FUN_overlay_25__02198ab8 @ 0x02198ab8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198ab8 @ 0x02198ab8 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * If slot query succeeds, mark child flag and restore its saved value.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,unsigned int);
extern void FUN_02037924(void *);
void FUN_overlay_25__02198ab8(void **p) { if(FUN_02040d2c(p[1],0)) { unsigned int *child=p[2]; child[18]=1; FUN_02037924(child); } }
