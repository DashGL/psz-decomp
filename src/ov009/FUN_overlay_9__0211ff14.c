// FUN_overlay_9__0211ff14 @ 0x0211ff14 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211ff14 @ 0x0211ff14 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Emit packet once and advance receiver state to two.
 * Field identities remain provisional.
 */
int FUN_overlay_9__0211ff14(unsigned int *p,unsigned short *out) {int emitted=0;if(p[2]==0){out[0]=10;out[1]=4;*(unsigned int *)(out+2)=p[1];emitted=1;p[2]=2;}return emitted;}
