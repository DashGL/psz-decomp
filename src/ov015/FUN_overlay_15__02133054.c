// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__02133054 @ 0x02133054 (code 0x32, pool extent 0x40, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Advance signed brightness byte and replace task callback at endpoint.
 * Field identities remain provisional.
 */
extern signed char * D_0213e8d8;
extern void FUN_0205e4f0(void *,int);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02133054(void *task,unsigned unused_data) {(D_0213e8d8)[26]--;FUN_0205e4f0((void *)0x04000050,(D_0213e8d8)[26]);if((D_0213e8d8)[26]<=-12)FUN_overlay_15__0213743c(task,(void *)0x02133095);}

// Caller/callee ABI evidence: Closed task family37374 loads task12 to r1 and task to r0. Same-module fixed callback literal supplied to373d8 or3743c proves selected callback, preserving unused data position.33484 chain33004->3340c->33430->33484 independently decoded.
