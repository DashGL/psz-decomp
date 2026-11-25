// FUN_overlay_25__02198ae8 @ 0x02198ae8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198ae8 @ 0x02198ae8 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Start animation one and initialize randomized fixed-point countdown.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern unsigned int FUN_02037208(void *,unsigned int);
void FUN_overlay_25__02198ae8(unsigned int *p) {void *child=(void *)p[1];FUN_02040c0c(child,0,1,4096,0);p[3]=(FUN_02037208(child,30)+30)<<12;p[4]=0;}
