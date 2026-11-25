// FUN_overlay_28__02198390 @ 0x02198390 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198390 @ 0x02198390 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Copy resident three-word template into owner +d4.
 * Field identities and high-level API contracts remain provisional.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_overlay_28__02198390(char *self) { *(Triple *)(self+0xd4)=*(const Triple *)0x020fc958; }
