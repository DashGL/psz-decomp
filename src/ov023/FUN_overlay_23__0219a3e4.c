// FUN_overlay_23__0219a3e4 @ 0x0219a3e4 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219a3e4 @ 0x0219a3e4 (code 0x46, pool extent 0x46, thumb)
// check: vers=2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Hide completed child and set flag only when all handles are inactive.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,int);
extern void FUN_02043ea4(void *,int,int);
extern void FUN_02036f08(void *,int);
extern int FUN_02075090(void *);
void FUN_overlay_23__0219a3e4(int **p) {int *c=p[1],done=0,inactive;if(FUN_02040d2c(c,0)){FUN_02043ea4(c,0,0);FUN_02036f08(c,1);done=1;}inactive=FUN_02075090(c);if(done&&inactive)c[37]|=0x10000;}
