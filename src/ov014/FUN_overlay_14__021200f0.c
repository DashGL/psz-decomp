// FUN_overlay_14__021200f0 @ 0x021200f0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__021200f0 @ 0x021200f0 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize two embedded sixteen-byte descriptors.
 * Field identities remain provisional.
 */
extern void *FUN_020c4434(void *);
void *FUN_overlay_14__021200f0(char *p) {FUN_020c4434(p+8);FUN_020c4434(p+24);return p;}
