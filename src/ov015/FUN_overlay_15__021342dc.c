// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_15__021342dc @ 0x021342dc
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Return global context word +40.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern unsigned int * data_0213e8e0[];
unsigned int FUN_overlay_15__021342dc(void) { unsigned int *context=data_0213e8e0[1]; return context[16]; }
