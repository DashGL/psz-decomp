// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_15__02133484 @ 0x02133484 (code 0x30, pool extent 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Advance signed brightness byte and replace task callback at endpoint.
 * Field identities remain provisional.
 */
extern char G_021334C1[]; extern char G_0213E8D8[]; extern char G_04000050[];
extern void FUN_0205e4f0(void *,int);
extern void FUN_overlay_15__0213743c(void *,void *);
void FUN_overlay_15__02133484(void *task,unsigned unused_data) {(*(signed char **)G_0213E8D8)[26]++;FUN_0205e4f0((void *)G_04000050,(*(signed char **)G_0213E8D8)[26]);if((*(signed char **)G_0213E8D8)[26]>=0)FUN_overlay_15__0213743c(task,(void *)G_021334C1);}

// Caller/callee ABI evidence: Closed task family37374 loads task12 to r1 and task to r0. Same-module fixed callback literal supplied to373d8 or3743c proves selected callback, preserving unused data position.33484 chain33004->3340c->33430->33484 independently decoded.
