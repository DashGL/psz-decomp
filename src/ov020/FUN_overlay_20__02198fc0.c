// FUN_overlay_20__02198fc0 @ 0x02198fc0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_20__02198fc0 @ 0x02198fc0 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Set or clear nested child flag according to incoming boolean.
 * Field identities remain provisional.
 */
void FUN_overlay_20__02198fc0(char *p,int enabled) { if(enabled) { unsigned int *child=*(unsigned int **)(p+0xd4); *child|=1; } else { unsigned int *child=*(unsigned int **)(p+0xd4); *child&=~1U; } }
