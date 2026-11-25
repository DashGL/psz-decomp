// FUN_overlay_29__02199bb8 @ 0x02199bb8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199bb8 @ 0x02199bb8 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Return local availability only when parent state is not one.
 * Field identities remain provisional.
 */
int FUN_overlay_29__02199bb8(unsigned int *p) { char *parent=(char *)p[1]; if(*(unsigned int *)(parent+0xd4)==1)return 0; return p[26]!=0; }
