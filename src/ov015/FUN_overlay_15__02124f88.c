// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_15__02124f88 @ 0x02124f88 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch54.json; original draft retained for referenced provenance.
// FUN_overlay_15__02124f88 @ 0x02124f88 (code 0x38, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Move shared sprite upward, clamp endpoint and replace task callback.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02135a54(void *,int,int *,int *);
extern void FUN_overlay_15__02124f28(int);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02124f88(void *task,unsigned unused_data) {int x,y;FUN_overlay_15__02135a54((*(void ***)0x0213e788)[2],0,&x,&y);y-=4;FUN_overlay_15__02124f28(y);if(y<=168){FUN_overlay_15__02124f28(168);FUN_overlay_15__0213743c(task,(void *)0x02124fc9);}}

// Caller/callee ABI evidence: Concrete scheduler37374 invokes registered callback with task in r0 and task12 data in r1.373e8 stores callback/data at task8/12;3743c replaces same task8 callback. Selected same-module registration establishes this function belongs to that exact family. Second position is unused here.
