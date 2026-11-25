// FUN_overlay_12__02128324 @ 0x02128324 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02128324 @ 0x02128324 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set request word in optional module object; retain observed return-register result.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__02128324(void) { char *object=*(char **)0x0213f2dc; if(object) { *(unsigned int *)(object+0x88)=1; return 1; } return 0x0213f2dc; }
