// FUN_overlay_23__02198af4 @ 0x02198af4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198af4 @ 0x02198af4 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation two, choose randomized countdown and clear state counter.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern unsigned int FUN_02035b60(unsigned int);
void FUN_overlay_23__02198af4(unsigned int *p) {FUN_02040c0c((void *)p[1],0,2,4096,0);p[4]=FUN_02035b60(368640)+245760;p[3]=0;}
