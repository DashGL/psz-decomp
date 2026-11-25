// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02125660 @ 0x02125660 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02125660 @ 0x02125660 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Flush global palette source, transfer192 bytes and enqueue supplied task on queue one.
 * Field identities remain provisional.
 */
extern void FUN_0206740c(void *,unsigned int);
extern void FUN_0205eedc(void *,unsigned int,unsigned int);
extern void FUN_overlay_15__02137440(unsigned int,void *);
void FUN_overlay_15__02125660(void *task,unsigned unused_data) {void **g=(void **)0x0213e7d4;FUN_0206740c(*g,192);FUN_0205eedc(*g,0,192);FUN_overlay_15__02137440(1,task);}

// Caller/callee ABI evidence: Closed task family37374 loads task12 to r1 and task to r0. Same-module fixed callback literal supplied to373d8 or3743c proves selected callback, preserving unused data position.33484 chain33004->3340c->33430->33484 independently decoded.
