// FUN_overlay_22__0219a3c4 @ 0x0219a3c4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a3c4 @ 0x0219a3c4 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Approach target angle by signed-halfword shortest delta and bounded step.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_22__0219a3c4(unsigned int current,unsigned int target,int step) {int delta=(short)(target-current);if(delta>=(int)(0U-(unsigned int)step) && delta<=step)return target;if(delta<0)return (unsigned short)(current-(unsigned int)step);return (unsigned short)(current+(unsigned int)step);}
