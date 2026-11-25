// FUN_overlay_15__02120884 @ 0x02120884 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__02120884 @ 0x02120884 (code 0x8, pool extent 0x8, thumb)
// check: vers=2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Store input word and mark following halfword one; returns one.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
int FUN_overlay_15__02120884(unsigned int value,char *record) { *(unsigned int *)record=value; *(unsigned short *)(record+4)=1; return 1; }
