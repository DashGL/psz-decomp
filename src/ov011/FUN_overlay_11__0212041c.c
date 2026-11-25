// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x46 exact_bytes=0 bad_relocs=0
// Semantic proof: notes/sessions/matching-overlays-2026-11-12-small-diff-next-semantic.json
// FUN_overlay_11__0212041c @ 0x0212041c (code 0x46, pool extent 0x46, thumb)
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Multiply corresponding packed byte channels and scale each by 256.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_11__0212041c(void *unused,unsigned int a,unsigned int b) {unsigned int low=((unsigned int)(unsigned char)a*(unsigned char)b)>>8;unsigned int second=((unsigned char)(a>>8)*(unsigned char)(b>>8))&~255U;unsigned int top=((a>>24)*(b>>24))>>8;unsigned int third=((unsigned int)(unsigned char)(a>>16)*(unsigned char)(b>>16))>>8;return (top<<24)|(third<<16)|second|low;}
