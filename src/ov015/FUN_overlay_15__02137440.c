// FUN_overlay_15__02137440 @ 0x02137440 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02137440 @ 0x02137440 (code 0xe, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Queue incoming value through indexed global channel.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135b98(void *,unsigned int);
void FUN_overlay_15__02137440(unsigned int index,unsigned int value) {char *p=*(char **)0x0213e964;FUN_overlay_15__02135b98(*(void **)(p+(index<<6)+4),value);}
