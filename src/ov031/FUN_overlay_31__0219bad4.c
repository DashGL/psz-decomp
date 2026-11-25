// FUN_overlay_31__0219bad4 @ 0x0219bad4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219bad4 @ 0x0219bad4 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Copy three-word record and return destination.
 * Field identities remain provisional.
 */
typedef struct Triple { unsigned int a,b,c; } Triple;
Triple *FUN_overlay_31__0219bad4(Triple *to,const Triple *from) { *to=*from; return to; }
