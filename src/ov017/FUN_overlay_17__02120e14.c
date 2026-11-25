// FUN_overlay_17__02120e14 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_17__02120e14 @ 0x02120e14
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke immediate or deferred child operation selected by flag bit one.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__0211fe18(void *,int);
extern void FUN_overlay_17__0211ff64(void *,int);
void FUN_overlay_17__02120e14(unsigned int *p,int value,unsigned int flags) {void *child=(void *)p[2];if(child){if((flags&2)==0)FUN_overlay_17__0211fe18(child,value);else FUN_overlay_17__0211ff64(child,value);}}
