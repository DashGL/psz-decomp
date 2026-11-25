// FUN_overlay_26__021989a0 @ 0x021989a0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_26__021989a0 @ 0x021989a0 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Start child animation one and assign randomized fixed-point duration.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
extern unsigned int FUN_02035b60(unsigned int);
void FUN_overlay_26__021989a0(unsigned int *p) {FUN_02040c0c((void *)p[1],0,1,4096,0);p[3]=(FUN_02035b60(31)+30)<<12;}
