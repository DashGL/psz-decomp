// FUN_overlay_21__02199f24 @ 0x02199f24 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__02199f24 @ 0x02199f24 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Copy four signed bytes and one word in original sequential order.
 * Field identities remain provisional.
 */
void *FUN_overlay_21__02199f24(signed char *p,const signed char *record) { p[0]=record[0]; p[1]=record[1]; p[2]=record[2]; p[3]=record[3]; *(unsigned int *)(p+4)=*(const unsigned int *)(record+4); return p; }
