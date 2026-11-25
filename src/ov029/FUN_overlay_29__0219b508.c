// FUN_overlay_29__0219b508 @ 0x0219b508 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b508 @ 0x0219b508 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Disable completed child component, set state bit and mark receiver flag.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02036f08(void *,int);
void FUN_overlay_29__0219b508(void **p) {unsigned int *c=p[1];if(FUN_02040d2c(c,0)){FUN_02043ea4(c,0,0);FUN_02036f08(c,1);c[37]|=65536;}}
