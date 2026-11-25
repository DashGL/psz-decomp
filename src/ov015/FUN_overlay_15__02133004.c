// FUN_overlay_15__02133004 @ 0x02133004 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__02133004 @ 0x02133004 (code 0x22, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Enqueue existing task then replace global slot with newly scheduled queue-one task.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02137440(unsigned int,void *);
extern void *FUN_overlay_15__021373d8(unsigned int,void *,void *,unsigned int);
void FUN_overlay_15__02133004(void) {void ***g=(void ***)0x0213e8d8;void *task;FUN_overlay_15__02137440(0,(*g)[5]);task=FUN_overlay_15__021373d8(1,(void *)0x0213340d,0,120);(*g)[5]=task;}
