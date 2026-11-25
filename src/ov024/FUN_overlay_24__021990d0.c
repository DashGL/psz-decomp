// FUN_overlay_24__021990d0 @ 0x021990d0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_24__021990d0 @ 0x021990d0 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Copy input coordinates into extended owner field then set flag value fifteen.
 * Field identities remain provisional.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
void FUN_overlay_24__021990d0(char *p,Triple *record) { *(Triple *)(p+0xd8)=*record; *(unsigned int *)(p+0xd4)=15; }
