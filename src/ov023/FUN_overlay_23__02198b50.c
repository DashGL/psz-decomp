// FUN_overlay_23__02198b50 @ 0x02198b50 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198b50 @ 0x02198b50 (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation three and initialize randomized fixed-point countdown.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern int FUN_02035b60(int);
void FUN_overlay_23__02198b50(unsigned int *p) {FUN_02040c0c((void *)p[1],0,3,4096,0);p[4]=FUN_02035b60(368640)+368640;p[3]=1;}
