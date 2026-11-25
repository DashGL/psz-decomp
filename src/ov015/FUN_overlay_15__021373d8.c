// FUN_overlay_15__021373d8 @ 0x021373d8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__021373d8 @ 0x021373d8 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and enqueue a task with its optional flag cleared.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__021373e8(int,unsigned int,void *,unsigned int,unsigned char);
void *FUN_overlay_15__021373d8(int queue,unsigned int callback,void *data,unsigned int priority){return FUN_overlay_15__021373e8(queue,callback,data,priority,0);}
