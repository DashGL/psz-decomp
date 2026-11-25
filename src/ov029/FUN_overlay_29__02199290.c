// FUN_overlay_29__02199290 @ 0x02199290 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199290 @ 0x02199290 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Disable completed component, set state bit and mark child when all handles are clear.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02036f08(void *,int);
extern int FUN_02075090(void *);
void FUN_overlay_29__02199290(int **p) {int *child=p[1];if(FUN_02040d2c(child,0)){FUN_02043ea4(child,0,0);FUN_02036f08(child,1);if(FUN_02075090(child))child[37]|=65536;}}
