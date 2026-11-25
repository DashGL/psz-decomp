// FUN_overlay_15__0211f168 @ 0x0211f168 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211f168 @ 0x0211f168 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Advance unmasked counter portion while preserving mask bits and skip terminal code.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_15__0211f168(unsigned int value,unsigned int mask) {unsigned int fixed=value&mask;unsigned int inverse=~mask;unsigned int next=((value&inverse)+1)|fixed;if(next>=(inverse|fixed))next=fixed|1;return next;}
