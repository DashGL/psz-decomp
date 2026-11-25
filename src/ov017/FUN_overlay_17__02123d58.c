// FUN_overlay_17__02123d58 @ 0x02123d58 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__02123d58 @ 0x02123d58 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Raise signed extended field to incoming minimum.
 * Field identities remain provisional.
 */
void FUN_overlay_17__02123d58(char *p,int value) {int current=*(int *)(p+0x9d20);if(current<=value)current=value;*(int *)(p+0x9d20)=current;}
