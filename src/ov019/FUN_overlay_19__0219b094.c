// FUN_overlay_19__0219b094 @ 0x0219b094 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b094 @ 0x0219b094 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Copy four signed bytes followed by two words in original order.
 * Field identities remain provisional.
 */
void *FUN_overlay_19__0219b094(signed char *p,const signed char *record) { p[0]=record[0]; p[1]=record[1]; p[2]=record[2]; p[3]=record[3]; *(unsigned int *)(p+4)=*(const unsigned int *)(record+4); *(unsigned int *)(p+8)=*(const unsigned int *)(record+8); return p; }
