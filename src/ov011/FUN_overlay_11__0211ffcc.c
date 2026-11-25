// FUN_overlay_11__0211ffcc @ 0x0211ffcc (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211ffcc @ 0x0211ffcc (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * If second argument and its stored pointer exist, free storage and clear it.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020ba8c4(void *);
void FUN_overlay_11__0211ffcc(void *unused,void **slot) { if(slot && *slot) { FUN_020ba8c4(*slot); *slot=0; } }
