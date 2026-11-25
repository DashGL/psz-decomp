// FUN_overlay_12__0212df90 @ 0x0212df90 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212df90 @ 0x0212df90 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Reset receiver in state two and set active state and sentinel.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212dfa8(void *);
void FUN_overlay_12__0212df90(unsigned int *p) {if(p[16]==2){FUN_overlay_12__0212dfa8(p);p[16]=1;p[28]=~0U;}}
