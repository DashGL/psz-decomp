// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02131090 @ 0x02131090 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02131090 @ 0x02131090 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy thirty-two bytes between global buffers then enqueue task into queue one.
 * Field identities remain provisional.
 */
extern void FUN_020654dc(const void *,void *,unsigned int);
extern void FUN_overlay_15__02137440(unsigned int,void *);
void FUN_overlay_15__02131090(void *task,unsigned unused_data) {void **p=(void **)0x0213e8b0;FUN_020654dc(p[1],p[2],32);FUN_overlay_15__02137440(1,task);}

// Caller/callee ABI evidence: Actual2131064 registrar supplies fixed callback2131091 to373d8 with data0; closed37374 runner supplies task and data positions. Second parameter is ignored by transfer callback.
