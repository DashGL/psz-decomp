// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02128014 @ 0x02128014 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__02128014 @ 0x02128014 (code 0x20, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * When global transition succeeds mark receiver byte and enqueue supplied task.
 * Field identities remain provisional.
 */
extern int FUN_overlay_15__02134970(void);
extern void FUN_overlay_15__02137440(unsigned int,void *);
void FUN_overlay_15__02128014(void *task,unsigned unused_data) {if(FUN_overlay_15__02134970()){(*(unsigned char **)0x0213e810)[123553]=1;FUN_overlay_15__02137440(0,task);}}

// Caller/callee ABI evidence: Closed task family37374 loads task12 to r1 and task to r0. Same-module fixed callback literal supplied to373d8 or3743c proves selected callback, preserving unused data position.33484 chain33004->3340c->33430->33484 independently decoded.
